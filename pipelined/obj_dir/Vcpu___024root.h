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
    CData/*2:0*/ cpu__DOT__RegWriteW;
    CData/*2:0*/ cpu__DOT__RegWriteM;
    CData/*1:0*/ cpu__DOT__MemWriteM;
    CData/*1:0*/ cpu__DOT__ResultSrcW;
    CData/*2:0*/ cpu__DOT__ALUControlE;
    CData/*0:0*/ cpu__DOT__ALUSrcE;
    CData/*1:0*/ cpu__DOT__PCSrcE;
    CData/*4:0*/ cpu__DOT__Rs1E;
    CData/*4:0*/ cpu__DOT__Rs2E;
    CData/*4:0*/ cpu__DOT__RdM;
    CData/*4:0*/ cpu__DOT__RdW;
    CData/*4:0*/ cpu__DOT__RdE;
    CData/*6:0*/ cpu__DOT__OpcodeE;
    CData/*0:0*/ cpu__DOT__Fen;
    CData/*1:0*/ cpu__DOT__FowardAE;
    CData/*1:0*/ cpu__DOT__FowardBE;
    CData/*0:0*/ cpu__DOT__PCrst;
    CData/*2:0*/ cpu__DOT__control__DOT__ALUControlD;
    CData/*2:0*/ cpu__DOT__control__DOT__RegWriteE;
    CData/*1:0*/ cpu__DOT__control__DOT__ResultSrcE;
    CData/*1:0*/ cpu__DOT__control__DOT__MemWriteE;
    CData/*0:0*/ cpu__DOT__control__DOT__JumpE;
    CData/*0:0*/ cpu__DOT__control__DOT__BranchE;
    CData/*2:0*/ cpu__DOT__control__DOT__funct3E;
    CData/*1:0*/ cpu__DOT__control__DOT__ResultSrcM;
    CData/*0:0*/ __Vclklast__TOP__clk;
    SData/*14:0*/ cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls;
    VL_OUT(a0,31,0);
    IData/*31:0*/ cpu__DOT__InstrD;
    IData/*31:0*/ cpu__DOT__ExtImmD;
    IData/*31:0*/ cpu__DOT__PCD;
    IData/*31:0*/ cpu__DOT__PCPlus4D;
    IData/*31:0*/ cpu__DOT__ALUResultE;
    IData/*31:0*/ cpu__DOT__PCF;
    IData/*31:0*/ cpu__DOT__pc__DOT__next_PC;
    IData/*31:0*/ cpu__DOT__alu__DOT__RD1E;
    IData/*31:0*/ cpu__DOT__alu__DOT__RD2E;
    IData/*31:0*/ cpu__DOT__alu__DOT__PCE;
    IData/*31:0*/ cpu__DOT__alu__DOT__PCPlus4E;
    IData/*31:0*/ cpu__DOT__alu__DOT__SrcAE;
    IData/*31:0*/ cpu__DOT__alu__DOT__SrcBE;
    IData/*31:0*/ cpu__DOT__alu__DOT__WriteDataE;
    IData/*31:0*/ cpu__DOT__alu__DOT__ExtImmE;
    IData/*31:0*/ cpu__DOT__alu__DOT__ALUResultM;
    IData/*31:0*/ cpu__DOT__alu__DOT__WriteDataM;
    IData/*31:0*/ cpu__DOT__alu__DOT__PCPlus4M;
    IData/*31:0*/ cpu__DOT__alu__DOT__PCPlus4W;
    IData/*31:0*/ cpu__DOT__alu__DOT__ReadDataW;
    IData/*31:0*/ cpu__DOT__alu__DOT__ALUResultW;
    IData/*31:0*/ cpu__DOT__alu__DOT__ResultW;
    VlUnpacked<CData/*7:0*/, 256> cpu__DOT__control__DOT__InstrMem__DOT__rom_array;
    VlUnpacked<IData/*31:0*/, 256> cpu__DOT__alu__DOT__register__DOT__reg_array;
    VlUnpacked<IData/*31:0*/, 256> cpu__DOT__alu__DOT__data__DOT__data_mem_register;
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
