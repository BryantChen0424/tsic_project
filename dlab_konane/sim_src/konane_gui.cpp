
#include <gtkmm.h>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vkonane.h"
#include "Vkonane__Syms.h"
#include <fstream>
#include <ctime>
#include <sstream>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

class KonaneGUI : public Gtk::Window {
public:
    KonaneGUI(std::string log_dir, std::string vcd);
    virtual ~KonaneGUI();

protected:
    void on_cell_clicked(int i, int j);
    void on_skip_clicked();
    void on_exit_clicked();
    void update_gui();
    void tick(int cycles = 1);
    void send_op(int i, int j);

    Gtk::Grid grid;
    Gtk::Button* buttons[6][6];
    Gtk::Button skip_button;
    Gtk::Button exit_button;
    Gtk::Label winner_label;
    Gtk::Label turn_label;
    Gtk::Box vbox;

    Vkonane* dut;
    VerilatedVcdC* tfp;
    int t = 0;

    int player_id = 0;
    uint64_t selectable = 0b000000000100000000000001000000000100;
    bool is_finished = false;
    bool can_giveup = false;

    std::ofstream log_file;
};

KonaneGUI::KonaneGUI(std::string log_dir, std::string vcd) : vbox(Gtk::ORIENTATION_VERTICAL), skip_button("Skip"), exit_button("Exit") {
    set_title("Konane Game");
    set_default_size(600, 750);

    char fname[256];
    auto now = std::chrono::system_clock::now();
    std::time_t now_t = std::chrono::system_clock::to_time_t(now);
    std::strftime(fname, sizeof(fname), "game_record_%Y%m%d_%H%M%S.log", std::localtime(&now_t));
    std::string full_log_path = log_dir + "/" + std::string(fname);
    log_file.open(full_log_path);
    log_file << "Game started at " << std::ctime(&now_t) << "\n";

    auto css_provider = Gtk::CssProvider::create();
    css_provider->load_from_data(
        "button.selectable {"
        "  background-color: #b3d9ff;"
        "  box-shadow: 0 0 1px 1px #3399ff;"
        "}"
        "button.disabled {"
        "  background-color: #666666;"
        "}"
    );
    auto screen = Gdk::Screen::get_default();
    Gtk::StyleContext::add_provider_for_screen(screen, css_provider, GTK_STYLE_PROVIDER_PRIORITY_APPLICATION);

    dut = new Vkonane;
    Verilated::traceEverOn(true);
    tfp = new VerilatedVcdC;
    dut->trace(tfp, 99);
    tfp->open(vcd.c_str());

    dut->clk = 0;
    dut->rst_n = 0; tick(2);
    dut->rst_n = 1; tick(2);

    vbox.set_spacing(5);
    grid.set_row_spacing(5);
    grid.set_column_spacing(5);

    turn_label.set_margin_top(10);
    turn_label.set_margin_bottom(10);
    turn_label.set_markup("<span font_desc='20'>Current Turn: BLACK</span>");
    vbox.pack_start(turn_label, Gtk::PACK_SHRINK);

    for (int i = 0; i < 6; ++i) {
        for (int j = 0; j < 6; ++j) {
            buttons[i][j] = Gtk::manage(new Gtk::Button());
            buttons[i][j]->set_size_request(80, 80);
            grid.attach(*buttons[i][j], j, i, 1, 1);
            buttons[i][j]->signal_clicked().connect(sigc::bind(sigc::mem_fun(*this, &KonaneGUI::on_cell_clicked), i, j));
        }
    }

    skip_button.signal_clicked().connect(sigc::mem_fun(*this, &KonaneGUI::on_skip_clicked));
    exit_button.signal_clicked().connect(sigc::mem_fun(*this, &KonaneGUI::on_exit_clicked));
    exit_button.set_visible(false);

    winner_label.set_visible(false);
    winner_label.set_justify(Gtk::JUSTIFY_CENTER);

    vbox.pack_start(grid);
    vbox.pack_start(skip_button, Gtk::PACK_SHRINK);
    vbox.pack_start(winner_label, Gtk::PACK_SHRINK);
    vbox.pack_start(exit_button, Gtk::PACK_SHRINK);
    add(vbox);
    show_all_children();

    update_gui();
}

