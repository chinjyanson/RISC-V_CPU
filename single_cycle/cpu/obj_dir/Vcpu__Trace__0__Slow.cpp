// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcpu__Syms.h"


VL_ATTR_COLD void Vcpu___024root__trace_init_sub__TOP__0(Vcpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+36,"clk", false,-1);
    tracep->declBit(c+37,"rst", false,-1);
    tracep->declBus(c+38,"a0", false,-1, 31,0);
    tracep->pushNamePrefix("cpu ");
    tracep->declBus(c+43,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+44,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+45,"CONTROL_WIDTH", false,-1, 31,0);
    tracep->declBus(c+46,"IMM_WIDTH", false,-1, 31,0);
    tracep->declBit(c+36,"clk", false,-1);
    tracep->declBit(c+37,"rst", false,-1);
    tracep->declBus(c+38,"a0", false,-1, 31,0);
    tracep->declBit(c+20,"RegWrite", false,-1);
    tracep->declBit(c+21,"MemWrite", false,-1);
    tracep->declBus(c+1,"Instr", false,-1, 31,0);
    tracep->declBit(c+47,"EQ", false,-1);
    tracep->declBus(c+22,"ALUResult", false,-1, 7,0);
    tracep->declBus(c+23,"ALUctrl", false,-1, 2,0);
    tracep->declBit(c+24,"ALUsrc", false,-1);
    tracep->declBit(c+39,"Zero", false,-1);
    tracep->declBus(c+25,"Resultsrc", false,-1, 1,0);
    tracep->declBus(c+26,"ImmOp", false,-1, 31,0);
    tracep->declBus(c+27,"PCsrc", false,-1, 1,0);
    tracep->declBus(c+2,"PC", false,-1, 7,0);
    tracep->declBus(c+3,"PCPlus4", false,-1, 7,0);
    tracep->pushNamePrefix("alu ");
    tracep->declBus(c+45,"CONTROL_WIDTH", false,-1, 31,0);
    tracep->declBus(c+44,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+36,"clk", false,-1);
    tracep->declBit(c+24,"ALUsrc_i", false,-1);
    tracep->declBus(c+23,"ALUctrl_i", false,-1, 2,0);
    tracep->declBus(c+1,"Instr_i", false,-1, 31,0);
    tracep->declBit(c+20,"RegWrite_i", false,-1);
    tracep->declBus(c+25,"ResultSrc_i", false,-1, 1,0);
    tracep->declBit(c+21,"MemWrite_i", false,-1);
    tracep->declBus(c+26,"ImmOp_i", false,-1, 31,0);
    tracep->declBit(c+4,"PCPlus4_i", false,-1);
    tracep->declBit(c+39,"Zero_o", false,-1);
    tracep->declBus(c+38,"a0", false,-1, 31,0);
    tracep->declBus(c+40,"Result_o", false,-1, 31,0);
    tracep->declBus(c+28,"ALUResult_o", false,-1, 31,0);
    tracep->declBus(c+5,"SrcA", false,-1, 31,0);
    tracep->declBus(c+29,"SrcB", false,-1, 31,0);
    tracep->declBus(c+6,"regOp2", false,-1, 31,0);
    tracep->declBus(c+41,"ReadData", false,-1, 31,0);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+45,"CONTROL_WIDTH", false,-1, 31,0);
    tracep->declBus(c+44,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+23,"ALUctrl", false,-1, 2,0);
    tracep->declBus(c+5,"SrcA", false,-1, 31,0);
    tracep->declBus(c+29,"SrcB", false,-1, 31,0);
    tracep->declBus(c+28,"ALUResult", false,-1, 31,0);
    tracep->declBit(c+39,"Zero", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALUMux ");
    tracep->declBus(c+44,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+24,"control", false,-1);
    tracep->declBus(c+6,"input0", false,-1, 31,0);
    tracep->declBus(c+26,"input1", false,-1, 31,0);
    tracep->declBus(c+29,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("data ");
    tracep->declBus(c+43,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+44,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+36,"clk", false,-1);
    tracep->declBit(c+21,"WE", false,-1);
    tracep->declBus(c+22,"A", false,-1, 7,0);
    tracep->declBus(c+6,"WD", false,-1, 31,0);
    tracep->declBus(c+41,"RD", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("register ");
    tracep->declBus(c+43,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+44,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+36,"clk", false,-1);
    tracep->declBit(c+20,"WE3", false,-1);
    tracep->declBus(c+28,"WD3", false,-1, 31,0);
    tracep->declBus(c+1,"Instr", false,-1, 31,0);
    tracep->declBus(c+5,"RD1", false,-1, 31,0);
    tracep->declBus(c+6,"RD2", false,-1, 31,0);
    tracep->declBus(c+38,"a0", false,-1, 31,0);
    tracep->declBus(c+7,"A2", false,-1, 4,0);
    tracep->declBus(c+8,"A1", false,-1, 4,0);
    tracep->declBus(c+9,"A3", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("resultMux ");
    tracep->declBus(c+44,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+46,"CONTROL_WIDTH", false,-1, 31,0);
    tracep->declBus(c+25,"control", false,-1, 1,0);
    tracep->declBus(c+41,"input0", false,-1, 31,0);
    tracep->declBus(c+28,"input1", false,-1, 31,0);
    tracep->declBus(c+10,"input2", false,-1, 31,0);
    tracep->declBus(c+48,"input3", false,-1, 31,0);
    tracep->declBus(c+40,"out", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("control ");
    tracep->declBus(c+43,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+44,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+45,"CONTROL_WIDTH", false,-1, 31,0);
    tracep->declBus(c+46,"IMM_WIDTH", false,-1, 31,0);
    tracep->declBus(c+2,"PC_i", false,-1, 7,0);
    tracep->declBit(c+39,"Zero_i", false,-1);
    tracep->declBus(c+1,"instr_o", false,-1, 31,0);
    tracep->declBit(c+20,"RegWrite_o", false,-1);
    tracep->declBit(c+21,"MemWrite_o", false,-1);
    tracep->declBus(c+25,"Resultsrc_o", false,-1, 1,0);
    tracep->declBus(c+23,"ALUctrl_o", false,-1, 2,0);
    tracep->declBit(c+24,"ALUsrc_o", false,-1);
    tracep->declBus(c+27,"PCsrc_o", false,-1, 1,0);
    tracep->declBus(c+26,"ImmOp_o", false,-1, 31,0);
    tracep->declBus(c+30,"ImmSrc", false,-1, 1,0);
    tracep->pushNamePrefix("ControlUnit ");
    tracep->declBus(c+44,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+45,"CONTROL_WIDTH", false,-1, 31,0);
    tracep->declBus(c+46,"IMM_WIDTH", false,-1, 31,0);
    tracep->declBit(c+39,"Zero_i", false,-1);
    tracep->declBus(c+1,"instr_i", false,-1, 31,0);
    tracep->declBit(c+20,"RegWrite_o", false,-1);
    tracep->declBit(c+21,"MemWrite_o", false,-1);
    tracep->declBus(c+25,"Resultsrc_o", false,-1, 1,0);
    tracep->declBus(c+23,"ALUctrl_o", false,-1, 2,0);
    tracep->declBit(c+24,"ALUsrc_o", false,-1);
    tracep->declBus(c+30,"ImmSrc_o", false,-1, 1,0);
    tracep->declBus(c+27,"PCsrc_o", false,-1, 1,0);
    tracep->declBus(c+11,"opcode", false,-1, 6,0);
    tracep->declBus(c+12,"funct3", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("InstrMem ");
    tracep->declBus(c+43,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+44,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+2,"addr_i", false,-1, 7,0);
    tracep->declBus(c+1,"Instr_o", false,-1, 31,0);
    tracep->declBus(c+13,"rom_array0", false,-1, 7,0);
    tracep->declBus(c+14,"rom_array1", false,-1, 7,0);
    tracep->declBus(c+15,"rom_array2", false,-1, 7,0);
    tracep->declBus(c+16,"rom_array3", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MySignExtend ");
    tracep->declBus(c+44,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+46,"IMM_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1,"instr_i", false,-1, 31,0);
    tracep->declBus(c+30,"ImmSrc_i", false,-1, 1,0);
    tracep->declBus(c+26,"ImmOp_o", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("pc ");
    tracep->declBus(c+44,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+36,"clk", false,-1);
    tracep->declBit(c+37,"rst", false,-1);
    tracep->declBit(c+31,"ALUResult_i", false,-1);
    tracep->declBus(c+26,"ImmOp_i", false,-1, 31,0);
    tracep->declBit(c+32,"PCsrc_i", false,-1);
    tracep->declBus(c+17,"pc_out", false,-1, 31,0);
    tracep->declBus(c+18,"PCPlus4_o", false,-1, 31,0);
    tracep->declBus(c+33,"next_PC", false,-1, 31,0);
    tracep->declBus(c+19,"PC", false,-1, 31,0);
    tracep->declBus(c+42,"PCTarget", false,-1, 31,0);
    tracep->pushNamePrefix("pc_mux ");
    tracep->declBus(c+44,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+46,"CONTROL_WIDTH", false,-1, 31,0);
    tracep->declBus(c+34,"control", false,-1, 1,0);
    tracep->declBus(c+18,"input0", false,-1, 31,0);
    tracep->declBus(c+42,"input1", false,-1, 31,0);
    tracep->declBus(c+35,"input2", false,-1, 31,0);
    tracep->declBus(c+49,"input3", false,-1, 31,0);
    tracep->declBus(c+33,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_reg ");
    tracep->declBus(c+44,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+36,"clk", false,-1);
    tracep->declBit(c+37,"rst", false,-1);
    tracep->declBus(c+33,"next_PC", false,-1, 31,0);
    tracep->declBus(c+19,"pc", false,-1, 31,0);
    tracep->declBus(c+17,"another_pc", false,-1, 31,0);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vcpu___024root__trace_init_top(Vcpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_init_top\n"); );
    // Body
    Vcpu___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vcpu___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcpu___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcpu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vcpu___024root__trace_register(Vcpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vcpu___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vcpu___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vcpu___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vcpu___024root__trace_full_sub_0(Vcpu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vcpu___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_full_top_0\n"); );
    // Init
    Vcpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcpu___024root*>(voidSelf);
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vcpu___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcpu___024root__trace_full_sub_0(Vcpu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->cpu__DOT__Instr),32);
    bufp->fullCData(oldp+2,((0xffU & vlSelf->cpu__DOT____Vcellout__pc__pc_out)),8);
    bufp->fullCData(oldp+3,((0xffU & ((IData)(4U) + vlSelf->cpu__DOT__pc__DOT__PC))),8);
    bufp->fullBit(oldp+4,((1U & vlSelf->cpu__DOT__pc__DOT__PC)));
    bufp->fullIData(oldp+5,(vlSelf->cpu__DOT__alu__DOT__SrcA),32);
    bufp->fullIData(oldp+6,(vlSelf->cpu__DOT__alu__DOT__regOp2),32);
    bufp->fullCData(oldp+7,((0x1fU & (vlSelf->cpu__DOT__Instr 
                                      >> 0x14U))),5);
    bufp->fullCData(oldp+8,((0x1fU & (vlSelf->cpu__DOT__Instr 
                                      >> 0xfU))),5);
    bufp->fullCData(oldp+9,((0x1fU & (vlSelf->cpu__DOT__Instr 
                                      >> 7U))),5);
    bufp->fullIData(oldp+10,((1U & vlSelf->cpu__DOT__pc__DOT__PC)),32);
    bufp->fullCData(oldp+11,((0x7fU & vlSelf->cpu__DOT__Instr)),7);
    bufp->fullCData(oldp+12,((7U & (vlSelf->cpu__DOT__Instr 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+13,((0xffU & vlSelf->cpu__DOT__control__DOT__InstrMem__DOT__rom_array
                              [(0xffU & vlSelf->cpu__DOT____Vcellout__pc__pc_out)])),8);
    bufp->fullCData(oldp+14,((0xffU & vlSelf->cpu__DOT__control__DOT__InstrMem__DOT__rom_array
                              [(0xffU & ((IData)(1U) 
                                         + vlSelf->cpu__DOT____Vcellout__pc__pc_out))])),8);
    bufp->fullCData(oldp+15,((0xffU & vlSelf->cpu__DOT__control__DOT__InstrMem__DOT__rom_array
                              [(0xffU & ((IData)(2U) 
                                         + vlSelf->cpu__DOT____Vcellout__pc__pc_out))])),8);
    bufp->fullCData(oldp+16,((0xffU & vlSelf->cpu__DOT__control__DOT__InstrMem__DOT__rom_array
                              [(0xffU & ((IData)(3U) 
                                         + vlSelf->cpu__DOT____Vcellout__pc__pc_out))])),8);
    bufp->fullIData(oldp+17,(vlSelf->cpu__DOT____Vcellout__pc__pc_out),32);
    bufp->fullIData(oldp+18,(((IData)(4U) + vlSelf->cpu__DOT__pc__DOT__PC)),32);
    bufp->fullIData(oldp+19,(vlSelf->cpu__DOT__pc__DOT__PC),32);
    bufp->fullBit(oldp+20,(vlSelf->cpu__DOT__RegWrite));
    bufp->fullBit(oldp+21,(vlSelf->cpu__DOT__MemWrite));
    bufp->fullCData(oldp+22,((0xffU & vlSelf->cpu__DOT____Vcellout__alu__ALUResult_o)),8);
    bufp->fullCData(oldp+23,(vlSelf->cpu__DOT__ALUctrl),3);
    bufp->fullBit(oldp+24,(vlSelf->cpu__DOT__ALUsrc));
    bufp->fullCData(oldp+25,(vlSelf->cpu__DOT__Resultsrc),2);
    bufp->fullIData(oldp+26,(vlSelf->cpu__DOT__ImmOp),32);
    bufp->fullCData(oldp+27,(vlSelf->cpu__DOT__PCsrc),2);
    bufp->fullIData(oldp+28,(vlSelf->cpu__DOT____Vcellout__alu__ALUResult_o),32);
    bufp->fullIData(oldp+29,(vlSelf->cpu__DOT__alu__DOT__SrcB),32);
    bufp->fullCData(oldp+30,(vlSelf->cpu__DOT__control__DOT__ImmSrc),2);
    bufp->fullBit(oldp+31,((1U & vlSelf->cpu__DOT____Vcellout__alu__ALUResult_o)));
    bufp->fullBit(oldp+32,((1U & (IData)(vlSelf->cpu__DOT__PCsrc))));
    bufp->fullIData(oldp+33,(vlSelf->cpu__DOT__pc__DOT__next_PC),32);
    bufp->fullCData(oldp+34,((1U & (IData)(vlSelf->cpu__DOT__PCsrc))),2);
    bufp->fullIData(oldp+35,((1U & vlSelf->cpu__DOT____Vcellout__alu__ALUResult_o)),32);
    bufp->fullBit(oldp+36,(vlSelf->clk));
    bufp->fullBit(oldp+37,(vlSelf->rst));
    bufp->fullIData(oldp+38,(vlSelf->a0),32);
    bufp->fullBit(oldp+39,((vlSelf->cpu__DOT__alu__DOT__SrcA 
                            == vlSelf->cpu__DOT__alu__DOT__SrcB)));
    bufp->fullIData(oldp+40,(((2U & (IData)(vlSelf->cpu__DOT__Resultsrc))
                               ? ((1U & (IData)(vlSelf->cpu__DOT__Resultsrc))
                                   ? vlSelf->cpu__DOT__alu__DOT__resultMux__DOT__input3
                                   : (1U & vlSelf->cpu__DOT__pc__DOT__PC))
                               : ((1U & (IData)(vlSelf->cpu__DOT__Resultsrc))
                                   ? vlSelf->cpu__DOT____Vcellout__alu__ALUResult_o
                                   : vlSelf->cpu__DOT__alu__DOT__data__DOT__data_mem_register
                                  [(0xffU & vlSelf->cpu__DOT____Vcellout__alu__ALUResult_o)]))),32);
    bufp->fullIData(oldp+41,(vlSelf->cpu__DOT__alu__DOT__data__DOT__data_mem_register
                             [(0xffU & vlSelf->cpu__DOT____Vcellout__alu__ALUResult_o)]),32);
    bufp->fullIData(oldp+42,((vlSelf->cpu__DOT__pc__DOT__PC 
                              + vlSelf->cpu__DOT__ImmOp)),32);
    bufp->fullIData(oldp+43,(8U),32);
    bufp->fullIData(oldp+44,(0x20U),32);
    bufp->fullIData(oldp+45,(3U),32);
    bufp->fullIData(oldp+46,(2U),32);
    bufp->fullBit(oldp+47,(vlSelf->cpu__DOT__EQ));
    bufp->fullIData(oldp+48,(vlSelf->cpu__DOT__alu__DOT__resultMux__DOT__input3),32);
    bufp->fullIData(oldp+49,(vlSelf->cpu__DOT__pc__DOT__pc_mux__DOT__input3),32);
}
