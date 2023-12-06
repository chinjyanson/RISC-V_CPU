// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu.h for the primary calling header

#include "verilated.h"

#include "Vcpu___024root.h"

VL_INLINE_OPT void Vcpu___024root___sequent__TOP__0(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vdlyvdim0__cpu__DOT__alu__DOT__register__DOT__reg_array__v0;
    IData/*31:0*/ __Vdlyvval__cpu__DOT__alu__DOT__register__DOT__reg_array__v0;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__alu__DOT__register__DOT__reg_array__v0;
    CData/*7:0*/ __Vdlyvdim0__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v0;
    IData/*31:0*/ __Vdlyvval__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v0;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v0;
    // Body
    __Vdlyvset__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v0 = 0U;
    __Vdlyvset__cpu__DOT__alu__DOT__register__DOT__reg_array__v0 = 0U;
    if (vlSelf->cpu__DOT__MemWrite) {
        __Vdlyvval__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v0 
            = vlSelf->cpu__DOT__alu__DOT__regOp2;
        __Vdlyvset__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v0 = 1U;
        __Vdlyvdim0__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v0 
            = (0xffU & vlSelf->cpu__DOT__ALUResult_o);
    }
    vlSelf->cpu__DOT____Vcellout__pc__pc_out = vlSelf->cpu__DOT__pc__DOT__next_PC;
    if (((IData)(vlSelf->cpu__DOT__RegWrite) & (0U 
                                                != 
                                                (0x1fU 
                                                 & (vlSelf->cpu__DOT__Instr 
                                                    >> 7U))))) {
        __Vdlyvval__cpu__DOT__alu__DOT__register__DOT__reg_array__v0 
            = ((2U & (IData)(vlSelf->cpu__DOT__Resultsrc))
                ? ((1U & (IData)(vlSelf->cpu__DOT__Resultsrc))
                    ? vlSelf->cpu__DOT__alu__DOT__resultMux__DOT__input3
                    : ((IData)(4U) + vlSelf->cpu__DOT__pc__DOT__PC))
                : ((1U & (IData)(vlSelf->cpu__DOT__Resultsrc))
                    ? vlSelf->cpu__DOT__alu__DOT__data__DOT__data_mem_register
                   [(0xffU & vlSelf->cpu__DOT__ALUResult_o)]
                    : vlSelf->cpu__DOT__ALUResult_o));
        __Vdlyvset__cpu__DOT__alu__DOT__register__DOT__reg_array__v0 = 1U;
        __Vdlyvdim0__cpu__DOT__alu__DOT__register__DOT__reg_array__v0 
            = (0x1fU & (vlSelf->cpu__DOT__Instr >> 7U));
    }
    if (__Vdlyvset__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v0) {
        vlSelf->cpu__DOT__alu__DOT__data__DOT__data_mem_register[__Vdlyvdim0__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v0] 
            = __Vdlyvval__cpu__DOT__alu__DOT__data__DOT__data_mem_register__v0;
    }
    if (__Vdlyvset__cpu__DOT__alu__DOT__register__DOT__reg_array__v0) {
        vlSelf->cpu__DOT__alu__DOT__register__DOT__reg_array[__Vdlyvdim0__cpu__DOT__alu__DOT__register__DOT__reg_array__v0] 
            = __Vdlyvval__cpu__DOT__alu__DOT__register__DOT__reg_array__v0;
    }
    vlSelf->cpu__DOT__Instr = ((vlSelf->cpu__DOT__control__DOT__InstrMem__DOT__rom_array
                                [(0xffU & ((IData)(3U) 
                                           + vlSelf->cpu__DOT____Vcellout__pc__pc_out))] 
                                << 0x18U) | ((vlSelf->cpu__DOT__control__DOT__InstrMem__DOT__rom_array
                                              [(0xffU 
                                                & ((IData)(2U) 
                                                   + vlSelf->cpu__DOT____Vcellout__pc__pc_out))] 
                                              << 0x10U) 
                                             | ((vlSelf->cpu__DOT__control__DOT__InstrMem__DOT__rom_array
                                                 [(0xffU 
                                                   & ((IData)(1U) 
                                                      + vlSelf->cpu__DOT____Vcellout__pc__pc_out))] 
                                                 << 8U) 
                                                | vlSelf->cpu__DOT__control__DOT__InstrMem__DOT__rom_array
                                                [(0xffU 
                                                  & vlSelf->cpu__DOT____Vcellout__pc__pc_out)])));
    vlSelf->cpu__DOT__pc__DOT__PC = ((IData)(vlSelf->rst)
                                      ? 0U : vlSelf->cpu__DOT__pc__DOT__next_PC);
    vlSelf->a0 = vlSelf->cpu__DOT__alu__DOT__register__DOT__reg_array
        [0xbU];
    vlSelf->cpu__DOT__alu__DOT__regOp2 = vlSelf->cpu__DOT__alu__DOT__register__DOT__reg_array
        [(0x1fU & (vlSelf->cpu__DOT__Instr >> 0x14U))];
    vlSelf->cpu__DOT__alu__DOT__SrcA = vlSelf->cpu__DOT__alu__DOT__register__DOT__reg_array
        [(0x1fU & (vlSelf->cpu__DOT__Instr >> 0xfU))];
}

