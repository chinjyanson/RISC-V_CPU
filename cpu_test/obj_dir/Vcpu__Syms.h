// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

<<<<<<< HEAD
#ifndef _VCPU__SYMS_H_
#define _VCPU__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODULE CLASSES
#include "Vcpu.h"

// SYMS CLASS
class Vcpu__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vcpu*                          TOPp;
    
    // CREATORS
    Vcpu__Syms(Vcpu* topp, const char* namep);
    ~Vcpu__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
=======
#ifndef VERILATED_VCPU__SYMS_H_
#define VERILATED_VCPU__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vcpu.h"

// INCLUDE MODULE CLASSES
#include "Vcpu___024root.h"

// SYMS CLASS (contains all model state)
class Vcpu__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vcpu* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vcpu___024root                 TOP;

    // CONSTRUCTORS
    Vcpu__Syms(VerilatedContext* contextp, const char* namep, Vcpu* modelp);
    ~Vcpu__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
>>>>>>> 07e1f023be4db24706a5e02e1dc67bc09c2f927b
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
