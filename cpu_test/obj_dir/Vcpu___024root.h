// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcpu.h for the primary calling header

#ifndef VERILATED_VCPU___024ROOT_H_
#define VERILATED_VCPU___024ROOT_H_  // guard

#include "verilated.h"

class Vcpu__Syms;

class Vcpu___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    CData/*0:0*/ cpu__DOT__ImmSrc;
    CData/*0:0*/ cpu__DOT__Instr;
    CData/*0:0*/ cpu__DOT__Mygreen__DOT__ImmScr;
    CData/*0:0*/ cpu__DOT__Mygreen__DOT__MyInstrMem__DOT__clk;
    CData/*0:0*/ __Vclklast__TOP__clk;
    VL_OUT(a0,31,0);
    IData/*31:0*/ cpu__DOT____Vcellout__Myblue__pc_out;
    IData/*31:0*/ cpu__DOT____Vcellout__Mygreen__ImmOp;
    IData/*31:0*/ cpu__DOT__Myblue__DOT__next_PC;
    IData/*31:0*/ cpu__DOT__Myblue__DOT__pc;
    IData/*31:0*/ cpu__DOT__Mygreen__DOT__instr;
    IData/*31:0*/ cpu__DOT__Myred__DOT__ALUop1;
    IData/*31:0*/ cpu__DOT__Myred__DOT__regOp2;
    VlUnpacked<IData/*31:0*/, 256> cpu__DOT__Mygreen__DOT__MyInstrMem__DOT__rom_array;
    VlUnpacked<IData/*31:0*/, 32> cpu__DOT__Myred__DOT__register__DOT__reg_array;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vcpu__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcpu___024root(Vcpu__Syms* symsp, const char* name);
    ~Vcpu___024root();
    VL_UNCOPYABLE(Vcpu___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
