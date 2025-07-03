// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vbagh_chal.h for the primary calling header

#ifndef VERILATED_VBAGH_CHAL___024ROOT_H_
#define VERILATED_VBAGH_CHAL___024ROOT_H_  // guard

#include "verilated.h"
class Vbagh_chal_bagh_chal;


class Vbagh_chal__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vbagh_chal___024root final : public VerilatedModule {
  public:
    // CELLS
    Vbagh_chal_bagh_chal* bagh_chal;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_OUT8(op_ready,0,0);
    VL_IN8(op_valid,0,0);
    VL_IN8(op_i,4,0);
    VL_IN8(op_j,4,0);
    VL_IN8(re_ready,0,0);
    VL_OUT8(re_valid,0,0);
    VL_OUT8(re_is_finished,0,0);
    VL_OUT8(re_possible_ops,3,0);
    VL_OUT8(o_goats_in_hand,4,0);
    VL_OUT8(o_goats_killed,4,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__bagh_chal__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__bagh_chal__rst_n__0;
    CData/*0:0*/ __VactContinue;
    VL_OUT(re_selectable,24,0);
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vbagh_chal__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vbagh_chal___024root(Vbagh_chal__Syms* symsp, const char* v__name);
    ~Vbagh_chal___024root();
    VL_UNCOPYABLE(Vbagh_chal___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
