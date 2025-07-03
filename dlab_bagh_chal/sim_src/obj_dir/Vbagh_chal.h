// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VBAGH_CHAL_H_
#define VERILATED_VBAGH_CHAL_H_  // guard

#include "verilated.h"
#include "svdpi.h"

class Vbagh_chal__Syms;
class Vbagh_chal___024root;
class VerilatedVcdC;
class Vbagh_chal_bagh_chal;


// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vbagh_chal VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vbagh_chal__Syms* const vlSymsp;

  public:

    // CONSTEXPR CAPABILITIES
    // Verilated with --trace?
    static constexpr bool traceCapable = true;

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk,0,0);
    VL_IN8(&rst_n,0,0);
    VL_OUT8(&op_ready,0,0);
    VL_IN8(&op_valid,0,0);
    VL_IN8(&op_i,4,0);
    VL_IN8(&op_j,4,0);
    VL_IN8(&re_ready,0,0);
    VL_OUT8(&re_valid,0,0);
    VL_OUT8(&re_is_finished,0,0);
    VL_OUT8(&re_possible_ops,3,0);
    VL_OUT8(&o_goats_in_hand,4,0);
    VL_OUT8(&o_goats_killed,4,0);
    VL_OUT(&re_selectable,24,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vbagh_chal_bagh_chal* const bagh_chal;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vbagh_chal___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vbagh_chal(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vbagh_chal(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vbagh_chal();
  private:
    VL_UNCOPYABLE(Vbagh_chal);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedTraceBaseC* tfp, int levels, int options = 0) { contextp()->trace(tfp, levels, options); }
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
    std::unique_ptr<VerilatedTraceConfig> traceConfig() const override final;
  private:
    // Internal functions - trace registration
    void traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options);
};

#endif  // guard
