#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vconnect4.h"
#include "Vconnect4__Syms.h"
#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>

#define MAX_LINE_LEN 128

int main(int argc, char **argv) {
    if (argc != 2) {
        std::cout << "usage: obj <waveform>." << std::endl;
    }
    std::ios::sync_with_stdio(true); 
    std::cout << std::unitbuf;

    Verilated::commandArgs(argc, argv);
    Vconnect4* dut = new Vconnect4;

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

    // 6(row)x7(col) 棋盤陣列，row 0為底部，row 5為頂部
    auto print_board = [&]() {
        std::cout << "[INFO-BOARD]" << std::endl;
        for (int row = 0; row < 6; ++row) {
            std::cout << "  ";
            for (int col = 0; col < 7; ++col) {
                int idx = row * 7 + col;
                if (dut->connect4->occupied & (1ULL << idx)) {
                    int who = (dut->connect4->whos & (1ULL << idx)) ? 1 : 0;
                    std::cout << (who == 0 ? " O" : " X");
                } else {
                    std::cout << " .";
                }
            }
            std::cout << std::endl;
        }
        std::cout << "   0 1 2 3 4 5 6" << std::endl;
    };

    while (true) {
        std::cout << "======== Round " << round_idx << " ========" << std::endl;
        print_board();
        std::cout << "[OP-MOVE] Player-" << player_id << ": Enter col_id (0~6) or 'reset'/'exit': ";
        std::cout.flush();
        
        if (!std::getline(std::cin, line)) {
            break;
        }
        if (line == "exit") break;
        if (line == "reset") {
            dut->rst_n = 0; tick(2);
            dut->rst_n = 1; tick(2);
            player_id = 0;
            round_idx = 0;
            std::cout << "[RESET]" << std::endl;
            continue;
        }
        if (line.empty()) continue;

        std::istringstream iss(line);
        int col_id = -1;
        if (!(iss >> col_id)) {
            std::cout << "[OP-ERROR] Invalid input. Use: <col_id>" << std::endl;
            continue;
        }
        if (col_id < 0 || col_id > 6) {
            std::cout << "[OP-ERROR] col_id out of range (0~6)." << std::endl;
            continue;
        }

        // 發送操作
        dut->op_valid     = 1;
        dut->op_player_id = player_id;
        dut->op_col_id    = col_id;

        // 等待 op_ready 成立
        while (!dut->op_ready) {
            tick();
        }

        tick(); // 給 op_valid 一拍
        dut->op_valid = 0;

        // 等待 re_valid
        dut->re_ready = 1;
        while (!dut->re_valid) {
            tick();
        }

        // 印出回傳結果
        if (dut->re_err)
            std::cout << "[RES-ERROR] Invalid move (column full or error)." << std::endl;

        std::cout << "[RES-FINISH] " << (dut->re_is_finished ? "Yes" : "No") << std::endl;
        std::cout << "[RES-TIE] " << (dut->re_tie ? "Yes" : "No") << std::endl;
        std::cout << "[RES-WINNER] ";
        if (dut->re_tie && dut->re_is_finished)
            std::cout << "TIE" << std::endl;
        else if (dut->re_winner && dut->re_is_finished)
            std::cout << "Player 1" << std::endl;
        else if (!dut->re_winner && dut->re_is_finished)
            std::cout << "Player 0" << std::endl;
        else
            std::cout << "-" << std::endl;

        if (dut->re_is_finished) {
            print_board();
            if (dut->re_tie)
                std::cout << "=== GAME OVER! TIE ===" << std::endl;
            else
                std::cout << "=== GAME OVER! Winner: Player " << (int)dut->re_winner << " ===" << std::endl;
            std::cout << "Type 'reset' to restart, or 'exit' to quit." << std::endl;
        }

        // 換玩家（只有沒錯誤且沒結束才換）
        if (!dut->re_err && !dut->re_is_finished) {
            player_id ^= 1;
            round_idx++;
        }

        tick();
        dut->re_ready = 0;
        tick(3); // 清 re_ready

        
    }

    tfp->close();
    delete tfp;
    delete dut;
    return 0;
}
