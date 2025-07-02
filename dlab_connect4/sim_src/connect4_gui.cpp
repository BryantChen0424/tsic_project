#include <gtkmm.h>
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <iomanip>
#include <fstream>
#include <ctime>
#include <sys/stat.h>
#include "Vconnect4.h"
#include "Vconnect4__Syms.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

const int ROWS = 6;
const int COLS = 7;

class Connect4Window : public Gtk::Window {
public:
    Connect4Window(std::string log_dir, std::string vcd)
        : overlay(), grid(), info_label("Player 0 turn"), exit_button("Exit") {

        set_title("Connect Four (Verilator RTL inside GUI)");
        set_default_size(600, 650);

        // === 建立按鈕操作列 ===
        for (int col = 0; col < COLS; ++col) {
            auto btn = Gtk::make_managed<Gtk::Button>("▼");
            btn->set_tooltip_text("Drop in col " + std::to_string(col));
            btn->set_hexpand();
            btn->signal_clicked().connect(
                [this, col]() { on_column_clicked(col); }
            );
            column_buttons.push_back(btn);
            header_grid.attach(*btn, col, 0, 1, 1);
        }

        // === 建立棋盤顯示格（Label） ===
        for (int row = 0; row < ROWS; ++row) {
            std::vector<Gtk::Label*> row_labels;
            for (int col = 0; col < COLS; ++col) {
                auto lbl = Gtk::make_managed<Gtk::Label>(" ");
                lbl->set_size_request(60, 60);
                lbl->set_hexpand();
                lbl->set_vexpand();
                lbl->set_justify(Gtk::JUSTIFY_CENTER);
                lbl->set_margin_start(2);
                lbl->set_margin_end(2);
                lbl->set_margin_top(2);
                lbl->set_margin_bottom(2);
                lbl->set_markup("<span font='36'>○</span>");
                grid.attach(*lbl, col, row, 1, 1);
                row_labels.push_back(lbl);
            }
            board_labels.push_back(row_labels);
        }

        // === Overlay 準備結算 label（初始隱藏） ===
        result_label = Gtk::make_managed<Gtk::Label>();
        result_label->set_halign(Gtk::ALIGN_CENTER);
        result_label->set_valign(Gtk::ALIGN_CENTER);
        result_label->set_markup("");
        result_label->set_no_show_all();
        result_label->hide();

        overlay.add(grid);           // 底層棋盤
        overlay.add_overlay(*result_label); // 上層結算 label

        // === 版面排版 ===
        vbox.pack_start(info_label, Gtk::PACK_SHRINK);     // 狀態列
        vbox.pack_start(header_grid, Gtk::PACK_SHRINK);    // 按鈕列
        vbox.pack_start(overlay, Gtk::PACK_EXPAND_WIDGET); // 棋盤+結算
        vbox.pack_start(exit_button, Gtk::PACK_SHRINK);    // Exit (預設隱藏)
        exit_button.set_visible(false);
        exit_button.signal_clicked().connect([this]() { on_exit(); });

        add(vbox);
        show_all_children();

        // === 初始化 Verilator RTL ===
        dut = new Vconnect4;
        tfp = new VerilatedVcdC;
        Verilated::traceEverOn(true);
        dut->trace(tfp, 99);
        tfp->open(vcd.c_str());

        // ==== 建立 log 目錄並開啟遊玩紀錄檔 ====
        char fname[256];
        auto now = std::chrono::system_clock::now();
        std::time_t now_t = std::chrono::system_clock::to_time_t(now);
        std::strftime(fname, sizeof(fname), "game_record_%Y%m%d_%H%M%S.log", std::localtime(&now_t));
        std::string full_log_path = log_dir + "/" + std::string(fname);
        log_file.open(full_log_path);
        log_file << "Game started at " << std::ctime(&now_t) << "\n";

        time = 0;
        reset_dut();
        refresh_board();
    }

    ~Connect4Window() override {
        if (log_file.is_open()) log_file.close();
        tfp->close();
        delete tfp;
        delete dut;
    }

protected:
    Gtk::Box vbox{Gtk::ORIENTATION_VERTICAL};
    Gtk::Grid header_grid;
    Gtk::Overlay overlay;
    Gtk::Grid grid;
    Gtk::Label info_label;
    Gtk::Button exit_button;
    Gtk::Label* result_label = nullptr;
    std::vector<Gtk::Button*> column_buttons;
    std::vector<std::vector<Gtk::Label*>> board_labels;

    int current_player = 0;
    vluint64_t time = 0;

    Vconnect4* dut;
    VerilatedVcdC* tfp;

    std::ofstream log_file;
    std::string log_filename;

