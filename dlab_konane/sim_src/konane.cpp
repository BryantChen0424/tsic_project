
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vkonane.h"
#include "Vkonane__Syms.h"
#include <iostream>
#include <iomanip>
#include <bitset>
#include <sstream>
#include <string>

void print_board(Vkonane* dut) {
    std::cout << "[BOARD] B = Black, W = White, . = empty" << std::endl;
    for (int i = 0; i < 6; ++i) {
        std::cout << "  ";
        for (int j = 0; j < 6; ++j) {
            int idx = i * 6 + j;
            bool occ = (dut->konane->occupied >> idx) & 1;
            if (!occ) {
                std::cout << " .";
            } else {
                std::cout << ((dut->konane->black_all >> idx) & 1 ? " B" : " W");
            }
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
    Vkonane* dut = new Vkonane;

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

    int player_id = 0;
    uint64_t selectable = 0b000000000100000000000001000000000100;
    bool is_finished = false;
    bool can_giveup = false;

    while (true) {
        std::cout << "\n========= KONANE =========" << std::endl;
        std::cout << "[PLAYER] " << (player_id == 0 ? "BLACK" : "WHITE") << std::endl;
        print_board(dut);

        std::cout << "[SELECTABLE] (* = valid move)" << std::endl;
        for (int i = 0; i < 6; ++i) {
            std::cout << "  ";
            for (int j = 0; j < 6; ++j) {
                int idx = i * 6 + j;
                std::cout << ((selectable >> idx) & 1 ? " *" : " .");
            }
            std::cout << std::endl;
        }

        if (can_giveup) {
            std::cout << "[INFO] You may input -1 -1 to skip this move." << std::endl;
        }

        std::cout << "[INPUT] Enter op_i op_j (0~5), or 'exit': ";
        std::getline(std::cin, line);
        if (line == "exit") break;

        std::istringstream iss(line);
        int op_i, op_j;
        if (!(iss >> op_i >> op_j)) {
            std::cout << "[ERROR] Invalid input. Use: <op_i> <op_j> with 0 <= op_i,j <= 5 or -1 -1 to skip" << std::endl;
            continue;
        }

        if ((op_i == -1 && op_j == -1) && !can_giveup) {
            std::cout << "[WARN] Skipping not allowed right now." << std::endl;
            continue;
        }

        int idx = op_i * 6 + op_j;
        if ((op_i >= 0 && op_j >= 0) && (((selectable >> idx) & 1) == 0)) {
            std::cout << "[WARN] The selected position is not selectable. Try again." << std::endl;
            continue;
        }

        dut->op_i = op_i;
        dut->op_j = op_j;
        dut->op_valid = 1;

        while (!dut->op_ready) tick();
        tick();  // pulse
        dut->op_valid = 0;

        // Wait for result
        dut->re_ready = 1;
        while (!dut->re_valid) tick();

        // Update local state
        player_id = dut->re_next_player_id;
        can_giveup = dut->re_player_can_giveup;
        selectable = dut->re_selectable;
        is_finished = dut->re_is_finished;

        if (is_finished) {
            std::cout << "\n==== GAME OVER ====" << std::endl;
            std::cout << "[INFO] Restarting game..." << std::endl;
            player_id = 0;
            selectable = 0b000000000100000000000001000000000100;
            is_finished = false;
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
