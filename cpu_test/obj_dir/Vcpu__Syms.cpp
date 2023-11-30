// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vcpu__Syms.h"
#include "Vcpu.h"
<<<<<<< HEAD



// FUNCTIONS
Vcpu__Syms::Vcpu__Syms(Vcpu* topp, const char* namep)
    // Setup locals
    : __Vm_namep(namep)
    , __Vm_activity(false)
    , __Vm_baseCode(0)
    , __Vm_didInit(false)
    // Setup submodule names
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
=======
#include "Vcpu___024root.h"

// FUNCTIONS
Vcpu__Syms::~Vcpu__Syms()
{
}

Vcpu__Syms::Vcpu__Syms(VerilatedContext* contextp, const char* namep, Vcpu* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
>>>>>>> 07e1f023be4db24706a5e02e1dc67bc09c2f927b
}
