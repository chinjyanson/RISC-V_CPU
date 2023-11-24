// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPCtop.h for the primary calling header

#include "verilated.h"

#include "VPCtop___024root.h"

VL_INLINE_OPT void VPCtop___024root___sequent__TOP__0(VPCtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPCtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPCtop___024root___sequent__TOP__0\n"); );
    // Body
    vlSelf->PCtop__DOT____Vcellout__PC_Reg__PC = ((IData)(vlSelf->rst)
                                                   ? 0U
                                                   : 
                                                  (0xfffU 
                                                   & ((IData)(vlSelf->PCsrc)
                                                       ? 
                                                      ((IData)(vlSelf->PC) 
                                                       + (IData)(vlSelf->ImmOp))
                                                       : 
                                                      ((IData)(4U) 
                                                       + (IData)(vlSelf->PC)))));
    vlSelf->PC = (0xfffU & vlSelf->PCtop__DOT____Vcellout__PC_Reg__PC);
}

void VPCtop___024root___eval(VPCtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPCtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPCtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        VPCtop___024root___sequent__TOP__0(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void VPCtop___024root___eval_debug_assertions(VPCtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPCtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPCtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->ImmOp & 0xf000U))) {
        Verilated::overWidthError("ImmOp");}
    if (VL_UNLIKELY((vlSelf->PCsrc & 0xfeU))) {
        Verilated::overWidthError("PCsrc");}
}
#endif  // VL_DEBUG
