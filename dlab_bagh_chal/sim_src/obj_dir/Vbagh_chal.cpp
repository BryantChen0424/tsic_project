// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vbagh_chal__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vbagh_chal::Vbagh_chal(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vbagh_chal__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , op_ready{vlSymsp->TOP.op_ready}
    , op_valid{vlSymsp->TOP.op_valid}
    , op_i{vlSymsp->TOP.op_i}
    , op_j{vlSymsp->TOP.op_j}
    , re_ready{vlSymsp->TOP.re_ready}
    , re_valid{vlSymsp->TOP.re_valid}
    , re_is_finished{vlSymsp->TOP.re_is_finished}
    , re_possible_ops{vlSymsp->TOP.re_possible_ops}
    , o_goats_in_hand{vlSymsp->TOP.o_goats_in_hand}
    , o_goats_killed{vlSymsp->TOP.o_goats_killed}
    , re_selectable{vlSymsp->TOP.re_selectable}
    , bagh_chal{vlSymsp->TOP.bagh_chal}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vbagh_chal::Vbagh_chal(const char* _vcname__)
    : Vbagh_chal(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vbagh_chal::~Vbagh_chal() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vbagh_chal___024root___eval_debug_assertions(Vbagh_chal___024root* vlSelf);
#endif  // VL_DEBUG
void Vbagh_chal___024root___eval_static(Vbagh_chal___024root* vlSelf);
void Vbagh_chal___024root___eval_initial(Vbagh_chal___024root* vlSelf);
void Vbagh_chal___024root___eval_settle(Vbagh_chal___024root* vlSelf);
void Vbagh_chal___024root___eval(Vbagh_chal___024root* vlSelf);

void Vbagh_chal::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vbagh_chal::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vbagh_chal___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vbagh_chal___024root___eval_static(&(vlSymsp->TOP));
        Vbagh_chal___024root___eval_initial(&(vlSymsp->TOP));
        Vbagh_chal___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vbagh_chal___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vbagh_chal::eventsPending() { return false; }

uint64_t Vbagh_chal::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vbagh_chal::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vbagh_chal___024root___eval_final(Vbagh_chal___024root* vlSelf);

VL_ATTR_COLD void Vbagh_chal::final() {
    Vbagh_chal___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vbagh_chal::hierName() const { return vlSymsp->name(); }
const char* Vbagh_chal::modelName() const { return "Vbagh_chal"; }
unsigned Vbagh_chal::threads() const { return 1; }
void Vbagh_chal::prepareClone() const { contextp()->prepareClone(); }
void Vbagh_chal::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vbagh_chal::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vbagh_chal___024root__trace_decl_types(VerilatedVcd* tracep);

void Vbagh_chal___024root__trace_init_top(Vbagh_chal___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vbagh_chal___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbagh_chal___024root*>(voidSelf);
    Vbagh_chal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vbagh_chal___024root__trace_decl_types(tracep);
    Vbagh_chal___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vbagh_chal___024root__trace_register(Vbagh_chal___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vbagh_chal::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vbagh_chal::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vbagh_chal___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
