// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu.h for the primary calling header

#include "verilated.h"

#include "Vcpu___024root.h"

VL_ATTR_COLD void Vcpu___024root___initial__TOP__0(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___initial__TOP__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_hb978afc8__0;
    VlWide<4>/*127:0*/ __Vtemp_h2ad0e489__0;
    // Body
    VL_WRITEF("Loading ROM\n");
    __Vtemp_hb978afc8__0[0U] = 0x2e6d656dU;
    __Vtemp_hb978afc8__0[1U] = 0x61726f6dU;
    __Vtemp_hb978afc8__0[2U] = 0x646174U;
    VL_READMEM_N(true, 32, 256, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_hb978afc8__0)
                 ,  &(vlSelf->cpu__DOT__alu__DOT__data__DOT__data_mem_register)
                 , 0, ~0ULL);
    VL_WRITEF("Loading rom.\n");
    __Vtemp_h2ad0e489__0[0U] = 0x2e6d656dU;
    __Vtemp_h2ad0e489__0[1U] = 0x636f6465U;
    __Vtemp_h2ad0e489__0[2U] = 0x68696e65U;
    __Vtemp_h2ad0e489__0[3U] = 0x6d6163U;
    VL_READMEM_N(true, 32, 256, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_h2ad0e489__0)
                 ,  &(vlSelf->cpu__DOT__control__DOT__InstrMem__DOT__rom_array)
                 , 0, ~0ULL);
    vlSelf->cpu__DOT__MemWrite = 0U;
}

extern const VlUnpacked<CData/*6:0*/, 2048> Vcpu__ConstPool__TABLE_h8ce1d139_0;
extern const VlUnpacked<CData/*0:0*/, 2048> Vcpu__ConstPool__TABLE_h0638d652_0;
extern const VlUnpacked<CData/*1:0*/, 2048> Vcpu__ConstPool__TABLE_h451fada2_0;
extern const VlUnpacked<CData/*2:0*/, 2048> Vcpu__ConstPool__TABLE_h86cc9c99_0;
extern const VlUnpacked<CData/*0:0*/, 2048> Vcpu__ConstPool__TABLE_h3793b81c_0;
extern const VlUnpacked<CData/*1:0*/, 2048> Vcpu__ConstPool__TABLE_hf7e03d3b_0;
extern const VlUnpacked<CData/*1:0*/, 2048> Vcpu__ConstPool__TABLE_h8b944ba6_0;
extern const VlUnpacked<CData/*0:0*/, 2048> Vcpu__ConstPool__TABLE_h208bbd95_0;

