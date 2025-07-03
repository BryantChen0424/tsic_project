#include <gtkmm.h>
#include <iostream>
#include <vector>
#include <sstream>
#include <iomanip>
#include <fstream>
#include <chrono>
#include <ctime>
#include <string>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vkalah.h"
#include "Vkalah__Syms.h"

class KalahWindow : public Gtk::Window {
public:
    KalahWindow(std::string log_dir, std::string vcd);
    virtual ~KalahWindow();

protected:
    void on_pit_clicked(int player, int pit);
    void update_board();
    void make_move(int pit_id);
    void on_gameover_button_clicked();

    Gtk::Grid grid;
    Gtk::Label info_label;
    std::vector<Gtk::Button*> pit_buttons[2]; // [player][0..5]
    Gtk::Label score_labels[2];
    Gtk::Button gameover_button;

    // Verilator
    Vkalah* dut = nullptr;
    VerilatedVcdC* tfp = nullptr;
    int t = 0;
    int player_id = 0;
    int round_idx = 0;
    std::vector<int> board[2]; // [player][0..6]

    // Logging
    std::ofstream log_file;
    bool finished = false;
};

KalahWindow::KalahWindow(std::string log_dir, std::string vcd) : info_label("Waiting for player action..."), gameover_button("Exit") {
    set_title("Kalah / Kalah Game (GTKmm C++)");
    set_default_size(700, 320);

    // Setup log filename by date/time
    char fname[256];
    auto now = std::chrono::system_clock::now();
    std::time_t now_t = std::chrono::system_clock::to_time_t(now);
    std::strftime(fname, sizeof(fname), "game_record_%Y%m%d_%H%M%S.log", std::localtime(&now_t));
    std::string full_log_path = log_dir + "/" + std::string(fname);
    log_file.open(full_log_path);
    log_file << "Game started at " << std::ctime(&now_t) << "\n";

    // Verilator init
    dut = new Vkalah;
    tfp = new VerilatedVcdC;
    Verilated::traceEverOn(true);
    dut->trace(tfp, 99);
    tfp->open(vcd.c_str());

    auto tick = [&](int cycles = 1) {
        for (int i = 0; i < cycles; ++i) {
            dut->clk = 0; dut->eval(); tfp->dump(t += 5);
            dut->clk = 1; dut->eval(); tfp->dump(t += 5);
        }
    };

    // Reset
    dut->rst_n = 0; tick(2);
    dut->rst_n = 1; tick(2);

    board[0].resize(7, 4);
    board[1].resize(7, 4);

    // Layout
    grid.set_row_spacing(10);
    grid.set_column_spacing(10);
    add(grid);

    grid.attach(info_label, 1, 0, 8, 1);

    // Player 1 (top)
    for(int i=0; i<6; ++i) {
        auto btn = Gtk::manage(new Gtk::Button());
        btn->set_label("4");
        btn->signal_clicked().connect(sigc::bind(sigc::mem_fun(*this, &KalahWindow::on_pit_clicked), 1, i));
        grid.attach(*btn, 7-i, 1, 1, 1); // 7-i讓pit順序符合 P1左至右(5~0)
        pit_buttons[1].push_back(btn);
    }
    grid.attach(*(Gtk::manage(new Gtk::Label("P1 Score"))), 0, 2, 1, 1);
    grid.attach(score_labels[1], 1, 2, 1, 1);

    // Player 0 (bottom)
    for(int i=0; i<6; ++i) {
        auto btn = Gtk::manage(new Gtk::Button());
        btn->set_label("4");
        btn->signal_clicked().connect(sigc::bind(sigc::mem_fun(*this, &KalahWindow::on_pit_clicked), 0, i));
        grid.attach(*btn, i+2, 3, 1, 1);
        pit_buttons[0].push_back(btn);
    }
    grid.attach(*(Gtk::manage(new Gtk::Label("P0 Score"))), 9, 2, 1, 1);
    grid.attach(score_labels[0], 8, 2, 1, 1);

    // Gameover button, hidden at first
    gameover_button.signal_clicked().connect(sigc::mem_fun(*this, &KalahWindow::on_gameover_button_clicked));
    grid.attach(gameover_button, 2, 5, 5, 1);
    gameover_button.hide();

    show_all_children();

    // Init board from hardware
    for (int i = 0; i < 7; i++) {
        board[0][i] = int(dut->kalah->b_inst->P0[i]);
        board[1][i] = int(dut->kalah->b_inst->P1[i]);
    }
    update_board();
}

KalahWindow::~KalahWindow() {
    if (log_file.is_open()) log_file.close();
    if (tfp) tfp->close();
    delete tfp;
    delete dut;
}

void KalahWindow::on_pit_clicked(int player, int pit) {
    if (finished) return;
    if (player != player_id) {
        info_label.set_text("Not your turn!");
        return;
    }
    make_move(pit);
}

