// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcpu__Syms.h"


//======================

void Vcpu::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vcpu::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vcpu__Syms* __restrict vlSymsp = static_cast<Vcpu__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vcpu::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vcpu::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vcpu__Syms* __restrict vlSymsp = static_cast<Vcpu__Syms*>(userp);
    Vcpu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vcpu::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vcpu__Syms* __restrict vlSymsp = static_cast<Vcpu__Syms*>(userp);
    Vcpu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+50,"clk", false,-1);
        tracep->declBit(c+51,"rst", false,-1);
        tracep->declBus(c+52,"a0", false,-1, 31,0);
        tracep->declBus(c+53,"instr2", false,-1, 31,0);
        tracep->declBus(c+54,"aluctrl2", false,-1, 2,0);
        tracep->declBus(c+55,"pc2", false,-1, 31,0);
        tracep->declBus(c+56,"cpu DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+50,"cpu clk", false,-1);
        tracep->declBit(c+51,"cpu rst", false,-1);
        tracep->declBus(c+52,"cpu a0", false,-1, 31,0);
        tracep->declBus(c+53,"cpu instr2", false,-1, 31,0);
        tracep->declBus(c+54,"cpu aluctrl2", false,-1, 2,0);
        tracep->declBus(c+55,"cpu pc2", false,-1, 31,0);
        tracep->declBit(c+1,"cpu RegWrite", false,-1);
        tracep->declBus(c+57,"cpu ALUctrl", false,-1, 2,0);
        tracep->declBit(c+1,"cpu ALUsrc", false,-1);
        tracep->declBit(c+2,"cpu PCsrc", false,-1);
        tracep->declBus(c+3,"cpu ImmOp", false,-1, 31,0);
        tracep->declBus(c+4,"cpu Instr", false,-1, 31,0);
        tracep->declBit(c+5,"cpu EQ", false,-1);
        tracep->declBus(c+6,"cpu PC", false,-1, 31,0);
        tracep->declBus(c+56,"cpu Myblue WIDTH", false,-1, 31,0);
        tracep->declBit(c+50,"cpu Myblue clk", false,-1);
        tracep->declBit(c+51,"cpu Myblue rst", false,-1);
        tracep->declBus(c+3,"cpu Myblue ImmOp", false,-1, 31,0);
        tracep->declBit(c+2,"cpu Myblue PCsrc", false,-1);
        tracep->declBus(c+55,"cpu Myblue pc_out2", false,-1, 31,0);
        tracep->declBus(c+6,"cpu Myblue pc_out", false,-1, 31,0);
        tracep->declBus(c+7,"cpu Myblue next_PC", false,-1, 31,0);
        tracep->declBus(c+8,"cpu Myblue pc", false,-1, 31,0);
        tracep->declBus(c+56,"cpu Myblue pc_mux WIDTH", false,-1, 31,0);
        tracep->declBit(c+2,"cpu Myblue pc_mux PCsrc", false,-1);
        tracep->declBus(c+8,"cpu Myblue pc_mux pc", false,-1, 31,0);
        tracep->declBus(c+3,"cpu Myblue pc_mux ImmOp", false,-1, 31,0);
        tracep->declBus(c+7,"cpu Myblue pc_mux next_PC", false,-1, 31,0);
        tracep->declBus(c+56,"cpu Myblue pc_reg WIDTH", false,-1, 31,0);
        tracep->declBit(c+50,"cpu Myblue pc_reg clk", false,-1);
        tracep->declBit(c+51,"cpu Myblue pc_reg rst", false,-1);
        tracep->declBus(c+7,"cpu Myblue pc_reg next_PC", false,-1, 31,0);
        tracep->declBus(c+8,"cpu Myblue pc_reg pc", false,-1, 31,0);
        tracep->declBus(c+55,"cpu Myblue pc_reg another_pc2", false,-1, 31,0);
        tracep->declBus(c+6,"cpu Myblue pc_reg another_pc", false,-1, 31,0);
        tracep->declBus(c+56,"cpu Mygreen DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+6,"cpu Mygreen PC", false,-1, 31,0);
        tracep->declBit(c+5,"cpu Mygreen EQ", false,-1);
        tracep->declBus(c+4,"cpu Mygreen instr", false,-1, 31,0);
        tracep->declBus(c+53,"cpu Mygreen instr2", false,-1, 31,0);
        tracep->declBit(c+1,"cpu Mygreen RegWrite", false,-1);
        tracep->declBus(c+57,"cpu Mygreen ALUctrl", false,-1, 2,0);
        tracep->declBit(c+1,"cpu Mygreen ALUsrc", false,-1);
        tracep->declBit(c+2,"cpu Mygreen PCsrc", false,-1);
        tracep->declBus(c+3,"cpu Mygreen ImmOp", false,-1, 31,0);
        tracep->declBus(c+9,"cpu Mygreen ImmSrc", false,-1, 1,0);
        tracep->declBus(c+56,"cpu Mygreen MyControlUnit DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+5,"cpu Mygreen MyControlUnit EQ", false,-1);
        tracep->declBus(c+4,"cpu Mygreen MyControlUnit instr", false,-1, 31,0);
        tracep->declBus(c+53,"cpu Mygreen MyControlUnit instr2", false,-1, 31,0);
        tracep->declBit(c+1,"cpu Mygreen MyControlUnit RegWrite", false,-1);
        tracep->declBus(c+57,"cpu Mygreen MyControlUnit ALUctrl", false,-1, 2,0);
        tracep->declBit(c+1,"cpu Mygreen MyControlUnit ALUsrc", false,-1);
        tracep->declBus(c+9,"cpu Mygreen MyControlUnit ImmSrc", false,-1, 1,0);
        tracep->declBit(c+2,"cpu Mygreen MyControlUnit PCsrc", false,-1);
        tracep->declBus(c+10,"cpu Mygreen MyControlUnit opcode", false,-1, 6,0);
        tracep->declBus(c+58,"cpu Mygreen MyInstrMem ADDRESS_WIDTH", false,-1, 31,0);
        tracep->declBus(c+56,"cpu Mygreen MyInstrMem DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+6,"cpu Mygreen MyInstrMem addr", false,-1, 31,0);
        tracep->declBus(c+4,"cpu Mygreen MyInstrMem dout", false,-1, 31,0);
        tracep->declBus(c+56,"cpu Mygreen MySignExtend DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+4,"cpu Mygreen MySignExtend instr", false,-1, 31,0);
        tracep->declBus(c+9,"cpu Mygreen MySignExtend ImmSrc", false,-1, 1,0);
        tracep->declBus(c+3,"cpu Mygreen MySignExtend ImmOp", false,-1, 31,0);
        tracep->declBus(c+56,"cpu Myred DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+50,"cpu Myred clk", false,-1);
        tracep->declBit(c+1,"cpu Myred ALUsrc", false,-1);
        tracep->declBus(c+57,"cpu Myred ALUctrl", false,-1, 2,0);
        tracep->declBus(c+4,"cpu Myred Instr", false,-1, 31,0);
        tracep->declBit(c+1,"cpu Myred RegWrite", false,-1);
        tracep->declBus(c+3,"cpu Myred ImmOp", false,-1, 31,0);
        tracep->declBit(c+5,"cpu Myred EQ", false,-1);
        tracep->declBus(c+54,"cpu Myred aluctrl2", false,-1, 2,0);
        tracep->declBus(c+52,"cpu Myred a0", false,-1, 31,0);
        tracep->declBus(c+11,"cpu Myred ALUout", false,-1, 31,0);
        tracep->declBus(c+12,"cpu Myred ALUop1", false,-1, 31,0);
        tracep->declBus(c+13,"cpu Myred ALUop2", false,-1, 31,0);
        tracep->declBus(c+14,"cpu Myred regOp2", false,-1, 31,0);
        tracep->declBus(c+59,"cpu Myred register ADDRESS_WIDTH", false,-1, 31,0);
        tracep->declBus(c+56,"cpu Myred register DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+50,"cpu Myred register clk", false,-1);
        tracep->declBit(c+1,"cpu Myred register WE3", false,-1);
        tracep->declBus(c+11,"cpu Myred register WD3", false,-1, 31,0);
        tracep->declBus(c+4,"cpu Myred register Instr", false,-1, 31,0);
        tracep->declBus(c+12,"cpu Myred register RD1", false,-1, 31,0);
        tracep->declBus(c+14,"cpu Myred register RD2", false,-1, 31,0);
        tracep->declBus(c+52,"cpu Myred register a0", false,-1, 31,0);
        tracep->declBus(c+15,"cpu Myred register rs2", false,-1, 4,0);
        tracep->declBus(c+16,"cpu Myred register rs1", false,-1, 4,0);
        tracep->declBus(c+17,"cpu Myred register rd", false,-1, 4,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declBus(c+18+i*1,"cpu Myred register reg_array", true,(i+0), 31,0);}}
        tracep->declBus(c+56,"cpu Myred ALUMux DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+14,"cpu Myred ALUMux regOp2", false,-1, 31,0);
        tracep->declBus(c+3,"cpu Myred ALUMux ImmOp", false,-1, 31,0);
        tracep->declBit(c+1,"cpu Myred ALUMux ALUsrc", false,-1);
        tracep->declBus(c+13,"cpu Myred ALUMux ALUop2", false,-1, 31,0);
        tracep->declBus(c+56,"cpu Myred ALU DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+57,"cpu Myred ALU ALUctrl", false,-1, 2,0);
        tracep->declBus(c+12,"cpu Myred ALU ALUop1", false,-1, 31,0);
        tracep->declBus(c+13,"cpu Myred ALU ALUop2", false,-1, 31,0);
        tracep->declBus(c+11,"cpu Myred ALU SUM", false,-1, 31,0);
        tracep->declBus(c+54,"cpu Myred ALU aluctrl2", false,-1, 2,0);
        tracep->declBit(c+5,"cpu Myred ALU EQ", false,-1);
    }
}

void Vcpu::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vcpu::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vcpu__Syms* __restrict vlSymsp = static_cast<Vcpu__Syms*>(userp);
    Vcpu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vcpu::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vcpu__Syms* __restrict vlSymsp = static_cast<Vcpu__Syms*>(userp);
    Vcpu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(((0x13U == (0x7fU & vlTOPp->cpu__DOT__Instr)) 
                                 | (0x63U != (0x7fU 
                                              & vlTOPp->cpu__DOT__Instr)))));
        tracep->fullBit(oldp+2,(((0x13U != (0x7fU & vlTOPp->cpu__DOT__Instr)) 
                                 & ((0x63U == (0x7fU 
                                               & vlTOPp->cpu__DOT__Instr)) 
                                    & (vlTOPp->cpu__DOT__Myred__DOT__ALUop1 
                                       != vlTOPp->cpu__DOT__Myred__DOT__ALUop2)))));
        tracep->fullIData(oldp+3,(vlTOPp->cpu__DOT__ImmOp),32);
        tracep->fullIData(oldp+4,(vlTOPp->cpu__DOT__Instr),32);
        tracep->fullBit(oldp+5,((vlTOPp->cpu__DOT__Myred__DOT__ALUop1 
                                 == vlTOPp->cpu__DOT__Myred__DOT__ALUop2)));
        tracep->fullIData(oldp+6,(vlTOPp->cpu__DOT__PC),32);
        tracep->fullIData(oldp+7,(vlTOPp->cpu__DOT__Myblue__DOT__next_PC),32);
        tracep->fullIData(oldp+8,(vlTOPp->cpu__DOT__Myblue__DOT__pc),32);
        tracep->fullCData(oldp+9,(vlTOPp->cpu__DOT__Mygreen__DOT__ImmSrc),2);
        tracep->fullCData(oldp+10,((0x7fU & vlTOPp->cpu__DOT__Instr)),7);
        tracep->fullIData(oldp+11,((vlTOPp->cpu__DOT__Myred__DOT__ALUop1 
                                    + vlTOPp->cpu__DOT__Myred__DOT__ALUop2)),32);
        tracep->fullIData(oldp+12,(vlTOPp->cpu__DOT__Myred__DOT__ALUop1),32);
        tracep->fullIData(oldp+13,(vlTOPp->cpu__DOT__Myred__DOT__ALUop2),32);
        tracep->fullIData(oldp+14,(vlTOPp->cpu__DOT__Myred__DOT__register__DOT__reg_array
                                   [(0x1fU & (vlTOPp->cpu__DOT__Instr 
                                              >> 0x14U))]),32);
        tracep->fullCData(oldp+15,((0x1fU & (vlTOPp->cpu__DOT__Instr 
                                             >> 0x14U))),5);
        tracep->fullCData(oldp+16,((0x1fU & (vlTOPp->cpu__DOT__Instr 
                                             >> 0xfU))),5);
        tracep->fullCData(oldp+17,((0x1fU & (vlTOPp->cpu__DOT__Instr 
                                             >> 7U))),5);
        tracep->fullIData(oldp+18,(vlTOPp->cpu__DOT__Myred__DOT__register__DOT__reg_array[0]),32);
        tracep->fullIData(oldp+19,(vlTOPp->cpu__DOT__Myred__DOT__register__DOT__reg_array[1]),32);
        tracep->fullIData(oldp+20,(vlTOPp->cpu__DOT__Myred__DOT__register__DOT__reg_array[2]),32);
        tracep->fullIData(oldp+21,(vlTOPp->cpu__DOT__Myred__DOT__register__DOT__reg_array[3]),32);
        tracep->fullIData(oldp+22,(vlTOPp->cpu__DOT__Myred__DOT__register__DOT__reg_array[4]),32);
        tracep->fullIData(oldp+23,(vlTOPp->cpu__DOT__Myred__DOT__register__DOT__reg_array[5]),32);
        tracep->fullIData(oldp+24,(vlTOPp->cpu__DOT__Myred__DOT__register__DOT__reg_array[6]),32);
        tracep->fullIData(oldp+25,(vlTOPp->cpu__DOT__Myred__DOT__register__DOT__reg_array[7]),32);
        tracep->fullIData(oldp+26,(vlTOPp->cpu__DOT__Myred__DOT__register__DOT__reg_array[8]),32);
        tracep->fullIData(oldp+27,(vlTOPp->cpu__DOT__Myred__DOT__register__DOT__reg_array[9]),32);
        tracep->fullIData(oldp+28,(vlTOPp->cpu__DOT__Myred__DOT__register__DOT__reg_array[10]),32);
        tracep->fullIData(oldp+29,(vlTOPp->cpu__DOT__Myred__DOT__register__DOT__reg_array[11]),32);
        tracep->fullIData(oldp+30,(vlTOPp->cpu__DOT__Myred__DOT__register__DOT__reg_array[12]),32);
        tracep->fullIData(oldp+31,(vlTOPp->cpu__DOT__Myred__DOT__register__DOT__reg_array[13]),32);
        tracep->fullIData(oldp+32,(vlTOPp->cpu__DOT__Myred__DOT__register__DOT__reg_array[14]),32);
        tracep->fullIData(oldp+33,(vlTOPp->cpu__DOT__Myred__DOT__register__DOT__reg_array[15]),32);
        tracep->fullIData(oldp+34,(vlTOPp->cpu__DOT__Myred__DOT__register__DOT__reg_array[16]),32);
        tracep->fullIData(oldp+35,(vlTOPp->cpu__DOT__Myred__DOT__register__DOT__reg_array[17]),32);
        tracep->fullIData(oldp+36,(vlTOPp->cpu__DOT__Myred__DOT__register__DOT__reg_array[18]),32);
        tracep->fullIData(oldp+37,(vlTOPp->cpu__DOT__Myred__DOT__register__DOT__reg_array[19]),32);
        tracep->fullIData(oldp+38,(vlTOPp->cpu__DOT__Myred__DOT__register__DOT__reg_array[20]),32);
        tracep->fullIData(oldp+39,(vlTOPp->cpu__DOT__Myred__DOT__register__DOT__reg_array[21]),32);
        tracep->fullIData(oldp+40,(vlTOPp->cpu__DOT__Myred__DOT__register__DOT__reg_array[22]),32);
        tracep->fullIData(oldp+41,(vlTOPp->cpu__DOT__Myred__DOT__register__DOT__reg_array[23]),32);
        tracep->fullIData(oldp+42,(vlTOPp->cpu__DOT__Myred__DOT__register__DOT__reg_array[24]),32);
        tracep->fullIData(oldp+43,(vlTOPp->cpu__DOT__Myred__DOT__register__DOT__reg_array[25]),32);
        tracep->fullIData(oldp+44,(vlTOPp->cpu__DOT__Myred__DOT__register__DOT__reg_array[26]),32);
        tracep->fullIData(oldp+45,(vlTOPp->cpu__DOT__Myred__DOT__register__DOT__reg_array[27]),32);
        tracep->fullIData(oldp+46,(vlTOPp->cpu__DOT__Myred__DOT__register__DOT__reg_array[28]),32);
        tracep->fullIData(oldp+47,(vlTOPp->cpu__DOT__Myred__DOT__register__DOT__reg_array[29]),32);
        tracep->fullIData(oldp+48,(vlTOPp->cpu__DOT__Myred__DOT__register__DOT__reg_array[30]),32);
        tracep->fullIData(oldp+49,(vlTOPp->cpu__DOT__Myred__DOT__register__DOT__reg_array[31]),32);
        tracep->fullBit(oldp+50,(vlTOPp->clk));
        tracep->fullBit(oldp+51,(vlTOPp->rst));
        tracep->fullIData(oldp+52,(vlTOPp->a0),32);
        tracep->fullIData(oldp+53,(vlTOPp->instr2),32);
        tracep->fullCData(oldp+54,(vlTOPp->aluctrl2),3);
        tracep->fullIData(oldp+55,(vlTOPp->pc2),32);
        tracep->fullIData(oldp+56,(0x20U),32);
        tracep->fullCData(oldp+57,(0U),3);
        tracep->fullIData(oldp+58,(8U),32);
        tracep->fullIData(oldp+59,(5U),32);
    }
}