    void tick(int cycles = 1) {
        for (int i = 0; i < cycles; ++i) {
            dut->clk = 0; dut->eval(); tfp->dump(time += 5);
            dut->clk = 1; dut->eval(); tfp->dump(time += 5);
        }
    }

    void reset_dut() {
        dut->rst_n = 0; tick(2);
        dut->rst_n = 1; tick(2);
        current_player = 0;
    }

    void dump_board_to_log() {
        if (!log_file.is_open()) return;
        for (int row = 0; row < ROWS; ++row) {
            for (int col = 0; col < COLS; ++col) {
                int idx = row * 7 + col;
                char c = '.';
                if (dut->connect4->occupied & (1ULL << idx)) {
                    int pid = (dut->connect4->whos & (1ULL << idx)) ? 1 : 0;
                    c = (pid == 0) ? 'O' : 'X';
                }
                log_file << c;
            }
            log_file << '\n';
        }
    }

    // 顯示盤面
    void refresh_board() {
        bool finished = dut->re_is_finished;
        bool tie = dut->re_tie;

        // 維持原色，不論是否 finished
        for (int row = 0; row < ROWS; ++row) {
            for (int col = 0; col < COLS; ++col) {
                int idx = row * 7 + col;
                if (dut->connect4->occupied & (1ULL << idx)) {
                    int pid = (dut->connect4->whos & (1ULL << idx)) ? 1 : 0;
                    std::string c = (pid == 0 ?
                        "<span font='36' foreground='#7faaff'>●</span>" :
                        "<span font='36' foreground='#ff9999'>●</span>");
                    board_labels[row][col]->set_markup(c);
                } else {
                    board_labels[row][col]->set_markup("<span font='36' foreground='#aaaaaa'>○</span>");
                }
            }
        }

        // 狀態提示 & 遊戲結束畫面
        if (finished) {
            std::ostringstream ss;
            if (tie) {
                ss << "<span font='38' weight='bold' foreground='#222'>Good Game!\nTIE</span>";
            } else {
                ss << "<span font='38' weight='bold' foreground='#222'>Good Game!\nWinner: Player "
                   << current_player << "</span>";
            }
            result_label->set_markup(ss.str());
            result_label->show();
            for (auto* btn : column_buttons) btn->set_sensitive(false);
            exit_button.set_visible(true);
            // log 最終棋盤與結果
            if (log_file.is_open()) {
                if (tie)
                    log_file << "[END] Game Over! TIE" << std::endl;
                else
                    log_file << "[END] Game Over! Winner: Player " << current_player << std::endl;
                dump_board_to_log();
            }
        } else if (dut->re_err) {
            info_label.set_text("Invalid move! Try again.");
            for (auto* btn : column_buttons) btn->set_sensitive(true);
            result_label->hide();
            exit_button.set_visible(false);
        } else {
            std::ostringstream ss;
            ss << "Player " << current_player << " turn";
            info_label.set_text(ss.str());
            for (auto* btn : column_buttons) btn->set_sensitive(true);
            result_label->hide();
            exit_button.set_visible(false);
        }
    }

    void on_column_clicked(int col_id) {
        if (dut->re_is_finished) return;

        // log 操作
        if (log_file.is_open()) {
            log_file << "[MOVE] Player " << current_player << " drop col " << col_id << std::endl;
        }

        dut->op_valid = 1;
        dut->op_player_id = current_player;
        dut->op_col_id = col_id;

        while (!dut->op_ready) tick();
        tick();
        dut->op_valid = 0;

        dut->re_ready = 1;
        while (!dut->re_valid) tick();
        if (!dut->re_err && !dut->re_is_finished) current_player ^= 1;
        refresh_board();
        tick();
        dut->re_ready = 0;
        tick(2);

        // log 棋盤與狀態
        if (log_file.is_open()) {
            dump_board_to_log();
            if (dut->re_err)
                log_file << "[ERR] Invalid move" << std::endl;
            if (dut->re_is_finished) {
                if (dut->re_tie)
                    log_file << "[GAME END] TIE" << std::endl;
                else
                    log_file << "[GAME END] Winner: Player " << current_player << std::endl;
            }
            log_file << std::endl;
        }
    }

    void on_exit() {
        // log 結束
        if (log_file.is_open()) {
            log_file << "[EXIT] User exited" << std::endl;
            log_file.close();
        }
        hide(); // 關閉視窗結束程式
    }
};

int main(int argc, char* argv[]) {
    if (argc != 3) {
        return 1;
    }
    Verilated::commandArgs(argc, argv);
    auto app = Gtk::Application::create("org.demo.connect4", Gio::APPLICATION_FLAGS_NONE);
    Connect4Window win(argv[1], argv[2]);
    return app->run(win);
}
