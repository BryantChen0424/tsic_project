// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vconnect4__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vconnect4::Vconnect4(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vconnect4__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , op_ready{vlSymsp->TOP.op_ready}
    , op_valid{vlSymsp->TOP.op_valid}
    , op_player_id{vlSymsp->TOP.op_player_id}
    , op_col_id{vlSymsp->TOP.op_col_id}
    , re_ready{vlSymsp->TOP.re_ready}
    , re_valid{vlSymsp->TOP.re_valid}
    , re_err{vlSymsp->TOP.re_err}
    , re_is_finished{vlSymsp->TOP.re_is_finished}
    , re_winner{vlSymsp->TOP.re_winner}
    , re_tie{vlSymsp->TOP.re_tie}
    , connect4{vlSymsp->TOP.connect4}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vconnect4::Vconnect4(const char* _vcname__)
    : Vconnect4(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vconnect4::~Vconnect4() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vconnect4___024root___eval_debug_assertions(Vconnect4___024root* vlSelf);
#endif  // VL_DEBUG
void Vconnect4___024root___eval_static(Vconnect4___024root* vlSelf);
void Vconnect4___024root___eval_initial(Vconnect4___024root* vlSelf);
void Vconnect4___024root___eval_settle(Vconnect4___024root* vlSelf);
void Vconnect4___024root___eval(Vconnect4___024root* vlSelf);

void Vconnect4::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vconnect4::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vconnect4___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vconnect4___024root___eval_static(&(vlSymsp->TOP));
        Vconnect4___024root___eval_initial(&(vlSymsp->TOP));
        Vconnect4___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vconnect4___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vconnect4::eventsPending() { return false; }

uint64_t Vconnect4::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vconnect4::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vconnect4___024root___eval_final(Vconnect4___024root* vlSelf);

VL_ATTR_COLD void Vconnect4::final() {
    Vconnect4___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vconnect4::hierName() const { return vlSymsp->name(); }
const char* Vconnect4::modelName() const { return "Vconnect4"; }
unsigned Vconnect4::threads() const { return 1; }
void Vconnect4::prepareClone() const { contextp()->prepareClone(); }
void Vconnect4::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vconnect4::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vconnect4___024root__trace_decl_types(VerilatedVcd* tracep);

void Vconnect4___024root__trace_init_top(Vconnect4___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vconnect4___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vconnect4___024root*>(voidSelf);
    Vconnect4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vconnect4___024root__trace_decl_types(tracep);
    Vconnect4___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vconnect4___024root__trace_register(Vconnect4___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vconnect4::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vconnect4::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vconnect4___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
