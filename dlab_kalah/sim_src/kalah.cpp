#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vkalah.h"
#include "Vkalah__Syms.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>

#define MAX_LINE_LEN 128

int main(int argc, char **argv) {
    if (argc != 2) {
        std::cout << "usage: obj <waveform>." << std::endl;
    }
    std::ios::sync_with_stdio(true); 
    std::cout << std::unitbuf;

    Verilated::commandArgs(argc, argv);
    Vkalah* dut = new Vkalah;

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
    dut->rst_n = 0;
    tick(2);
    dut->rst_n = 1;
    tick(2);

    std::string line;
    int player_id = 0;
    int round_idx = 0;

    std::cout << "[INFO-BOARD] " << std::endl;
    for (int i = 6; i >= 0; i--) {
        std::cout << std::setw(3) << (int)dut->kalah->b_inst->P1[i];
    }
    std::cout << std::endl;
    std::cout << std::setw(3) << "";
    for (int i = 0; i < 7; i++) {
        std::cout << std::setw(3) << (int)dut->kalah->b_inst->P0[i];
    }
    std::cout << std::endl;

    while (true) {
        std::cout << "======== Round " << round_idx << " ========" << std::endl;
        std::cout << "[OP-MOVE] Player-" << player_id << " (enter pit_id or 'exit'): ";
        std::cout.flush();

        if (!std::getline(std::cin, line)) break;
        if (line.empty()) continue;

        // Check for 'exit'
        if (line == "exit" || line == "EXIT") {
            std::cout << "[INFO] Exit command received. Terminating program." << std::endl;
            break;
        }

        std::istringstream iss(line);
        int pit_id;
        if (!(iss >> pit_id)) {
            std::cout << "[OP-ERROR] Invalid input. Use format: <pit_id>\n";
            continue;
        }
        if (pit_id < 0) {
            break;
        }

        // 發送操作
        dut->op_valid     = 1;
        dut->op_player_id = player_id;
        dut->op_pit_id    = pit_id;

        // 等待 op_ready 成立
        while (!dut->op_ready) tick();
        tick(); // 給 op_valid 一拍
        dut->op_valid = 0;

        // 等待 re_valid 成立
        dut->re_ready = 1;
        while (!dut->re_valid) tick();

        // 印出回傳結果
        int dut_next_player_id = dut->re_next_player_id;
        bool dut_is_finished = dut->re_is_finished;
        int dut_player0_score = dut->re_player0_score;
        int dut_player1_score = dut->re_player1_score;

        if (dut->re_operr)
            std::cout << "[RES-ERROR] Invalid operation.\n";

        std::cout << "[RES-FINISH] " << (dut_is_finished ? "Yes" : "No") << "\n";
        std::cout << "[RES-PLAYER-0-SCORE] " << dut_player0_score << "\n";
        std::cout << "[RES-PLAYER-1-SCORE] " << dut_player1_score << "\n";

        if (dut_is_finished) {
            if (dut_player0_score > dut_player1_score) {
                std::cout << "[END-RESULT] player 0 win, " << dut_player0_score << "-" << dut_player1_score << std::endl;
            } else if (dut_player1_score > dut_player0_score) {
                std::cout << "[END-RESULT] player 1 win, " << dut_player1_score << "-" << dut_player0_score << std::endl;
            } else {
                std::cout << "[END-RESULT] tie" << std::endl;
            }
        } else {
            std::cout << "[INFO-BOARD] " << std::endl;
            for (int i = 6; i >= 0; i--) {
                std::cout << std::setw(3) << (int)dut->kalah->b_inst->P1[i];
            }
            std::cout << std::endl;
            std::cout << std::setw(3) << "";
            for (int i = 0; i < 7; i++) {
                std::cout << std::setw(3) << (int)dut->kalah->b_inst->P0[i];
            }
            std::cout << std::endl;
        }

        tick();
        dut->re_ready = 0;
        tick(3); // 清 re_ready

        player_id = dut_next_player_id;
        round_idx++;
    }

    tfp->close();
    delete tfp;
    delete dut;
    return 0;
}