void KalahWindow::make_move(int pit_id) {
    auto tick = [&](int cycles = 1) {
        for (int i = 0; i < cycles; ++i) {
            dut->clk = 0; dut->eval(); tfp->dump(t += 5);
            dut->clk = 1; dut->eval(); tfp->dump(t += 5);
        }
    };

    // 發送操作
    dut->op_valid     = 1;
    dut->op_player_id = player_id;
    dut->op_pit_id    = pit_id;

    // 等待 op_ready 成立
    {
        auto start = std::chrono::steady_clock::now();
        while (!dut->op_ready) {
            tick();
            auto now = std::chrono::steady_clock::now();
            if (std::chrono::duration_cast<std::chrono::milliseconds>(now - start).count() > 5000) {
                Gtk::MessageDialog dialog(*this, "Gaming core timeout", false, Gtk::MESSAGE_ERROR, Gtk::BUTTONS_OK, true);
                dialog.run();
                hide(); // 或 std::exit(1);
                return;
            }
        }
    }
    tick(); // op_valid 一拍
    dut->op_valid = 0;

    // 等待 re_valid 成立
    dut->re_ready = 1;
    {
        auto start = std::chrono::steady_clock::now();
        while (!dut->re_valid) {
            tick();
            auto now = std::chrono::steady_clock::now();
            if (std::chrono::duration_cast<std::chrono::milliseconds>(now - start).count() > 5000) {
                Gtk::MessageDialog dialog(*this, "Gaming core timeout", false, Gtk::MESSAGE_ERROR, Gtk::BUTTONS_OK, true);
                dialog.run();
                hide();
                return;
            }
        }
    }

    // 更新狀態
    int dut_next_player_id = dut->re_next_player_id;
    bool dut_is_finished = dut->re_is_finished;
    int dut_player0_score = dut->re_player0_score;
    int dut_player1_score = dut->re_player1_score;

    // Log move
    log_file << "Round " << round_idx << " | Player " << player_id << " move: pit " << pit_id << "\n";
    log_file << "Board P1: ";
    for(int i=0; i<7; ++i) log_file << board[1][i] << " ";
    log_file << "\nBoard P0: ";
    for(int i=0; i<7; ++i) log_file << board[0][i] << " ";
    log_file << "\n";

    if (dut->re_operr) {
        info_label.set_text("Invalid operation.");
        log_file << "Invalid operation.\n";
    } else if (dut_is_finished) {
        finished = true;
        std::ostringstream oss;
        if (dut_player0_score > dut_player1_score) {
            oss << "Game Over! Player 0 wins. (" << dut_player0_score << "-" << dut_player1_score << ")";
            log_file << "Game Over! Player 0 wins. (" << dut_player0_score << "-" << dut_player1_score << ")\n";
        } else if (dut_player1_score > dut_player0_score) {
            oss << "Game Over! Player 1 wins. (" << dut_player1_score << "-" << dut_player0_score << ")";
            log_file << "Game Over! Player 1 wins. (" << dut_player1_score << "-" << dut_player0_score << ")\n";
        } else {
            oss << "Game Over! Tie.";
            log_file << "Game Over! Tie.\n";
        }
        info_label.set_text(oss.str());
        gameover_button.show();     // 顯示結束按鈕
        // 禁用全部 pit
        for (int i = 0; i < 6; ++i) {
            pit_buttons[0][i]->set_sensitive(false);
            pit_buttons[1][i]->set_sensitive(false);
        }
    } else {
        info_label.set_text("Player " + std::to_string(dut_next_player_id) + "'s turn");
        log_file << "Next: Player " << dut_next_player_id << "\n";
    }
    log_file << "-----------------------------\n";
    log_file.flush();

    // 更新棋盤
    for (int i = 0; i < 7; i++) {
        board[0][i] = int(dut->kalah->b_inst->P0[i]);
        board[1][i] = int(dut->kalah->b_inst->P1[i]);
    }
    player_id = dut_next_player_id;
    update_board();

    tick();
    dut->re_ready = 0;
    tick(3);

    round_idx++;
}

void KalahWindow::update_board() {
    // P1 (上排, 分數區在左)
    for (int i = 0; i < 6; ++i)
        pit_buttons[1][i]->set_label(std::to_string(board[1][i]));
    score_labels[1].set_text(std::to_string(board[1][6]));

    // P0 (下排, 分數區在右)
    for (int i = 0; i < 6; ++i)
        pit_buttons[0][i]->set_label(std::to_string(board[0][i]));
    score_labels[0].set_text(std::to_string(board[0][6]));

    // 按鈕可按性（只要遊戲沒結束）
    if (!finished) {
        for (int i = 0; i < 6; ++i) {
            pit_buttons[0][i]->set_sensitive(player_id == 0 && board[0][i] > 0);
            pit_buttons[1][i]->set_sensitive(player_id == 1 && board[1][i] > 0);
        }
    }
}

void KalahWindow::on_gameover_button_clicked() {
    hide(); // 結束整個視窗與 app
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        return 1;
    }
    auto app = Gtk::Application::create("org.example.KalahGtkmm", Gio::APPLICATION_FLAGS_NONE);
    KalahWindow window(argv[1], argv[2]);
    return app->run(window);
}