extern const VlUnpacked<CData/*6:0*/, 2048> Vcpu__ConstPool__TABLE_h8ce1d139_0;
extern const VlUnpacked<CData/*0:0*/, 2048> Vcpu__ConstPool__TABLE_h0638d652_0;
extern const VlUnpacked<CData/*1:0*/, 2048> Vcpu__ConstPool__TABLE_h451fada2_0;
extern const VlUnpacked<CData/*2:0*/, 2048> Vcpu__ConstPool__TABLE_h86cc9c99_0;
extern const VlUnpacked<CData/*0:0*/, 2048> Vcpu__ConstPool__TABLE_h3793b81c_0;
extern const VlUnpacked<CData/*1:0*/, 2048> Vcpu__ConstPool__TABLE_hf7e03d3b_0;
extern const VlUnpacked<CData/*1:0*/, 2048> Vcpu__ConstPool__TABLE_h8b944ba6_0;
extern const VlUnpacked<CData/*0:0*/, 2048> Vcpu__ConstPool__TABLE_h208bbd95_0;

VL_INLINE_OPT void Vcpu___024root___combo__TOP__0(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___combo__TOP__0\n"); );
    // Init
    SData/*10:0*/ __Vtableidx1;
    // Body
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
    vlSelf->cpu__DOT__ALUResult_o = ((4U & (IData)(vlSelf->cpu__DOT__ALUctrl))
                                      ? ((2U & (IData)(vlSelf->cpu__DOT__ALUctrl))
                                          ? ((1U & (IData)(vlSelf->cpu__DOT__ALUctrl))
                                              ? vlSelf->cpu__DOT__alu__DOT__SrcA
                                              : (vlSelf->cpu__DOT__alu__DOT__SrcA 
                                                 >> 
                                                 (0x1fU 
                                                  & vlSelf->cpu__DOT__alu__DOT__SrcB)))
                                          : ((1U & (IData)(vlSelf->cpu__DOT__ALUctrl))
                                              ? (vlSelf->cpu__DOT__alu__DOT__SrcA 
                                                 << 
                                                 (0x1fU 
                                                  & vlSelf->cpu__DOT__alu__DOT__SrcB))
                                              : (vlSelf->cpu__DOT__alu__DOT__SrcA 
                                                 ^ vlSelf->cpu__DOT__alu__DOT__SrcB)))
                                      : ((2U & (IData)(vlSelf->cpu__DOT__ALUctrl))
                                          ? ((1U & (IData)(vlSelf->cpu__DOT__ALUctrl))
                                              ? (vlSelf->cpu__DOT__alu__DOT__SrcA 
                                                 | vlSelf->cpu__DOT__alu__DOT__SrcB)
                                              : (vlSelf->cpu__DOT__alu__DOT__SrcA 
                                                 & vlSelf->cpu__DOT__alu__DOT__SrcB))
                                          : ((1U & (IData)(vlSelf->cpu__DOT__ALUctrl))
                                              ? (vlSelf->cpu__DOT__alu__DOT__SrcA 
                                                 - vlSelf->cpu__DOT__alu__DOT__SrcB)
                                              : (vlSelf->cpu__DOT__alu__DOT__SrcA 
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
                                               : vlSelf->cpu__DOT__ALUResult_o)
                                           : ((1U & (IData)(vlSelf->cpu__DOT__PCsrc))
                                               ? (vlSelf->cpu__DOT__pc__DOT__PC 
                                                  + vlSelf->cpu__DOT__ImmOp)
                                               : ((IData)(4U) 
                                                  + vlSelf->cpu__DOT__pc__DOT__PC)));
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
    Vcpu___024root___combo__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData Vcpu___024root___change_request_1(Vcpu___024root* vlSelf);

VL_INLINE_OPT QData Vcpu___024root___change_request(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___change_request\n"); );
    // Body
    return (Vcpu___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vcpu___024root___change_request_1(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSelf->cpu__DOT__alu__DOT__SrcB ^ vlSelf->__Vchglast__TOP__cpu__DOT__alu__DOT__SrcB));
    VL_DEBUG_IF( if(__req && ((vlSelf->cpu__DOT__alu__DOT__SrcB ^ vlSelf->__Vchglast__TOP__cpu__DOT__alu__DOT__SrcB))) VL_DBG_MSGF("        CHANGE: alu_top.sv:21: cpu.alu.SrcB\n"); );
    // Final
    vlSelf->__Vchglast__TOP__cpu__DOT__alu__DOT__SrcB 
        = vlSelf->cpu__DOT__alu__DOT__SrcB;
    return __req;
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
