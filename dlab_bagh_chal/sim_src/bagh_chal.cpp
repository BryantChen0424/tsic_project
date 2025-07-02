#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vbagh_chal.h"
#include "Vbagh_chal__Syms.h"
#include <iostream>
#include <iomanip>
#include <bitset>
#include <sstream>
#include <string>

const char* op_type_str(int op_code) {
    switch (op_code) {
        case 1: return "GOAT - Choose (GCH)";
        case 2: return "GOAT - Rechoose or Place (GRCHPL)";
        case 3: return "GOAT - Place (GPL)";
        case 4: return "TIGER - Choose (TCH)";
        case 5: return "TIGER - Rechoose or Place (TRCHPL)";
        default: return "None";
    }
}

void print_board(Vbagh_chal* dut) {
    std::cout << "[BOARD] T = Tiger, G = Goat, . = empty" << std::endl;
    for (int i = 0; i < 5; ++i) {
        std::cout << "  ";
        for (int j = 0; j < 5; ++j) {
            int idx = i * 5 + j;
            bool occ = (dut->bagh_chal->occupied >> idx) & 1;
            bool who = (dut->bagh_chal->whos >> idx) & 1;
            if (!occ) std::cout << " .";
            else std::cout << (who ? " T" : " G");
        }
        std::cout << std::endl;
    }
}

int main(int argc, char **argv) {
    if (argc != 2) {
        std::cout << "usage: obj <waveform>." << std::endl;
    }
    std::ios::sync_with_stdio(true);
    std::cout << std::unitbuf;

    Verilated::commandArgs(argc, argv);
    Vbagh_chal* dut = new Vbagh_chal;

    VerilatedVcdC* tfp = new VerilatedVcdC;
    Verilated::traceEverOn(true);
    dut->trace(tfp, 99);
    tfp->open(argv[1]);

    int t = 0;
    auto tick = [&](int cycles = 1) {
        for (int i = 0; i < cycles; ++i) {
            dut->clk = 0; dut->eval(); tfp->dump(t += 5);
            dut->clk = 1; dut->eval(); tfp->dump(t += 5);
        }
    };

    // Reset
    dut->rst_n = 0; tick(2);
    dut->rst_n = 1; tick(2);

    std::string line;

    // 初始狀態
    uint32_t selectable = 0b0111011111111111111101110; // 除了四角為 0，其餘為 1
    int goats_in_hand = 20;
    int goats_killed = 0;
    int op_mode = 3;  // OP_GPL

    while (true) {
        std::cout << "\n========= GAME STATE =========" << std::endl;
        std::cout << "[PLAYER] " << ((op_mode <= 3) ? "GOAT" : "TIGER") << std::endl;
        std::cout << "[ACTION] " << op_type_str(op_mode) << std::endl;
        std::cout << "[GOATS IN HAND] " << goats_in_hand << std::endl;
        std::cout << "[GOATS KILLED] " << goats_killed << std::endl;

        print_board(dut);

        std::cout << "[SELECTABLE] (* = valid move)" << std::endl;
        for (int i = 0; i < 5; ++i) {
            std::cout << "  ";
            for (int j = 0; j < 5; ++j) {
                int idx = i * 5 + j;
                std::cout << ((selectable >> idx) & 1 ? " *" : " .");
            }
            std::cout << std::endl;
        }

        std::cout << "[INPUT] Enter op_i op_j (0~4), or 'exit': ";
        std::getline(std::cin, line);
        if (line == "exit") break;

        std::istringstream iss(line);
        int op_i, op_j;
        if (!(iss >> op_i >> op_j) || op_i < 0 || op_i > 4 || op_j < 0 || op_j > 4) {
            std::cout << "[ERROR] Invalid input. Use: <op_i> <op_j> with 0 <= op_i,j <= 4" << std::endl;
            continue;
        }

        int idx = op_i * 5 + op_j;
        if (((selectable >> idx) & 1) == 0) {
            std::cout << "[WARN] The selected position is not selectable. Try again." << std::endl;
            continue;
        }

        // Send operation
        dut->op_i = op_i;
        dut->op_j = op_j;
        dut->op_valid = 1;

        while (!dut->op_ready) tick();
        tick();  // pulse
        dut->op_valid = 0;

        // Wait for result
        dut->re_ready = 1;
        while (!dut->re_valid) tick();

        // Update local state from dut
        op_mode = dut->re_possible_ops;
        selectable = dut->re_selectable;
        goats_in_hand = dut->o_goats_in_hand;
        goats_killed = dut->o_goats_killed;

        if (dut->re_is_finished) {
            std::cout << "\n==== GAME OVER ====" << std::endl;
            std::cout << "[INFO] Restarting game..." << std::endl;
            selectable = 0b0111011111111111111101110;
            goats_in_hand = 20;
            goats_killed = 0;
            op_mode = 3; // OP_GPL
        }

        tick();
        dut->re_ready = 0;
        tick(2);

        
    }

    tfp->close();
    delete tfp;
    delete dut;
    return 0;
}
