// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPCtop__Syms.h"


void VPCtop___024root__trace_chg_sub_0(VPCtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VPCtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPCtop___024root__trace_chg_top_0\n"); );
    // Init
    VPCtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPCtop___024root*>(voidSelf);
    VPCtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VPCtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VPCtop___024root__trace_chg_sub_0(VPCtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VPCtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPCtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->clk));
    bufp->chgBit(oldp+1,(vlSelf->rst));
    bufp->chgSData(oldp+2,(vlSelf->ImmOp),12);
    bufp->chgBit(oldp+3,(vlSelf->PCsrc));
    bufp->chgSData(oldp+4,(vlSelf->PC),12);
    bufp->chgSData(oldp+5,((0xfffU & ((IData)(vlSelf->PCsrc)
                                       ? ((IData)(vlSelf->PC) 
                                          + (IData)(vlSelf->ImmOp))
                                       : ((IData)(4U) 
                                          + (IData)(vlSelf->PC))))),12);
    bufp->chgIData(oldp+6,((0xfffU & ((IData)(vlSelf->PCsrc)
                                       ? ((IData)(vlSelf->PC) 
                                          + (IData)(vlSelf->ImmOp))
                                       : ((IData)(4U) 
                                          + (IData)(vlSelf->PC))))),32);
    bufp->chgIData(oldp+7,(vlSelf->PCtop__DOT____Vcellout__PC_Reg__PC),32);
    bufp->chgSData(oldp+8,((0xfffU & ((IData)(vlSelf->PC) 
                                      + (IData)(vlSelf->ImmOp)))),12);
    bufp->chgSData(oldp+9,((0xfffU & ((IData)(4U) + (IData)(vlSelf->PC)))),12);
}

void VPCtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPCtop___024root__trace_cleanup\n"); );
    // Init
    VPCtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPCtop___024root*>(voidSelf);
    VPCtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
