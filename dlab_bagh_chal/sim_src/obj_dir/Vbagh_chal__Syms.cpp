// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vbagh_chal__pch.h"
#include "Vbagh_chal.h"
#include "Vbagh_chal___024root.h"
#include "Vbagh_chal_bagh_chal.h"

// FUNCTIONS
Vbagh_chal__Syms::~Vbagh_chal__Syms()
{
}

Vbagh_chal__Syms::Vbagh_chal__Syms(VerilatedContext* contextp, const char* namep, Vbagh_chal* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__bagh_chal{this, Verilated::catName(namep, "bagh_chal")}
{
        // Check resources
        Verilated::stackCheck(25);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.bagh_chal = &TOP__bagh_chal;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__bagh_chal.__Vconfigure(true);
    // Setup scopes
    __Vscope_bagh_chal.configure(this, name(), "bagh_chal", "bagh_chal", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_bagh_chal.varInsert(__Vfinal,"occupied", &(TOP__bagh_chal.occupied), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,24,0);
        __Vscope_bagh_chal.varInsert(__Vfinal,"whos", &(TOP__bagh_chal.whos), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,24,0);
    }
}
