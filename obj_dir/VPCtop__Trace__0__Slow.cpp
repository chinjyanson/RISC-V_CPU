// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPCtop__Syms.h"


VL_ATTR_COLD void VPCtop___024root__trace_init_sub__TOP__0(VPCtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPCtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPCtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBus(c+3,"ImmOp", false,-1, 11,0);
    tracep->declBit(c+4,"PCsrc", false,-1);
    tracep->declBus(c+5,"PC", false,-1, 11,0);
    tracep->pushNamePrefix("PCtop ");
    tracep->declBus(c+11,"IMMOp_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBus(c+3,"ImmOp", false,-1, 11,0);
    tracep->declBit(c+4,"PCsrc", false,-1);
    tracep->declBus(c+5,"PC", false,-1, 11,0);
    tracep->declBus(c+6,"next_PC", false,-1, 11,0);
    tracep->pushNamePrefix("PC_Reg ");
    tracep->declBus(c+12,"PC_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBus(c+7,"next_PC", false,-1, 31,0);
    tracep->declBus(c+8,"PC", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PC_Select ");
    tracep->declBus(c+11,"next_PC_width", false,-1, 31,0);
    tracep->declBit(c+4,"PCsrc", false,-1);
    tracep->declBus(c+9,"branch_PC", false,-1, 11,0);
    tracep->declBus(c+10,"inc_PC", false,-1, 11,0);
    tracep->declBus(c+6,"next_PC", false,-1, 11,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VPCtop___024root__trace_init_top(VPCtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPCtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPCtop___024root__trace_init_top\n"); );
    // Body
    VPCtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VPCtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VPCtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VPCtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VPCtop___024root__trace_register(VPCtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPCtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPCtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VPCtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VPCtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VPCtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VPCtop___024root__trace_full_sub_0(VPCtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VPCtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPCtop___024root__trace_full_top_0\n"); );
    // Init
    VPCtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPCtop___024root*>(voidSelf);
    VPCtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VPCtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VPCtop___024root__trace_full_sub_0(VPCtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VPCtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPCtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->clk));
    bufp->fullBit(oldp+2,(vlSelf->rst));
    bufp->fullSData(oldp+3,(vlSelf->ImmOp),12);
    bufp->fullBit(oldp+4,(vlSelf->PCsrc));
    bufp->fullSData(oldp+5,(vlSelf->PC),12);
    bufp->fullSData(oldp+6,((0xfffU & ((IData)(vlSelf->PCsrc)
                                        ? ((IData)(vlSelf->PC) 
                                           + (IData)(vlSelf->ImmOp))
                                        : ((IData)(4U) 
                                           + (IData)(vlSelf->PC))))),12);
    bufp->fullIData(oldp+7,((0xfffU & ((IData)(vlSelf->PCsrc)
                                        ? ((IData)(vlSelf->PC) 
                                           + (IData)(vlSelf->ImmOp))
                                        : ((IData)(4U) 
                                           + (IData)(vlSelf->PC))))),32);
    bufp->fullIData(oldp+8,(vlSelf->PCtop__DOT____Vcellout__PC_Reg__PC),32);
    bufp->fullSData(oldp+9,((0xfffU & ((IData)(vlSelf->PC) 
                                       + (IData)(vlSelf->ImmOp)))),12);
    bufp->fullSData(oldp+10,((0xfffU & ((IData)(4U) 
                                        + (IData)(vlSelf->PC)))),12);
    bufp->fullIData(oldp+11,(0xcU),32);
    bufp->fullIData(oldp+12,(0x20U),32);
}
