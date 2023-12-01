// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcontrol_top__Syms.h"


VL_ATTR_COLD void Vcontrol_top___024root__trace_init_sub__TOP__0(Vcontrol_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_top___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+4,"PC_i", false,-1, 31,0);
    tracep->declBit(c+5,"Zero_i", false,-1);
    tracep->declBus(c+6,"instr_o", false,-1, 31,0);
    tracep->declBit(c+7,"RegWrite_o", false,-1);
    tracep->declBit(c+8,"MemWrite_o", false,-1);
    tracep->declBus(c+9,"Resultsrc_o", false,-1, 2,0);
    tracep->declBus(c+10,"ALUctrl_o", false,-1, 2,0);
    tracep->declBit(c+11,"ALUsrc_o", false,-1);
    tracep->declBit(c+12,"PCsrc_o", false,-1);
    tracep->declBus(c+13,"ImmOp_o", false,-1, 31,0);
    tracep->pushNamePrefix("control_top ");
    tracep->declBus(c+17,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+18,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+19,"CONTROL_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4,"PC_i", false,-1, 31,0);
    tracep->declBit(c+5,"Zero_i", false,-1);
    tracep->declBus(c+6,"instr_o", false,-1, 31,0);
    tracep->declBit(c+7,"RegWrite_o", false,-1);
    tracep->declBit(c+8,"MemWrite_o", false,-1);
    tracep->declBus(c+9,"Resultsrc_o", false,-1, 2,0);
    tracep->declBus(c+10,"ALUctrl_o", false,-1, 2,0);
    tracep->declBit(c+11,"ALUsrc_o", false,-1);
    tracep->declBit(c+12,"PCsrc_o", false,-1);
    tracep->declBus(c+13,"ImmOp_o", false,-1, 31,0);
    tracep->declBus(c+1,"ImmSrc", false,-1, 1,0);
    tracep->pushNamePrefix("ControlUnit ");
    tracep->declBus(c+18,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+19,"CONTROL_WIDTH", false,-1, 31,0);
    tracep->declBus(c+20,"IMM_WIDTH", false,-1, 31,0);
    tracep->declBit(c+5,"Zero_i", false,-1);
    tracep->declBus(c+6,"instr_i", false,-1, 31,0);
    tracep->declBit(c+7,"RegWrite_o", false,-1);
    tracep->declBit(c+8,"MemWrite_o", false,-1);
    tracep->declBus(c+2,"Resultsrc_o", false,-1, 1,0);
    tracep->declBus(c+10,"ALUctrl_o", false,-1, 2,0);
    tracep->declBit(c+11,"ALUsrc_o", false,-1);
    tracep->declBus(c+1,"ImmSrc_o", false,-1, 1,0);
    tracep->declBus(c+3,"PCsrc_o", false,-1, 1,0);
    tracep->declBus(c+14,"opcode", false,-1, 6,0);
    tracep->declBus(c+15,"funct3", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("InstrMem ");
    tracep->declBus(c+17,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+18,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+16,"addr_i", false,-1, 7,0);
    tracep->declBus(c+6,"Instr_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MySignExtend ");
    tracep->declBus(c+18,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+20,"IMM_WIDTH", false,-1, 31,0);
    tracep->declBus(c+6,"instr_i", false,-1, 31,0);
    tracep->declBus(c+1,"ImmSrc_i", false,-1, 1,0);
    tracep->declBus(c+13,"ImmOp_o", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vcontrol_top___024root__trace_init_top(Vcontrol_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_top___024root__trace_init_top\n"); );
    // Body
    Vcontrol_top___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vcontrol_top___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcontrol_top___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcontrol_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vcontrol_top___024root__trace_register(Vcontrol_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_top___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vcontrol_top___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vcontrol_top___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vcontrol_top___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vcontrol_top___024root__trace_full_sub_0(Vcontrol_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vcontrol_top___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_top___024root__trace_full_top_0\n"); );
    // Init
    Vcontrol_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcontrol_top___024root*>(voidSelf);
    Vcontrol_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vcontrol_top___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcontrol_top___024root__trace_full_sub_0(Vcontrol_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_top___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->control_top__DOT__ImmSrc),2);
    bufp->fullCData(oldp+2,(vlSelf->control_top__DOT____Vcellout__ControlUnit__Resultsrc_o),2);
    bufp->fullCData(oldp+3,(vlSelf->control_top__DOT____Vcellout__ControlUnit__PCsrc_o),2);
    bufp->fullIData(oldp+4,(vlSelf->PC_i),32);
    bufp->fullBit(oldp+5,(vlSelf->Zero_i));
    bufp->fullIData(oldp+6,(vlSelf->instr_o),32);
    bufp->fullBit(oldp+7,(vlSelf->RegWrite_o));
    bufp->fullBit(oldp+8,(vlSelf->MemWrite_o));
    bufp->fullCData(oldp+9,(vlSelf->Resultsrc_o),3);
    bufp->fullCData(oldp+10,(vlSelf->ALUctrl_o),3);
    bufp->fullBit(oldp+11,(vlSelf->ALUsrc_o));
    bufp->fullBit(oldp+12,(vlSelf->PCsrc_o));
    bufp->fullIData(oldp+13,(vlSelf->ImmOp_o),32);
    bufp->fullCData(oldp+14,((0x7fU & vlSelf->instr_o)),7);
    bufp->fullCData(oldp+15,((7U & (vlSelf->instr_o 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+16,((0xffU & vlSelf->PC_i)),8);
    bufp->fullIData(oldp+17,(8U),32);
    bufp->fullIData(oldp+18,(0x20U),32);
    bufp->fullIData(oldp+19,(3U),32);
    bufp->fullIData(oldp+20,(2U),32);
}
