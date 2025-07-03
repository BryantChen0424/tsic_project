// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbagh_chal.h for the primary calling header

#include "Vbagh_chal__pch.h"
#include "Vbagh_chal__Syms.h"
#include "Vbagh_chal_bagh_chal.h"

// Parameter definitions for Vbagh_chal_bagh_chal
constexpr IData/*31:0*/ Vbagh_chal_bagh_chal::S_GCH_OP;
constexpr IData/*31:0*/ Vbagh_chal_bagh_chal::S_GCH_RE;
constexpr IData/*31:0*/ Vbagh_chal_bagh_chal::S_GPL_OP;
constexpr IData/*31:0*/ Vbagh_chal_bagh_chal::S_GMV;
constexpr IData/*31:0*/ Vbagh_chal_bagh_chal::S_GCHECK;
constexpr IData/*31:0*/ Vbagh_chal_bagh_chal::S_GPL_RE;
constexpr IData/*31:0*/ Vbagh_chal_bagh_chal::S_TCH_OP;
constexpr IData/*31:0*/ Vbagh_chal_bagh_chal::S_TCH_RE;
constexpr IData/*31:0*/ Vbagh_chal_bagh_chal::S_TPL_OP;
constexpr IData/*31:0*/ Vbagh_chal_bagh_chal::S_TMV;
constexpr IData/*31:0*/ Vbagh_chal_bagh_chal::S_TPL_RE;
constexpr IData/*31:0*/ Vbagh_chal_bagh_chal::OP_N;
constexpr IData/*31:0*/ Vbagh_chal_bagh_chal::OP_GCH;
constexpr IData/*31:0*/ Vbagh_chal_bagh_chal::OP_GRCHPL;
constexpr IData/*31:0*/ Vbagh_chal_bagh_chal::OP_GPL;
constexpr IData/*31:0*/ Vbagh_chal_bagh_chal::OP_TCH;
constexpr IData/*31:0*/ Vbagh_chal_bagh_chal::OP_TRCHPL;
constexpr IData/*31:0*/ Vbagh_chal_bagh_chal::GOAT;
constexpr IData/*31:0*/ Vbagh_chal_bagh_chal::TIGER;
constexpr IData/*24:0*/ Vbagh_chal_bagh_chal::GOAT_MASK;
constexpr IData/*24:0*/ Vbagh_chal_bagh_chal::TIGER_MASK;
constexpr IData/*31:0*/ Vbagh_chal_bagh_chal::su__DOT__S_GCH_OP;
constexpr IData/*31:0*/ Vbagh_chal_bagh_chal::su__DOT__S_GCH_RE;
constexpr IData/*31:0*/ Vbagh_chal_bagh_chal::su__DOT__S_GPL_OP;
constexpr IData/*31:0*/ Vbagh_chal_bagh_chal::su__DOT__S_GMV;
constexpr IData/*31:0*/ Vbagh_chal_bagh_chal::su__DOT__S_GCHECK;
constexpr IData/*31:0*/ Vbagh_chal_bagh_chal::su__DOT__S_GPL_RE;
constexpr IData/*31:0*/ Vbagh_chal_bagh_chal::su__DOT__S_TCH_OP;
constexpr IData/*31:0*/ Vbagh_chal_bagh_chal::su__DOT__S_TCH_RE;
constexpr IData/*31:0*/ Vbagh_chal_bagh_chal::su__DOT__S_TPL_OP;
constexpr IData/*31:0*/ Vbagh_chal_bagh_chal::su__DOT__S_TMV;
constexpr IData/*31:0*/ Vbagh_chal_bagh_chal::su__DOT__S_TPL_RE;
constexpr IData/*31:0*/ Vbagh_chal_bagh_chal::su__DOT__GOAT;
constexpr IData/*31:0*/ Vbagh_chal_bagh_chal::su__DOT__TIGER;
constexpr IData/*24:0*/ Vbagh_chal_bagh_chal::su__DOT__GOAT_MASK;
constexpr IData/*24:0*/ Vbagh_chal_bagh_chal::su__DOT__TIGER_MASK;


void Vbagh_chal_bagh_chal___ctor_var_reset(Vbagh_chal_bagh_chal* vlSelf);

Vbagh_chal_bagh_chal::Vbagh_chal_bagh_chal(Vbagh_chal__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vbagh_chal_bagh_chal___ctor_var_reset(this);
}

void Vbagh_chal_bagh_chal::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vbagh_chal_bagh_chal::~Vbagh_chal_bagh_chal() {
}
