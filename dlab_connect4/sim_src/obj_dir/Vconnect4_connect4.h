// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vconnect4.h for the primary calling header

#ifndef VERILATED_VCONNECT4_CONNECT4_H_
#define VERILATED_VCONNECT4_CONNECT4_H_  // guard

#include "verilated.h"


class Vconnect4__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vconnect4_connect4 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst_n,0,0);
        VL_OUT8(op_ready,0,0);
        VL_IN8(op_valid,0,0);
        VL_IN8(op_player_id,0,0);
        VL_IN8(op_col_id,2,0);
        VL_IN8(re_ready,0,0);
        VL_OUT8(re_valid,0,0);
        VL_OUT8(re_err,0,0);
        VL_OUT8(re_is_finished,0,0);
        VL_OUT8(re_winner,0,0);
        VL_OUT8(re_tie,0,0);
        CData/*0:0*/ op_ready_nxt;
        CData/*0:0*/ re_valid_nxt;
        CData/*0:0*/ re_err_nxt;
        CData/*0:0*/ re_is_finished_nxt;
        CData/*0:0*/ re_winner_nxt;
        CData/*0:0*/ re_tie_nxt;
        CData/*3:0*/ S;
        CData/*3:0*/ S_nxt;
        CData/*0:0*/ player_id;
        CData/*0:0*/ player_id_nxt;
        CData/*2:0*/ col_id;
        CData/*2:0*/ col_id_nxt;
        CData/*2:0*/ row_id;
        CData/*2:0*/ row_id_nxt;
        CData/*0:0*/ wj_op_ready;
        CData/*0:0*/ wj_op_valid;
        CData/*0:0*/ wj_op_valid_nxt;
        CData/*0:0*/ wj_re_ready;
        CData/*0:0*/ wj_re_ready_nxt;
        CData/*0:0*/ wj_re_valid;
        CData/*0:0*/ wj_re_is_finished;
        CData/*0:0*/ op_fire;
        CData/*0:0*/ re_fire;
        CData/*0:0*/ wj_op_fire;
        CData/*0:0*/ wj_re_fire;
        CData/*6:0*/ col_full;
        CData/*0:0*/ __Vlvbound_he09ab045__0;
        CData/*0:0*/ __Vlvbound_h1937b198__0;
        CData/*0:0*/ __Vlvbound_ha9697794__0;
        CData/*0:0*/ __Vlvbound_h0ff1056b__0;
        CData/*0:0*/ wj__DOT__clk;
        CData/*0:0*/ wj__DOT__rst_n;
        CData/*0:0*/ wj__DOT__op_ready;
        CData/*0:0*/ wj__DOT__op_valid;
        CData/*0:0*/ wj__DOT__re_ready;
        CData/*0:0*/ wj__DOT__re_valid;
        CData/*0:0*/ wj__DOT__re_is_finished;
        CData/*0:0*/ wj__DOT__op_ready_nxt;
        CData/*0:0*/ wj__DOT__re_valid_nxt;
        CData/*0:0*/ wj__DOT__re_is_finished_nxt;
        CData/*3:0*/ wj__DOT__S;
        CData/*3:0*/ wj__DOT__S_nxt;
        CData/*2:0*/ wj__DOT__rlim;
        CData/*2:0*/ wj__DOT__rlim_nxt;
        CData/*2:0*/ wj__DOT__llim;
        CData/*2:0*/ wj__DOT__llim_nxt;
        CData/*2:0*/ wj__DOT__tlim;
        CData/*2:0*/ wj__DOT__tlim_nxt;
        CData/*2:0*/ wj__DOT__blim;
        CData/*2:0*/ wj__DOT__blim_nxt;
        CData/*2:0*/ wj__DOT__c;
        CData/*2:0*/ wj__DOT__c_nxt;
    };
    struct {
        CData/*2:0*/ wj__DOT__r;
        CData/*2:0*/ wj__DOT__r_nxt;
        CData/*0:0*/ wj__DOT__op_fire;
        CData/*0:0*/ wj__DOT__re_fire;
        CData/*0:0*/ wj__DOT__occupied_all;
        CData/*0:0*/ wj__DOT__whos_all;
        CData/*2:0*/ wj__DOT__c0;
        CData/*2:0*/ wj__DOT__c1;
        CData/*2:0*/ wj__DOT__c2;
        CData/*2:0*/ wj__DOT__c3;
        CData/*2:0*/ wj__DOT__r0;
        CData/*2:0*/ wj__DOT__r1;
        CData/*2:0*/ wj__DOT__r2;
        CData/*2:0*/ wj__DOT__r3;
        IData/*31:0*/ i;
        QData/*41:0*/ occupied;
        QData/*41:0*/ whos;
        QData/*41:0*/ occupied_nxt;
        QData/*41:0*/ whos_nxt;
        QData/*41:0*/ wj__DOT__occupied;
        QData/*41:0*/ wj__DOT__whos;
    };

    // INTERNAL VARIABLES
    Vconnect4__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr IData/*31:0*/ S_WAIT_OP = 0U;
    static constexpr IData/*31:0*/ S_DROP = 1U;
    static constexpr IData/*31:0*/ S_GO_JUDGE = 2U;
    static constexpr IData/*31:0*/ S_JUDGE = 3U;
    static constexpr IData/*31:0*/ S_RE = 4U;
    static constexpr IData/*31:0*/ wj__DOT__S_IDLE = 0U;
    static constexpr IData/*31:0*/ wj__DOT__S_DETECT_V = 1U;
    static constexpr IData/*31:0*/ wj__DOT__S_DETECT_H = 2U;
    static constexpr IData/*31:0*/ wj__DOT__S_DETECT_RISE = 3U;
    static constexpr IData/*31:0*/ wj__DOT__S_DETECT_FALL = 4U;
    static constexpr IData/*31:0*/ wj__DOT__S_RE = 5U;

    // CONSTRUCTORS
    Vconnect4_connect4(Vconnect4__Syms* symsp, const char* v__name);
    ~Vconnect4_connect4();
    VL_UNCOPYABLE(Vconnect4_connect4);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
