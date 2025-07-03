// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VBAGH_CHAL__SYMS_H_
#define VERILATED_VBAGH_CHAL__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vbagh_chal.h"

// INCLUDE MODULE CLASSES
#include "Vbagh_chal___024root.h"
#include "Vbagh_chal_bagh_chal.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vbagh_chal__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vbagh_chal* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vbagh_chal___024root           TOP;
    Vbagh_chal_bagh_chal           TOP__bagh_chal;

    // SCOPE NAMES
    VerilatedScope __Vscope_bagh_chal;

    // CONSTRUCTORS
    Vbagh_chal__Syms(VerilatedContext* contextp, const char* namep, Vbagh_chal* modelp);
    ~Vbagh_chal__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
