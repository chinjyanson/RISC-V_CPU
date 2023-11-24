// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPCtop.h for the primary calling header

#include "verilated.h"

#include "VPCtop___024root.h"

VL_ATTR_COLD void VPCtop___024root___settle__TOP__0(VPCtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPCtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPCtop___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->PC = (0xfffU & vlSelf->PCtop__DOT____Vcellout__PC_Reg__PC);
}

VL_ATTR_COLD void VPCtop___024root___eval_initial(VPCtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPCtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPCtop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void VPCtop___024root___eval_settle(VPCtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPCtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPCtop___024root___eval_settle\n"); );
    // Body
    VPCtop___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void VPCtop___024root___final(VPCtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPCtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPCtop___024root___final\n"); );
}

VL_ATTR_COLD void VPCtop___024root___ctor_var_reset(VPCtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPCtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPCtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->ImmOp = VL_RAND_RESET_I(12);
    vlSelf->PCsrc = VL_RAND_RESET_I(1);
    vlSelf->PC = VL_RAND_RESET_I(12);
    vlSelf->PCtop__DOT____Vcellout__PC_Reg__PC = VL_RAND_RESET_I(32);
}
