// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vconnect4__pch.h"
#include "Vconnect4.h"
#include "Vconnect4___024root.h"
#include "Vconnect4_connect4.h"

// FUNCTIONS
Vconnect4__Syms::~Vconnect4__Syms()
{
}

Vconnect4__Syms::Vconnect4__Syms(VerilatedContext* contextp, const char* namep, Vconnect4* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__connect4{this, Verilated::catName(namep, "connect4")}
{
        // Check resources
        Verilated::stackCheck(25);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.connect4 = &TOP__connect4;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__connect4.__Vconfigure(true);
    // Setup scopes
    __Vscope_connect4.configure(this, name(), "connect4", "connect4", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_connect4.varInsert(__Vfinal,"occupied", &(TOP__connect4.occupied), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,0,1 ,41,0);
        __Vscope_connect4.varInsert(__Vfinal,"whos", &(TOP__connect4.whos), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,0,1 ,41,0);
    }
}
