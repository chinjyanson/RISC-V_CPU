// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu.h for the primary calling header

#include "verilated.h"

#include "Vcpu___024root.h"

extern const VlUnpacked<CData/*2:0*/, 64> Vcpu__ConstPool__TABLE_h9e1b8ee5_0;

VL_INLINE_OPT void Vcpu___024root___sequent__TOP__0(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___sequent__TOP__0\n"); );
    // Init
    CData/*5:0*/ __Vtableidx1;
    IData/*31:0*/ __Vdly__cpu__DOT__PCF;
    CData/*7:0*/ __Vdlyvdim0__cpu__DOT__alu__DOT__register__DOT__reg_array__v0;
    IData/*31:0*/ __Vdlyvval__cpu__DOT__alu__DOT__register__DOT__reg_array__v0;
    CData/*7:0*/ __Vdlyvdim0__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v0;
    IData/*31:0*/ __Vdlyvval__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v0;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v0;
    CData/*7:0*/ __Vdlyvdim0__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v1;
    CData/*4:0*/ __Vdlyvlsb__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v1;
    SData/*15:0*/ __Vdlyvval__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v1;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v1;
    CData/*7:0*/ __Vdlyvdim0__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v2;
    CData/*4:0*/ __Vdlyvlsb__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v2;
    CData/*7:0*/ __Vdlyvval__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v2;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v2;
    CData/*7:0*/ __Vdlyvdim0__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v3;
    IData/*31:0*/ __Vdlyvval__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v3;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v3;
    // Body
    __Vdly__cpu__DOT__PCF = vlSelf->cpu__DOT__PCF;
    __Vdlyvset__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v0 = 0U;
    __Vdlyvset__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v1 = 0U;
    __Vdlyvset__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v2 = 0U;
    __Vdlyvset__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v3 = 0U;
    if (vlSelf->cpu__DOT__PCrst) {
        __Vdly__cpu__DOT__PCF = 0U;
    } else if ((((3U == (IData)(vlSelf->cpu__DOT__OpcodeE)) 
                 & (((IData)(vlSelf->cpu__DOT__RdE) 
                     == (0x1fU & (vlSelf->cpu__DOT__InstrD 
                                  >> 0xfU))) | ((IData)(vlSelf->cpu__DOT__RdE) 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->cpu__DOT__InstrD 
                                                    >> 0x14U)))))
                 ? 0U : 1U)) {
        __Vdly__cpu__DOT__PCF = vlSelf->cpu__DOT__pc__DOT__next_PC;
    }
    vlSelf->cpu__DOT__ResultSrcW = vlSelf->cpu__DOT__control__DOT__ResultSrcM;
    vlSelf->cpu__DOT__alu__DOT__PCPlus4W = vlSelf->cpu__DOT__alu__DOT__PCPlus4M;
    vlSelf->cpu__DOT__alu__DOT__ALUResultW = vlSelf->cpu__DOT__alu__DOT__ALUResultM;
    vlSelf->cpu__DOT__alu__DOT__ReadDataW = vlSelf->cpu__DOT__alu__DOT__data__DOT__data_mem_register
        [(0xffU & vlSelf->cpu__DOT__alu__DOT__ALUResultM)];
    if ((1U == (IData)(vlSelf->cpu__DOT__MemWriteM))) {
        __Vdlyvval__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v0 
            = vlSelf->cpu__DOT__alu__DOT__WriteDataM;
        __Vdlyvset__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v0 = 1U;
        __Vdlyvdim0__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v0 
            = (0xffU & vlSelf->cpu__DOT__alu__DOT__ALUResultM);
    } else if ((2U == (IData)(vlSelf->cpu__DOT__MemWriteM))) {
        __Vdlyvval__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v1 
            = (0xffffU & vlSelf->cpu__DOT__alu__DOT__WriteDataM);
        __Vdlyvset__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v1 = 1U;
        __Vdlyvlsb__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v1 = 0U;
        __Vdlyvdim0__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v1 
            = (0xffU & vlSelf->cpu__DOT__alu__DOT__ALUResultM);
    } else if ((3U == (IData)(vlSelf->cpu__DOT__MemWriteM))) {
        __Vdlyvval__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v2 
            = (0xffU & vlSelf->cpu__DOT__alu__DOT__WriteDataM);
        __Vdlyvset__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v2 = 1U;
        __Vdlyvlsb__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v2 = 0U;
        __Vdlyvdim0__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v2 
            = (0xffU & vlSelf->cpu__DOT__alu__DOT__ALUResultM);
    } else {
        __Vdlyvval__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v3 
            = vlSelf->cpu__DOT__alu__DOT__data__DOT__data_mem_register
            [(0xffU & vlSelf->cpu__DOT__alu__DOT__ALUResultM)];
        __Vdlyvset__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v3 = 1U;
        __Vdlyvdim0__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v3 
            = (0xffU & vlSelf->cpu__DOT__alu__DOT__ALUResultM);
    }
    __Vdlyvval__cpu__DOT__alu__DOT__register__DOT__reg_array__v0 
        = ((4U & (IData)(vlSelf->cpu__DOT__RegWriteW))
            ? ((2U & (IData)(vlSelf->cpu__DOT__RegWriteW))
                ? ((1U & (IData)(vlSelf->cpu__DOT__RegWriteW))
                    ? (0xffU & vlSelf->cpu__DOT__alu__DOT__ResultW)
                    : (0xffffU & vlSelf->cpu__DOT__alu__DOT__ResultW))
                : vlSelf->cpu__DOT__alu__DOT__register__DOT__reg_array
               [vlSelf->cpu__DOT__RdW]) : ((2U & (IData)(vlSelf->cpu__DOT__RegWriteW))
                                            ? ((1U 
                                                & (IData)(vlSelf->cpu__DOT__RegWriteW))
                                                ? (
                                                   ((- (IData)(
                                                               (1U 
                                                                & (vlSelf->cpu__DOT__alu__DOT__ResultW 
                                                                   >> 7U)))) 
                                                    << 8U) 
                                                   | (0xffU 
                                                      & vlSelf->cpu__DOT__alu__DOT__ResultW))
                                                : (
                                                   ((- (IData)(
                                                               (1U 
                                                                & (vlSelf->cpu__DOT__alu__DOT__ResultW 
                                                                   >> 0xfU)))) 
                                                    << 0x10U) 
                                                   | (0xffffU 
                                                      & vlSelf->cpu__DOT__alu__DOT__ResultW)))
                                            : ((1U 
                                                & (IData)(vlSelf->cpu__DOT__RegWriteW))
                                                ? vlSelf->cpu__DOT__alu__DOT__ResultW
                                                : vlSelf->cpu__DOT__alu__DOT__register__DOT__reg_array
                                               [vlSelf->cpu__DOT__RdW])));
    __Vdlyvdim0__cpu__DOT__alu__DOT__register__DOT__reg_array__v0 
        = vlSelf->cpu__DOT__RdW;
    if (__Vdlyvset__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v0) {
        vlSelf->cpu__DOT__alu__DOT__data__DOT__data_mem_register[__Vdlyvdim0__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v0] 
            = __Vdlyvval__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v0;
    }
    if (__Vdlyvset__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v1) {
        vlSelf->cpu__DOT__alu__DOT__data__DOT__data_mem_register[__Vdlyvdim0__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v1] 
            = (((~ ((IData)(0xffffU) << (IData)(__Vdlyvlsb__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v1))) 
                & vlSelf->cpu__DOT__alu__DOT__data__DOT__data_mem_register
                [__Vdlyvdim0__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v1]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v1) 
                                   << (IData)(__Vdlyvlsb__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v1))));
    }
    if (__Vdlyvset__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v2) {
        vlSelf->cpu__DOT__alu__DOT__data__DOT__data_mem_register[__Vdlyvdim0__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v2] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v2))) 
                & vlSelf->cpu__DOT__alu__DOT__data__DOT__data_mem_register
                [__Vdlyvdim0__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v2]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v2) 
                                   << (IData)(__Vdlyvlsb__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v2))));
    }
    if (__Vdlyvset__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v3) {
        vlSelf->cpu__DOT__alu__DOT__data__DOT__data_mem_register[__Vdlyvdim0__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v3] 
            = __Vdlyvval__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v3;
    }
    if (vlSelf->cpu__DOT__Fen) {
        if (((0U != (IData)(vlSelf->cpu__DOT__PCSrcE))
              ? 1U : 0U)) {
            vlSelf->cpu__DOT__ALUControlE = 0U;
            vlSelf->cpu__DOT__control__DOT__BranchE = 0U;
            vlSelf->cpu__DOT__control__DOT__JumpE = 0U;
            vlSelf->cpu__DOT__alu__DOT__PCE = 0U;
            vlSelf->cpu__DOT__alu__DOT__ExtImmE = 0U;
            vlSelf->cpu__DOT__control__DOT__funct3E = 0U;
            vlSelf->cpu__DOT__ALUSrcE = 0U;
            vlSelf->cpu__DOT__alu__DOT__RD1E = 0U;
            vlSelf->cpu__DOT__Rs1E = 0U;
            vlSelf->cpu__DOT__alu__DOT__RD2E = 0U;
        } else {
            vlSelf->cpu__DOT__ALUControlE = (7U & (IData)(vlSelf->cpu__DOT__control__DOT__ALUControlD));
            vlSelf->cpu__DOT__control__DOT__BranchE 
                = (1U & ((IData)(vlSelf->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls) 
                         >> 6U));
            vlSelf->cpu__DOT__control__DOT__JumpE = 
                (1U & ((IData)(vlSelf->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls) 
                       >> 7U));
            vlSelf->cpu__DOT__alu__DOT__PCE = vlSelf->cpu__DOT__PCD;
            vlSelf->cpu__DOT__alu__DOT__ExtImmE = vlSelf->cpu__DOT__ExtImmD;
            vlSelf->cpu__DOT__control__DOT__funct3E 
                = (7U & (vlSelf->cpu__DOT__InstrD >> 0xcU));
            vlSelf->cpu__DOT__ALUSrcE = (1U & ((IData)(vlSelf->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls) 
                                               >> 5U));
            vlSelf->cpu__DOT__alu__DOT__RD1E = vlSelf->cpu__DOT__alu__DOT__register__DOT__reg_array
                [(0x1fU & (vlSelf->cpu__DOT__InstrD 
                           >> 0xfU))];
            vlSelf->cpu__DOT__Rs1E = (0x1fU & (vlSelf->cpu__DOT__InstrD 
                                               >> 0xfU));
            vlSelf->cpu__DOT__alu__DOT__RD2E = vlSelf->cpu__DOT__alu__DOT__register__DOT__reg_array
                [(0x1fU & (vlSelf->cpu__DOT__InstrD 
                           >> 0x14U))];
        }
    }
    vlSelf->cpu__DOT__alu__DOT__register__DOT__reg_array[__Vdlyvdim0__cpu__DOT__alu__DOT__register__DOT__reg_array__v0] 
        = __Vdlyvval__cpu__DOT__alu__DOT__register__DOT__reg_array__v0;
    vlSelf->cpu__DOT__control__DOT__ResultSrcM = vlSelf->cpu__DOT__control__DOT__ResultSrcE;
    vlSelf->cpu__DOT__alu__DOT__PCPlus4M = vlSelf->cpu__DOT__alu__DOT__PCPlus4E;
    vlSelf->cpu__DOT__alu__DOT__ResultW = ((0U == (IData)(vlSelf->cpu__DOT__ResultSrcW))
                                            ? vlSelf->cpu__DOT__alu__DOT__ALUResultW
                                            : ((1U 
                                                == (IData)(vlSelf->cpu__DOT__ResultSrcW))
                                                ? vlSelf->cpu__DOT__alu__DOT__ReadDataW
                                                : (
                                                   (2U 
                                                    == (IData)(vlSelf->cpu__DOT__ResultSrcW))
                                                    ? vlSelf->cpu__DOT__alu__DOT__PCPlus4W
                                                    : 0U)));
    vlSelf->cpu__DOT__MemWriteM = vlSelf->cpu__DOT__control__DOT__MemWriteE;
    vlSelf->cpu__DOT__alu__DOT__WriteDataM = vlSelf->cpu__DOT__alu__DOT__WriteDataE;
    vlSelf->cpu__DOT__alu__DOT__ALUResultM = vlSelf->cpu__DOT__ALUResultE;
    vlSelf->a0 = vlSelf->cpu__DOT__alu__DOT__register__DOT__reg_array
        [0xbU];
    vlSelf->cpu__DOT__RegWriteW = vlSelf->cpu__DOT__RegWriteM;
    vlSelf->cpu__DOT__RdW = vlSelf->cpu__DOT__RdM;
    vlSelf->cpu__DOT__RegWriteM = vlSelf->cpu__DOT__control__DOT__RegWriteE;
    vlSelf->cpu__DOT__RdM = vlSelf->cpu__DOT__RdE;
    if (vlSelf->cpu__DOT__Fen) {
        if (((0U != (IData)(vlSelf->cpu__DOT__PCSrcE))
              ? 1U : 0U)) {
            vlSelf->cpu__DOT__Rs2E = 0U;
            vlSelf->cpu__DOT__PCD = 0U;
            vlSelf->cpu__DOT__OpcodeE = 0U;
            vlSelf->cpu__DOT__control__DOT__ResultSrcE = 0U;
            vlSelf->cpu__DOT__alu__DOT__PCPlus4E = 0U;
            vlSelf->cpu__DOT__control__DOT__MemWriteE = 0U;
            vlSelf->cpu__DOT__PCPlus4D = 0U;
            vlSelf->cpu__DOT__control__DOT__RegWriteE = 0U;
            vlSelf->cpu__DOT__RdE = 0U;
            vlSelf->cpu__DOT__InstrD = 0U;
        } else {
            vlSelf->cpu__DOT__Rs2E = (0x1fU & (vlSelf->cpu__DOT__InstrD 
                                               >> 0x14U));
            vlSelf->cpu__DOT__PCD = vlSelf->cpu__DOT__PCF;
            vlSelf->cpu__DOT__OpcodeE = (0x7fU & vlSelf->cpu__DOT__InstrD);
            vlSelf->cpu__DOT__control__DOT__ResultSrcE 
                = (3U & ((IData)(vlSelf->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls) 
                         >> 0xaU));
            vlSelf->cpu__DOT__alu__DOT__PCPlus4E = vlSelf->cpu__DOT__PCPlus4D;
            vlSelf->cpu__DOT__control__DOT__MemWriteE 
                = (3U & ((IData)(vlSelf->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls) 
                         >> 8U));
            vlSelf->cpu__DOT__PCPlus4D = ((IData)(4U) 
                                          + vlSelf->cpu__DOT__PCF);
            vlSelf->cpu__DOT__control__DOT__RegWriteE 
                = (7U & ((IData)(vlSelf->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls) 
                         >> 0xcU));
            vlSelf->cpu__DOT__RdE = (0x1fU & (vlSelf->cpu__DOT__InstrD 
                                              >> 7U));
            vlSelf->cpu__DOT__InstrD = ((vlSelf->cpu__DOT__control__DOT__InstrMem__DOT__rom_array
                                         [(0xffU & 
                                           ((IData)(3U) 
                                            + vlSelf->cpu__DOT__PCF))] 
                                         << 0x18U) 
                                        | ((vlSelf->cpu__DOT__control__DOT__InstrMem__DOT__rom_array
                                            [(0xffU 
                                              & ((IData)(2U) 
                                                 + vlSelf->cpu__DOT__PCF))] 
                                            << 0x10U) 
                                           | ((vlSelf->cpu__DOT__control__DOT__InstrMem__DOT__rom_array
                                               [(0xffU 
                                                 & ((IData)(1U) 
                                                    + vlSelf->cpu__DOT__PCF))] 
                                               << 8U) 
                                              | vlSelf->cpu__DOT__control__DOT__InstrMem__DOT__rom_array
                                              [(0xffU 
                                                & vlSelf->cpu__DOT__PCF)])));
        }
    }
    if (((0U != (IData)(vlSelf->cpu__DOT__RegWriteM)) 
         | (0U != (IData)(vlSelf->cpu__DOT__RegWriteW)))) {
        vlSelf->cpu__DOT__FowardAE = ((((IData)(vlSelf->cpu__DOT__Rs1E) 
                                        == (IData)(vlSelf->cpu__DOT__RdM)) 
                                       & (0U != (IData)(vlSelf->cpu__DOT__Rs1E)))
                                       ? 2U : ((((IData)(vlSelf->cpu__DOT__Rs1E) 
                                                 == (IData)(vlSelf->cpu__DOT__RdW)) 
                                                & (0U 
                                                   != (IData)(vlSelf->cpu__DOT__Rs1E)))
                                                ? 1U
                                                : 0U));
        vlSelf->cpu__DOT__FowardBE = ((((IData)(vlSelf->cpu__DOT__Rs2E) 
                                        == (IData)(vlSelf->cpu__DOT__RdM)) 
                                       & (0U != (IData)(vlSelf->cpu__DOT__Rs2E)))
                                       ? 2U : ((((IData)(vlSelf->cpu__DOT__Rs2E) 
                                                 == (IData)(vlSelf->cpu__DOT__RdW)) 
                                                & (0U 
                                                   != (IData)(vlSelf->cpu__DOT__Rs2E)))
                                                ? 1U
                                                : 0U));
    } else {
        vlSelf->cpu__DOT__FowardAE = 0U;
        vlSelf->cpu__DOT__FowardBE = 0U;
    }
    vlSelf->cpu__DOT__alu__DOT__SrcAE = ((0U == (IData)(vlSelf->cpu__DOT__FowardAE))
                                          ? vlSelf->cpu__DOT__alu__DOT__RD1E
                                          : ((1U == (IData)(vlSelf->cpu__DOT__FowardAE))
                                              ? vlSelf->cpu__DOT__alu__DOT__ResultW
                                              : ((2U 
                                                  == (IData)(vlSelf->cpu__DOT__FowardAE))
                                                  ? vlSelf->cpu__DOT__alu__DOT__ALUResultM
                                                  : 0U)));
    vlSelf->cpu__DOT__alu__DOT__WriteDataE = ((0U == (IData)(vlSelf->cpu__DOT__FowardBE))
                                               ? vlSelf->cpu__DOT__alu__DOT__RD2E
                                               : ((1U 
                                                   == (IData)(vlSelf->cpu__DOT__FowardBE))
                                                   ? vlSelf->cpu__DOT__alu__DOT__ResultW
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->cpu__DOT__FowardBE))
                                                    ? vlSelf->cpu__DOT__alu__DOT__ALUResultM
                                                    : 0U)));
    vlSelf->cpu__DOT__alu__DOT__SrcBE = ((IData)(vlSelf->cpu__DOT__ALUSrcE)
                                          ? vlSelf->cpu__DOT__alu__DOT__ExtImmE
                                          : vlSelf->cpu__DOT__alu__DOT__WriteDataE);
    vlSelf->cpu__DOT__PCF = __Vdly__cpu__DOT__PCF;
    vlSelf->cpu__DOT__ALUResultE = ((4U & (IData)(vlSelf->cpu__DOT__ALUControlE))
                                     ? ((2U & (IData)(vlSelf->cpu__DOT__ALUControlE))
                                         ? vlSelf->cpu__DOT__alu__DOT__SrcBE
                                         : ((1U & (IData)(vlSelf->cpu__DOT__ALUControlE))
                                             ? (vlSelf->cpu__DOT__alu__DOT__SrcAE 
                                                < vlSelf->cpu__DOT__alu__DOT__SrcBE)
                                             : (vlSelf->cpu__DOT__alu__DOT__SrcAE 
                                                << 
                                                (0x1fU 
                                                 & vlSelf->cpu__DOT__alu__DOT__SrcBE))))
                                     : ((2U & (IData)(vlSelf->cpu__DOT__ALUControlE))
                                         ? ((1U & (IData)(vlSelf->cpu__DOT__ALUControlE))
                                             ? (vlSelf->cpu__DOT__alu__DOT__SrcAE 
                                                | vlSelf->cpu__DOT__alu__DOT__SrcBE)
                                             : (vlSelf->cpu__DOT__alu__DOT__SrcAE 
                                                & vlSelf->cpu__DOT__alu__DOT__SrcBE))
                                         : ((1U & (IData)(vlSelf->cpu__DOT__ALUControlE))
                                             ? (vlSelf->cpu__DOT__alu__DOT__SrcAE 
                                                - vlSelf->cpu__DOT__alu__DOT__SrcBE)
                                             : (vlSelf->cpu__DOT__alu__DOT__SrcAE 
                                                + vlSelf->cpu__DOT__alu__DOT__SrcBE))));
    vlSelf->cpu__DOT__PCSrcE = ((IData)(vlSelf->cpu__DOT__control__DOT__JumpE)
                                 ? ((IData)(vlSelf->cpu__DOT__ALUSrcE)
                                     ? 2U : 1U) : (
                                                   ((IData)(vlSelf->cpu__DOT__control__DOT__BranchE) 
                                                    & ((vlSelf->cpu__DOT__alu__DOT__SrcAE 
                                                        == vlSelf->cpu__DOT__alu__DOT__SrcBE) 
                                                       ^ (IData)(vlSelf->cpu__DOT__control__DOT__funct3E)))
                                                    ? 1U
                                                    : 0U));
    vlSelf->cpu__DOT__Fen = (((3U == (IData)(vlSelf->cpu__DOT__OpcodeE)) 
                              & (((IData)(vlSelf->cpu__DOT__RdE) 
                                  == (0x1fU & (vlSelf->cpu__DOT__InstrD 
                                               >> 0xfU))) 
                                 | ((IData)(vlSelf->cpu__DOT__RdE) 
                                    == (0x1fU & (vlSelf->cpu__DOT__InstrD 
                                                 >> 0x14U)))))
                              ? 0U : 1U);
    if ((0x40U & vlSelf->cpu__DOT__InstrD)) {
        vlSelf->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls 
            = ((0x20U & vlSelf->cpu__DOT__InstrD) ? 
               ((0x10U & vlSelf->cpu__DOT__InstrD) ? 0U
                 : ((8U & vlSelf->cpu__DOT__InstrD)
                     ? ((4U & vlSelf->cpu__DOT__InstrD)
                         ? ((2U & vlSelf->cpu__DOT__InstrD)
                             ? ((1U & vlSelf->cpu__DOT__InstrD)
                                 ? 0x188cU : 0U) : 0U)
                         : 0U) : ((4U & vlSelf->cpu__DOT__InstrD)
                                   ? ((2U & vlSelf->cpu__DOT__InstrD)
                                       ? ((1U & vlSelf->cpu__DOT__InstrD)
                                           ? 0x18a0U
                                           : 0U) : 0U)
                                   : ((2U & vlSelf->cpu__DOT__InstrD)
                                       ? ((1U & vlSelf->cpu__DOT__InstrD)
                                           ? 0x49U : 0U)
                                       : 0U)))) : 0U);
    } else if ((0x20U & vlSelf->cpu__DOT__InstrD)) {
        if ((0x10U & vlSelf->cpu__DOT__InstrD)) {
            vlSelf->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls 
                = ((8U & vlSelf->cpu__DOT__InstrD) ? 0U
                    : ((4U & vlSelf->cpu__DOT__InstrD)
                        ? ((2U & vlSelf->cpu__DOT__InstrD)
                            ? ((1U & vlSelf->cpu__DOT__InstrD)
                                ? 0x1033U : 0U) : 0U)
                        : ((2U & vlSelf->cpu__DOT__InstrD)
                            ? ((1U & vlSelf->cpu__DOT__InstrD)
                                ? 0x1002U : 0U) : 0U)));
        } else if ((8U & vlSelf->cpu__DOT__InstrD)) {
            vlSelf->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls = 0U;
        } else if ((4U & vlSelf->cpu__DOT__InstrD)) {
            vlSelf->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls = 0U;
        } else if ((2U & vlSelf->cpu__DOT__InstrD)) {
            if ((1U & vlSelf->cpu__DOT__InstrD)) {
                vlSelf->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls = 0x28U;
                if ((0U == (7U & (vlSelf->cpu__DOT__InstrD 
                                  >> 0xcU)))) {
                    vlSelf->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls 
                        = (0x300U | (0x7cffU & (IData)(vlSelf->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls)));
                } else if ((1U == (7U & (vlSelf->cpu__DOT__InstrD 
                                         >> 0xcU)))) {
                    vlSelf->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls 
                        = (0x200U | (0x7cffU & (IData)(vlSelf->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls)));
                } else if ((2U == (7U & (vlSelf->cpu__DOT__InstrD 
                                         >> 0xcU)))) {
                    vlSelf->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls 
                        = (0x100U | (0x7cffU & (IData)(vlSelf->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls)));
                }
            } else {
                vlSelf->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls = 0U;
            }
        } else {
            vlSelf->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls = 0U;
        }
    } else if ((0x10U & vlSelf->cpu__DOT__InstrD)) {
        vlSelf->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls 
            = ((8U & vlSelf->cpu__DOT__InstrD) ? 0U
                : ((4U & vlSelf->cpu__DOT__InstrD) ? 0U
                    : ((2U & vlSelf->cpu__DOT__InstrD)
                        ? ((1U & vlSelf->cpu__DOT__InstrD)
                            ? 0x1022U : 0U) : 0U)));
    } else if ((8U & vlSelf->cpu__DOT__InstrD)) {
        vlSelf->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls = 0U;
    } else if ((4U & vlSelf->cpu__DOT__InstrD)) {
        vlSelf->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls = 0U;
    } else if ((2U & vlSelf->cpu__DOT__InstrD)) {
        if ((1U & vlSelf->cpu__DOT__InstrD)) {
            vlSelf->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls = 0x420U;
            if ((0x4000U & vlSelf->cpu__DOT__InstrD)) {
                if ((1U & (~ (vlSelf->cpu__DOT__InstrD 
                              >> 0xdU)))) {
                    vlSelf->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls 
                        = ((0x1000U & vlSelf->cpu__DOT__InstrD)
                            ? (0x6000U | (0xfffU & (IData)(vlSelf->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls)))
                            : (0x7000U | (0xfffU & (IData)(vlSelf->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls))));
                }
            } else if ((0x2000U & vlSelf->cpu__DOT__InstrD)) {
                if ((1U & (~ (vlSelf->cpu__DOT__InstrD 
                              >> 0xcU)))) {
                    vlSelf->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls 
                        = (0x1000U | (0xfffU & (IData)(vlSelf->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls)));
                }
            } else {
                vlSelf->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls 
                    = ((0x1000U & vlSelf->cpu__DOT__InstrD)
                        ? (0x2000U | (0xfffU & (IData)(vlSelf->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls)))
                        : (0x3000U | (0xfffU & (IData)(vlSelf->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls))));
            }
        } else {
            vlSelf->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls = 0U;
        }
    } else {
        vlSelf->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls = 0U;
    }
    vlSelf->cpu__DOT__pc__DOT__next_PC = ((0U == (IData)(vlSelf->cpu__DOT__PCSrcE))
                                           ? ((IData)(4U) 
                                              + vlSelf->cpu__DOT__PCF)
                                           : ((1U == (IData)(vlSelf->cpu__DOT__PCSrcE))
                                               ? (vlSelf->cpu__DOT__alu__DOT__PCE 
                                                  + vlSelf->cpu__DOT__alu__DOT__ExtImmE)
                                               : ((2U 
                                                   == (IData)(vlSelf->cpu__DOT__PCSrcE))
                                                   ? vlSelf->cpu__DOT__ALUResultE
                                                   : 0U)));
    if ((0U == (7U & ((IData)(vlSelf->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls) 
                      >> 2U)))) {
        vlSelf->cpu__DOT__ExtImmD = (((- (IData)((vlSelf->cpu__DOT__InstrD 
                                                  >> 0x1fU))) 
                                      << 0xcU) | (vlSelf->cpu__DOT__InstrD 
                                                  >> 0x14U));
    } else if ((1U == (7U & ((IData)(vlSelf->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls) 
                             >> 2U)))) {
        vlSelf->cpu__DOT__ExtImmD = (((- (IData)((vlSelf->cpu__DOT__InstrD 
                                                  >> 0x1fU))) 
                                      << 0xcU) | ((0xfe0U 
                                                   & (vlSelf->cpu__DOT__InstrD 
                                                      >> 0x14U)) 
                                                  | (0x1fU 
                                                     & (vlSelf->cpu__DOT__InstrD 
                                                        >> 7U))));
    } else if ((2U == (7U & ((IData)(vlSelf->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls) 
                             >> 2U)))) {
        vlSelf->cpu__DOT__ExtImmD = (((- (IData)((vlSelf->cpu__DOT__InstrD 
                                                  >> 0x1fU))) 
                                      << 0xcU) | ((0x800U 
                                                   & (vlSelf->cpu__DOT__InstrD 
                                                      << 4U)) 
                                                  | ((0x7e0U 
                                                      & (vlSelf->cpu__DOT__InstrD 
                                                         >> 0x14U)) 
                                                     | (0x1eU 
                                                        & (vlSelf->cpu__DOT__InstrD 
                                                           >> 7U)))));
    } else if ((3U == (7U & ((IData)(vlSelf->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls) 
                             >> 2U)))) {
        vlSelf->cpu__DOT__ExtImmD = (((- (IData)((vlSelf->cpu__DOT__InstrD 
                                                  >> 0x1fU))) 
                                      << 0x14U) | (
                                                   (0xff000U 
                                                    & vlSelf->cpu__DOT__InstrD) 
                                                   | ((0x800U 
                                                       & (vlSelf->cpu__DOT__InstrD 
                                                          >> 9U)) 
                                                      | (0x7feU 
                                                         & (vlSelf->cpu__DOT__InstrD 
                                                            >> 0x14U)))));
    } else if ((4U == (7U & ((IData)(vlSelf->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls) 
                             >> 2U)))) {
        vlSelf->cpu__DOT__ExtImmD = (0xfffff000U & vlSelf->cpu__DOT__InstrD);
    }
    __Vtableidx1 = (((IData)((0x40000020U == (0x40000020U 
                                              & vlSelf->cpu__DOT__InstrD))) 
                     << 5U) | ((0x1cU & (vlSelf->cpu__DOT__InstrD 
                                         >> 0xaU)) 
                               | (3U & (IData)(vlSelf->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls))));
    vlSelf->cpu__DOT__control__DOT__ALUControlD = Vcpu__ConstPool__TABLE_h9e1b8ee5_0
        [__Vtableidx1];
}

void Vcpu___024root___eval(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vcpu___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vcpu___024root___eval_debug_assertions(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