VL_ATTR_COLD void Vcpu___024root___settle__TOP__0(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___settle__TOP__0\n"); );
    // Init
    SData/*10:0*/ __Vtableidx1;
    // Body
    vlSelf->a0 = vlSelf->cpu__DOT__alu__DOT__register__DOT__reg_array
        [0xaU];
    vlSelf->cpu__DOT__Instr = ((vlSelf->cpu__DOT__control__DOT__InstrMem__DOT__rom_array
                                [(0xffU & ((IData)(3U) 
                                           + vlSelf->cpu__DOT____Vcellout__pc__pc_out))] 
                                << 0x18U) | ((0xff0000U 
                                              & (vlSelf->cpu__DOT__control__DOT__InstrMem__DOT__rom_array
                                                 [(0xffU 
                                                   & ((IData)(2U) 
                                                      + vlSelf->cpu__DOT____Vcellout__pc__pc_out))] 
                                                 << 0x10U)) 
                                             | ((0xff00U 
                                                 & (vlSelf->cpu__DOT__control__DOT__InstrMem__DOT__rom_array
                                                    [
                                                    (0xffU 
                                                     & ((IData)(1U) 
                                                        + vlSelf->cpu__DOT____Vcellout__pc__pc_out))] 
                                                    << 8U)) 
                                                | (0xffU 
                                                   & vlSelf->cpu__DOT__control__DOT__InstrMem__DOT__rom_array
                                                   [
                                                   (0xffU 
                                                    & vlSelf->cpu__DOT____Vcellout__pc__pc_out)]))));
    vlSelf->cpu__DOT__alu__DOT__regOp2 = vlSelf->cpu__DOT__alu__DOT__register__DOT__reg_array
        [(0x1fU & (vlSelf->cpu__DOT__Instr >> 0x14U))];
    vlSelf->cpu__DOT__alu__DOT__SrcA = vlSelf->cpu__DOT__alu__DOT__register__DOT__reg_array
        [(0x1fU & (vlSelf->cpu__DOT__Instr >> 0xfU))];
    __Vtableidx1 = (((vlSelf->cpu__DOT__alu__DOT__SrcA 
                      == vlSelf->cpu__DOT__alu__DOT__SrcB) 
                     << 0xaU) | ((0x380U & (vlSelf->cpu__DOT__Instr 
                                            >> 5U)) 
                                 | (0x7fU & vlSelf->cpu__DOT__Instr)));
    if ((1U & Vcpu__ConstPool__TABLE_h8ce1d139_0[__Vtableidx1])) {
        vlSelf->cpu__DOT__RegWrite = Vcpu__ConstPool__TABLE_h0638d652_0
            [__Vtableidx1];
    }
    if ((2U & Vcpu__ConstPool__TABLE_h8ce1d139_0[__Vtableidx1])) {
        vlSelf->cpu__DOT__Resultsrc = Vcpu__ConstPool__TABLE_h451fada2_0
            [__Vtableidx1];
    }
    if ((4U & Vcpu__ConstPool__TABLE_h8ce1d139_0[__Vtableidx1])) {
        vlSelf->cpu__DOT__ALUctrl = Vcpu__ConstPool__TABLE_h86cc9c99_0
            [__Vtableidx1];
    }
    if ((8U & Vcpu__ConstPool__TABLE_h8ce1d139_0[__Vtableidx1])) {
        vlSelf->cpu__DOT__ALUsrc = Vcpu__ConstPool__TABLE_h3793b81c_0
            [__Vtableidx1];
    }
    if ((0x10U & Vcpu__ConstPool__TABLE_h8ce1d139_0
         [__Vtableidx1])) {
        vlSelf->cpu__DOT__control__DOT__ImmSrc = Vcpu__ConstPool__TABLE_hf7e03d3b_0
            [__Vtableidx1];
    }
    if ((0x20U & Vcpu__ConstPool__TABLE_h8ce1d139_0
         [__Vtableidx1])) {
        vlSelf->cpu__DOT__PCsrc = Vcpu__ConstPool__TABLE_h8b944ba6_0
            [__Vtableidx1];
    }
    if ((0x40U & Vcpu__ConstPool__TABLE_h8ce1d139_0
         [__Vtableidx1])) {
        vlSelf->cpu__DOT__MemWrite = Vcpu__ConstPool__TABLE_h208bbd95_0
            [__Vtableidx1];
    }
    vlSelf->cpu__DOT__alu__DOT__ALUResult_o = ((4U 
                                                & (IData)(vlSelf->cpu__DOT__ALUctrl))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlSelf->cpu__DOT__ALUctrl))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->cpu__DOT__ALUctrl))
                                                     ? vlSelf->cpu__DOT__alu__DOT__SrcA
                                                     : 
                                                    (vlSelf->cpu__DOT__alu__DOT__SrcA 
                                                     >> 
                                                     (0x1fU 
                                                      & vlSelf->cpu__DOT__alu__DOT__SrcB)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->cpu__DOT__ALUctrl))
                                                     ? 
                                                    (vlSelf->cpu__DOT__alu__DOT__SrcA 
                                                     << 
                                                     (0x1fU 
                                                      & vlSelf->cpu__DOT__alu__DOT__SrcB))
                                                     : 
                                                    (vlSelf->cpu__DOT__alu__DOT__SrcA 
                                                     ^ vlSelf->cpu__DOT__alu__DOT__SrcB)))
                                                : (
                                                   (2U 
                                                    & (IData)(vlSelf->cpu__DOT__ALUctrl))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->cpu__DOT__ALUctrl))
                                                     ? 
                                                    (vlSelf->cpu__DOT__alu__DOT__SrcA 
                                                     | vlSelf->cpu__DOT__alu__DOT__SrcB)
                                                     : 
                                                    (vlSelf->cpu__DOT__alu__DOT__SrcA 
                                                     & vlSelf->cpu__DOT__alu__DOT__SrcB))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->cpu__DOT__ALUctrl))
                                                     ? 
                                                    (vlSelf->cpu__DOT__alu__DOT__SrcA 
                                                     - vlSelf->cpu__DOT__alu__DOT__SrcB)
                                                     : 
                                                    (vlSelf->cpu__DOT__alu__DOT__SrcA 
                                                     + vlSelf->cpu__DOT__alu__DOT__SrcB))));
    vlSelf->cpu__DOT__ImmOp = ((1U == (IData)(vlSelf->cpu__DOT__control__DOT__ImmSrc))
                                ? (((- (IData)((vlSelf->cpu__DOT__Instr 
                                                >> 0x1fU))) 
                                    << 0xcU) | (vlSelf->cpu__DOT__Instr 
                                                >> 0x14U))
                                : ((3U == (IData)(vlSelf->cpu__DOT__control__DOT__ImmSrc))
                                    ? (((- (IData)(
                                                   (vlSelf->cpu__DOT__Instr 
                                                    >> 0x1fU))) 
                                        << 0xcU) | 
                                       ((0x800U & (vlSelf->cpu__DOT__Instr 
                                                   << 4U)) 
                                        | ((0x7e0U 
                                            & (vlSelf->cpu__DOT__Instr 
                                               >> 0x14U)) 
                                           | (0x1eU 
                                              & (vlSelf->cpu__DOT__Instr 
                                                 >> 7U)))))
                                    : ((2U == (IData)(vlSelf->cpu__DOT__control__DOT__ImmSrc))
                                        ? (((- (IData)(
                                                       (vlSelf->cpu__DOT__Instr 
                                                        >> 0x1fU))) 
                                            << 0x14U) 
                                           | ((0xff000U 
                                               & vlSelf->cpu__DOT__Instr) 
                                              | ((0x800U 
                                                  & (vlSelf->cpu__DOT__Instr 
                                                     >> 9U)) 
                                                 | (0x7feU 
                                                    & (vlSelf->cpu__DOT__Instr 
                                                       >> 0x14U)))))
                                        : 0U)));
    vlSelf->cpu__DOT__alu__DOT__SrcB = ((IData)(vlSelf->cpu__DOT__ALUsrc)
                                         ? vlSelf->cpu__DOT__ImmOp
                                         : vlSelf->cpu__DOT__alu__DOT__regOp2);
    vlSelf->cpu__DOT__pc__DOT__next_PC = ((2U & (IData)(vlSelf->cpu__DOT__PCsrc))
                                           ? ((1U & (IData)(vlSelf->cpu__DOT__PCsrc))
                                               ? vlSelf->cpu__DOT__pc__DOT__pc_mux__DOT__input3
                                               : ((2U 
                                                   & (IData)(vlSelf->cpu__DOT__Resultsrc))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->cpu__DOT__Resultsrc))
                                                    ? vlSelf->cpu__DOT__alu__DOT__resultMux__DOT__input3
                                                    : 
                                                   ((IData)(4U) 
                                                    + vlSelf->cpu__DOT__pc__DOT__PC))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->cpu__DOT__Resultsrc))
                                                    ? vlSelf->cpu__DOT__alu__DOT__ALUResult_o
                                                    : 
                                                   vlSelf->cpu__DOT__alu__DOT__data__DOT__data_mem_register
                                                   [
                                                   (0xffU 
                                                    & vlSelf->cpu__DOT__alu__DOT__ALUResult_o)])))
                                           : ((1U & (IData)(vlSelf->cpu__DOT__PCsrc))
                                               ? (vlSelf->cpu__DOT__pc__DOT__PC 
                                                  + vlSelf->cpu__DOT__ImmOp)
                                               : ((IData)(4U) 
                                                  + vlSelf->cpu__DOT__pc__DOT__PC)));
}

