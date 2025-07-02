#include <gtkmm.h>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include <chrono>
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <iomanip>
#include <fstream>
#include <ctime>
#include <sys/stat.h>
#include "Vbagh_chal.h"
#include "Vbagh_chal__Syms.h"

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

class BaghChalGUI : public Gtk::Window {
public:
    BaghChalGUI(std::string log_dir, std::string vcd_path)
    : grid(), label_player("PLAYER"), label_action("ACTION"), label_goats("GOATS IN HAND"), label_killed("GOATS KILLED"), winner_label(), exit_button("Exit"), dut(new Vbagh_chal), t(0) {
        set_title("Bagh Chal GUI with Log");
        set_border_width(10);
        set_default_size(500, 500);

        // === Initialize Verilator ===
        tfp = new VerilatedVcdC;
        Verilated::traceEverOn(true);
        dut->trace(tfp, 99);
        tfp->open(vcd_path.c_str());

        dut->rst_n = 0; tick(2);
        dut->rst_n = 1; tick(2);

        // === Setup log ===
        char fname[256];
        auto now = std::chrono::system_clock::now();
        std::time_t now_t = std::chrono::system_clock::to_time_t(now);
        std::strftime(fname, sizeof(fname), "game_record_%Y%m%d_%H%M%S.log", std::localtime(&now_t));
        std::string full_log_path = log_dir + "/" + std::string(fname);
        log_file.open(full_log_path);
        log_file << "Game started at " << std::ctime(&now_t) << std::endl;

        selectable = 0b0111011111111111111101110;
        op_mode = 3;
        goats_in_hand = 20;
        goats_killed = 0;
        game_over = false;

        vbox.set_spacing(5);
        add(vbox);

        info_grid.set_column_spacing(10);
        info_grid.attach(label_player, 0, 0, 1, 1);
        info_grid.attach(label_action, 1, 0, 1, 1);
        info_grid.attach(label_goats, 0, 1, 1, 1);
        info_grid.attach(label_killed, 1, 1, 1, 1);
        vbox.pack_start(info_grid, Gtk::PACK_SHRINK);

        winner_label.set_markup("<span size='20000' weight='bold' foreground='red'></span>");
        winner_label.set_halign(Gtk::ALIGN_CENTER);
        vbox.pack_start(winner_label, Gtk::PACK_SHRINK);

        grid.set_row_spacing(2);
        grid.set_column_spacing(2);
        vbox.pack_start(grid, Gtk::PACK_EXPAND_WIDGET);

        css_provider = Gtk::CssProvider::create();
        css_provider->load_from_data(R"(button.goat {
    background: white;
    font-size: 18pt;
    color: black;
}

button.tiger {
    background: khaki;
    font-size: 18pt;
    color: black;
}

button.disabled {
    background: #DDDDDD;
    font-size: 18pt;
    color: black;
}

button:disabled {
    color: black;
})");

        for (int i = 0; i < 5; ++i)
            for (int j = 0; j < 5; ++j) {
                auto btn = Gtk::manage(new Gtk::Button(""));
                btn->set_size_request(80, 80);
                btn->get_style_context()->add_provider(css_provider, GTK_STYLE_PROVIDER_PRIORITY_USER);
                btn->signal_clicked().connect(sigc::bind(sigc::mem_fun(*this, &BaghChalGUI::on_cell_clicked), i, j));
                grid.attach(*btn, j, i, 1, 1);
                cell_buttons[i][j] = btn;
            }

        exit_button.set_sensitive(false);
        exit_button.signal_clicked().connect(sigc::mem_fun(*this, &BaghChalGUI::on_exit_clicked));
        vbox.pack_start(exit_button, Gtk::PACK_SHRINK);

        update_ui();
        show_all_children();
    }

    virtual ~BaghChalGUI() {
        log_file << "Game ended." << std::endl;
        if (log_file.is_open()) log_file.close();
        tfp->close();
        delete tfp;
        delete dut;
    }

