// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCONNECT4__SYMS_H_
#define VERILATED_VCONNECT4__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vconnect4.h"

// INCLUDE MODULE CLASSES
#include "Vconnect4___024root.h"
#include "Vconnect4_connect4.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vconnect4__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vconnect4* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vconnect4___024root            TOP;
    Vconnect4_connect4             TOP__connect4;

    // SCOPE NAMES
    VerilatedScope __Vscope_connect4;

    // CONSTRUCTORS
    Vconnect4__Syms(VerilatedContext* contextp, const char* namep, Vconnect4* modelp);
    ~Vconnect4__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
