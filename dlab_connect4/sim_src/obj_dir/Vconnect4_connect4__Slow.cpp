// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vconnect4.h for the primary calling header

#include "Vconnect4__pch.h"
#include "Vconnect4__Syms.h"
#include "Vconnect4_connect4.h"

// Parameter definitions for Vconnect4_connect4
constexpr IData/*31:0*/ Vconnect4_connect4::S_WAIT_OP;
constexpr IData/*31:0*/ Vconnect4_connect4::S_DROP;
constexpr IData/*31:0*/ Vconnect4_connect4::S_GO_JUDGE;
constexpr IData/*31:0*/ Vconnect4_connect4::S_JUDGE;
constexpr IData/*31:0*/ Vconnect4_connect4::S_RE;
constexpr IData/*31:0*/ Vconnect4_connect4::wj__DOT__S_IDLE;
constexpr IData/*31:0*/ Vconnect4_connect4::wj__DOT__S_DETECT_V;
constexpr IData/*31:0*/ Vconnect4_connect4::wj__DOT__S_DETECT_H;
constexpr IData/*31:0*/ Vconnect4_connect4::wj__DOT__S_DETECT_RISE;
constexpr IData/*31:0*/ Vconnect4_connect4::wj__DOT__S_DETECT_FALL;
constexpr IData/*31:0*/ Vconnect4_connect4::wj__DOT__S_RE;


void Vconnect4_connect4___ctor_var_reset(Vconnect4_connect4* vlSelf);

Vconnect4_connect4::Vconnect4_connect4(Vconnect4__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vconnect4_connect4___ctor_var_reset(this);
}

void Vconnect4_connect4::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vconnect4_connect4::~Vconnect4_connect4() {
}