protected:
    Gtk::Box vbox{Gtk::ORIENTATION_VERTICAL};
    Gtk::Grid grid;
    Gtk::Grid info_grid;
    Gtk::Label label_player, label_action, label_goats, label_killed;
    Gtk::Label winner_label;
    Gtk::Button* cell_buttons[5][5];
    Gtk::Button exit_button;
    Glib::RefPtr<Gtk::CssProvider> css_provider;

    Vbagh_chal* dut;
    VerilatedVcdC* tfp;
    int t;
    uint32_t selectable;
    int op_mode;
    int goats_in_hand;
    int goats_killed;
    bool game_over;
    std::ofstream log_file;

    void tick(int cycles = 1) {
        for (int i = 0; i < cycles; ++i) {
            dut->clk = 0; dut->eval(); tfp->dump(t += 5);
            dut->clk = 1; dut->eval(); tfp->dump(t += 5);
        }
    }

    void update_ui() {
        label_player.set_text("[PLAYER] " + std::string((op_mode <= 3 ? "GOAT" : "TIGER")));
        label_action.set_text("[ACTION] " + std::string(op_type_str(op_mode)));
        label_goats.set_text("[GOATS IN HAND] " + std::to_string(goats_in_hand));
        label_killed.set_text("[GOATS KILLED] " + std::to_string(goats_killed));

        for (int i = 0; i < 5; ++i)
            for (int j = 0; j < 5; ++j) {
                int idx = i * 5 + j;
                bool occ = (dut->bagh_chal->occupied >> idx) & 1;
                bool who = (dut->bagh_chal->whos >> idx) & 1;
                bool sel = (selectable >> idx) & 1;

                std::string label = "";
                if (occ) label = (who ? "T" : "G");

                cell_buttons[i][j]->set_label(label);
                cell_buttons[i][j]->set_sensitive(!game_over && sel);

                auto ctx = cell_buttons[i][j]->get_style_context();
                ctx->remove_class("goat");
                ctx->remove_class("tiger");
                ctx->remove_class("disabled");

                if (sel && !game_over) {
                    if (op_mode <= 3) ctx->add_class("goat");
                    else ctx->add_class("tiger");
                } else {
                    ctx->add_class("disabled");
                }
            }
    }

    void on_cell_clicked(int i, int j) {
        if (game_over) return;
        int idx = i * 5 + j;
        if (((selectable >> idx) & 1) == 0) return;

        log_file << "Clicked: (" << i << ", " << j << ")\n";

        dut->op_i = i;
        dut->op_j = j;
        dut->op_valid = 1;
        while (!dut->op_ready) tick();
        tick();
        dut->op_valid = 0;

        dut->re_ready = 1;
        while (!dut->re_valid) tick();

        if (dut->re_is_finished) {
            game_over = true;
            std::string winner = (op_mode <= 3) ? "GOAT" : "TIGER";
            winner_label.set_markup("<span size='20000' weight='bold' foreground='red'>WINNER: " + winner + "</span>");
            label_action.set_text("==== GAME OVER ====");
            exit_button.set_sensitive(true);
            log_file << "GAME OVER. Winner: " << winner << "\n";
        }

        op_mode = dut->re_possible_ops;
        selectable = dut->re_selectable;
        goats_in_hand = dut->o_goats_in_hand;
        goats_killed = dut->o_goats_killed;

        log_file << "op_mode: " << op_mode << ", goats_in_hand: " << goats_in_hand << ", goats_killed: " << goats_killed << "\n";

        tick();
        dut->re_ready = 0;
        tick(2);
        update_ui();
    }

    void on_exit_clicked() {
        hide();
    }
};

int main(int argc, char* argv[]) {
    if (argc != 3) {
        std::cout << "Usage: ./bagh_chal_gui <log_dir> <wave.vcd>" << std::endl;
        return 1;
    }
    Verilated::commandArgs(argc, argv);
    auto app = Gtk::Application::create("edu.bagh_chal.gui", Gio::APPLICATION_FLAGS_NONE);
    BaghChalGUI window(argv[1], argv[2]);
    return app->run(window);
}
