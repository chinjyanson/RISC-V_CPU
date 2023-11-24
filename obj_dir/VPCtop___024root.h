// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VPCtop.h for the primary calling header

#ifndef VERILATED_VPCTOP___024ROOT_H_
#define VERILATED_VPCTOP___024ROOT_H_  // guard

#include "verilated.h"

class VPCtop__Syms;

class VPCtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(PCsrc,0,0);
    CData/*0:0*/ __Vclklast__TOP__clk;
    VL_IN16(ImmOp,11,0);
    VL_OUT16(PC,11,0);
    IData/*31:0*/ PCtop__DOT____Vcellout__PC_Reg__PC;

    // INTERNAL VARIABLES
    VPCtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    VPCtop___024root(VPCtop__Syms* symsp, const char* name);
    ~VPCtop___024root();
    VL_UNCOPYABLE(VPCtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