VL_ATTR_COLD void Vcpu___024root___eval_initial(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_initial\n"); );
    // Body
    Vcpu___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vcpu___024root___eval_settle(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_settle\n"); );
    // Body
    Vcpu___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vcpu___024root___final(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___final\n"); );
}

VL_ATTR_COLD void Vcpu___024root___ctor_var_reset(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->a0 = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__RegWrite = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__MemWrite = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__Instr = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__ALUctrl = VL_RAND_RESET_I(3);
    vlSelf->cpu__DOT__ALUsrc = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__Resultsrc = VL_RAND_RESET_I(2);
    vlSelf->cpu__DOT__ImmOp = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__PCsrc = VL_RAND_RESET_I(2);
    vlSelf->cpu__DOT____Vcellout__pc__pc_out = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__pc__DOT__next_PC = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__pc__DOT__PC = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__pc__DOT__pc_mux__DOT__input3 = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__control__DOT__ImmSrc = VL_RAND_RESET_I(2);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->cpu__DOT__control__DOT__InstrMem__DOT__rom_array[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->cpu__DOT__alu__DOT__ALUResult_o = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__alu__DOT__SrcA = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__alu__DOT__SrcB = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__alu__DOT__regOp2 = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->cpu__DOT__alu__DOT__register__DOT__reg_array[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->cpu__DOT__alu__DOT__data__DOT__data_mem_register[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->cpu__DOT__alu__DOT__resultMux__DOT__input3 = VL_RAND_RESET_I(32);
    vlSelf->__Vchglast__TOP__cpu__DOT__alu__DOT__SrcB = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
