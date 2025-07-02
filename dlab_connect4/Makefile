TOP        = connect4
DSRC_DIR   = design_src
SSRC_DIR   = sim_src
SREC_DIR   = sim_result
GOLDEN_DIR = golden
SRC_V      = $(DSRC_DIR)/$(TOP).v
SRC_CPP    = $(SSRC_DIR)/$(TOP).cpp
OBJ_DIR    = $(SSRC_DIR)/obj_dir
EXEC       = $(OBJ_DIR)/V$(TOP)
VCD        = $(SREC_DIR)/wave.vcd

# Verilator flags
VERILATOR_FLAGS = --public -Wno-WIDTHEXPAND -Wno-WIDTHTRUNC --trace --top-module $(TOP) -Mdir $(OBJ_DIR)

# GUI (GTKmm) 
GUI_CPP   = $(SSRC_DIR)/$(TOP)_gui.cpp
GUI_EXEC  = $(SSRC_DIR)/$(TOP)_gui

# GTKmm flags
GTKMM_CFLAGS := $(shell pkg-config --cflags gtkmm-3.0)
GTKMM_LIBS   := $(shell pkg-config --libs gtkmm-3.0)

# Verilator include 
VERILATOR_ROOT = /usr/local/share/verilator

.PHONY: all dut test gui run-gui clean

# === Verilator workflow ===
all: $(EXEC)

dut:
	verilator $(VERILATOR_FLAGS) --cc $(SRC_V)
	cd $(OBJ_DIR) && make -f V$(TOP).mk

test: all
	./$(EXEC) $(VCD)

$(EXEC): $(SRC_V) $(SRC_CPP)
	verilator $(VERILATOR_FLAGS) --cc $(SRC_V) --exe $(SRC_CPP) --build

# === GTKmm GUI ===
gui: dut
	g++ $(GTKMM_CFLAGS) \
	    -I./$(OBJ_DIR) \
	    -I./ \
	    -I$(VERILATOR_ROOT)/include \
	    -I$(VERILATOR_ROOT)/include/vltstd \
	    -L./$(OBJ_DIR) \
	    $(GUI_CPP) $(OBJ_DIR)/V$(TOP)__ALL.a \
	    -o $(GUI_EXEC) $(GTKMM_LIBS) -lverilated

run-gui: gui
	./$(GUI_EXEC) $(SREC_DIR)/ $(VCD)

clean:
	rm -rf $(OBJ_DIR) *.txt  $(EXEC) $(GUI_EXEC) $(VCD)