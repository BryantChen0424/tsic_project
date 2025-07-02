// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vconnect4.h for the primary calling header

#include "Vconnect4__pch.h"
#include "Vconnect4__Syms.h"
#include "Vconnect4___024root.h"

void Vconnect4___024root___ctor_var_reset(Vconnect4___024root* vlSelf);

Vconnect4___024root::Vconnect4___024root(Vconnect4__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vconnect4___024root___ctor_var_reset(this);
}

void Vconnect4___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vconnect4___024root::~Vconnect4___024root() {
}