KonaneGUI::~KonaneGUI() {
    if (log_file.is_open()) log_file.close();
    tfp->close();
    delete tfp;
    delete dut;
}

void KonaneGUI::tick(int cycles) {
    for (int i = 0; i < cycles; ++i) {
        dut->clk = 0; dut->eval(); tfp->dump(t += 5);
        dut->clk = 1; dut->eval(); tfp->dump(t += 5);
    }
}

void KonaneGUI::send_op(int i, int j) {
    if (i == -1 && j == -1) {
        log_file << (player_id == 0 ? "[BLACK] " : "[WHITE] ") << "Skip\n";
    }
    else {
        log_file << (player_id == 0 ? "[BLACK] " : "[WHITE] ")
                 << "Click (" << i << ", " << j << ")\n";
    }
    log_file << "Board:\n";
    for (int ii = 0; ii < 6; ++ii) {
        for (int jj = 0; jj < 6; ++jj) {
            int idx = ii * 6 + jj;
            bool occ = (dut->konane->occupied >> idx) & 1;
            bool is_black = (dut->konane->black_all >> idx) & 1;
            char c = occ ? (is_black ? 'B' : 'W') : '.';
            log_file << c << ' ';
        }
        log_file << '\n';
    }
    dut->op_i = i;
    dut->op_j = j;
    dut->op_valid = 1;
    while (!dut->op_ready) tick();
    tick();
    dut->op_valid = 0;

    dut->re_ready = 1;
    while (!dut->re_valid) tick();

    player_id = dut->re_next_player_id;
    selectable = dut->re_selectable;
    is_finished = dut->re_is_finished;
    can_giveup = dut->re_player_can_giveup;

    tick();
    dut->re_ready = 0;
    tick(2);
}

void KonaneGUI::on_cell_clicked(int i, int j) {
    if (!is_finished) {
        send_op(i, j);
        update_gui();
    }
}

void KonaneGUI::on_skip_clicked() {
    if (can_giveup && !is_finished) {
        send_op(-1, -1);
        update_gui();
    }
}

void KonaneGUI::on_exit_clicked() {
    hide();
}

void KonaneGUI::update_gui() {
    for (int i = 0; i < 6; ++i) {
        for (int j = 0; j < 6; ++j) {
            int idx = i * 6 + j;
            bool occ = (dut->konane->occupied >> idx) & 1;
            bool is_black = (dut->konane->black_all >> idx) & 1;
            auto label = occ ? (is_black ? "⚫" : "⚪") : "";
            buttons[i][j]->set_label(label);
            bool enable = ((selectable >> idx) & 1);
            buttons[i][j]->set_sensitive(enable);

            auto context = buttons[i][j]->get_style_context();
            context->remove_class("selectable");
            context->remove_class("disabled");
            context->add_class(enable ? "selectable" : "disabled");
        }
    }

    std::string turn_text = player_id == 0 ? "Current Turn: BLACK" : "Current Turn: WHITE";
    turn_label.set_markup("<span font_desc='20'>" + turn_text + "</span>");
    skip_button.set_sensitive(can_giveup);

    if (is_finished) {
        std::string winner = player_id == 0 ? "WHITE Wins!" : "BLACK Wins!";
        winner_label.set_markup("<span font_desc='30' weight='bold'>" + winner + "</span>");
        winner_label.set_visible(true);
        exit_button.set_visible(true);
        skip_button.set_sensitive(false);
        for (int i = 0; i < 6; ++i)
            for (int j = 0; j < 6; ++j)
                buttons[i][j]->set_sensitive(false);
    } else {
        winner_label.set_visible(false);
        exit_button.set_visible(false);
    }
}

int main(int argc, char* argv[]) {
    Verilated::commandArgs(argc, argv);
    auto app = Gtk::Application::create("edu.konane.gui", Gio::APPLICATION_FLAGS_NONE);
    KonaneGUI window(argv[1], argv[2]);
    return app->run(window);
}
