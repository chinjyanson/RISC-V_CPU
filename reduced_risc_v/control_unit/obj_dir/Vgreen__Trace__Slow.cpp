// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vgreen__Syms.h"


//======================

void Vgreen::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vgreen::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vgreen__Syms* __restrict vlSymsp = static_cast<Vgreen__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vgreen::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vgreen::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vgreen__Syms* __restrict vlSymsp = static_cast<Vgreen__Syms*>(userp);
    Vgreen* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vgreen::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vgreen__Syms* __restrict vlSymsp = static_cast<Vgreen__Syms*>(userp);
    Vgreen* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBus(c+1,"PC", false,-1, 7,0);
        tracep->declBit(c+2,"EQ", false,-1);
        tracep->declBus(c+3,"instr", false,-1, 31,0);
        tracep->declBit(c+4,"RegWrite", false,-1);
        tracep->declBus(c+5,"ALUctrl", false,-1, 2,0);
        tracep->declBit(c+6,"ALUsrc", false,-1);
        tracep->declBit(c+7,"PCsrc", false,-1);
        tracep->declBus(c+8,"ImmOp", false,-1, 31,0);
        tracep->declBus(c+9,"opcode_out", false,-1, 6,0);
        tracep->declBus(c+12,"green ADDRESS_WIDTH", false,-1, 31,0);
        tracep->declBus(c+13,"green DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1,"green PC", false,-1, 7,0);
        tracep->declBit(c+2,"green EQ", false,-1);
        tracep->declBus(c+3,"green instr", false,-1, 31,0);
        tracep->declBit(c+4,"green RegWrite", false,-1);
        tracep->declBus(c+5,"green ALUctrl", false,-1, 2,0);
        tracep->declBit(c+6,"green ALUsrc", false,-1);
        tracep->declBit(c+7,"green PCsrc", false,-1);
        tracep->declBus(c+8,"green ImmOp", false,-1, 31,0);
        tracep->declBus(c+9,"green opcode_out", false,-1, 6,0);
        tracep->declBus(c+10,"green ImmSrc", false,-1, 1,0);
        tracep->declBus(c+13,"green MyControlUnit DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+2,"green MyControlUnit EQ", false,-1);
        tracep->declBus(c+3,"green MyControlUnit instr", false,-1, 31,0);
        tracep->declBit(c+4,"green MyControlUnit RegWrite", false,-1);
        tracep->declBus(c+5,"green MyControlUnit ALUctrl", false,-1, 2,0);
        tracep->declBit(c+6,"green MyControlUnit ALUsrc", false,-1);
        tracep->declBus(c+10,"green MyControlUnit ImmSrc", false,-1, 1,0);
        tracep->declBit(c+7,"green MyControlUnit PCsrc", false,-1);
        tracep->declBus(c+9,"green MyControlUnit opcode_out", false,-1, 6,0);
        tracep->declBus(c+11,"green MyControlUnit opcode", false,-1, 6,0);
        tracep->declBus(c+12,"green MyInstrMem ADDRESS_WIDTH", false,-1, 31,0);
        tracep->declBus(c+12,"green MyInstrMem DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+14,"green MyInstrMem clk", false,-1);
        tracep->declBus(c+1,"green MyInstrMem addr", false,-1, 7,0);
        tracep->declBus(c+3,"green MyInstrMem dout", false,-1, 31,0);
        tracep->declBus(c+13,"green MySignExtend DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+3,"green MySignExtend instr", false,-1, 31,0);
        tracep->declBus(c+10,"green MySignExtend ImmSrc", false,-1, 1,0);
        tracep->declBus(c+8,"green MySignExtend ImmOp", false,-1, 31,0);
    }
}

void Vgreen::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vgreen::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vgreen__Syms* __restrict vlSymsp = static_cast<Vgreen__Syms*>(userp);
    Vgreen* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vgreen::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vgreen__Syms* __restrict vlSymsp = static_cast<Vgreen__Syms*>(userp);
    Vgreen* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlTOPp->PC),8);
        tracep->fullBit(oldp+2,(vlTOPp->EQ));
        tracep->fullIData(oldp+3,(vlTOPp->instr),32);
        tracep->fullBit(oldp+4,(vlTOPp->RegWrite));
        tracep->fullCData(oldp+5,(vlTOPp->ALUctrl),3);
        tracep->fullBit(oldp+6,(vlTOPp->ALUsrc));
        tracep->fullBit(oldp+7,(vlTOPp->PCsrc));
        tracep->fullIData(oldp+8,(vlTOPp->ImmOp),32);
        tracep->fullCData(oldp+9,(vlTOPp->opcode_out),7);
        tracep->fullCData(oldp+10,(vlTOPp->green__DOT__ImmSrc),2);
        tracep->fullCData(oldp+11,((0x7fU & vlTOPp->instr)),7);
        tracep->fullIData(oldp+12,(8U),32);
        tracep->fullIData(oldp+13,(0x20U),32);
        tracep->fullBit(oldp+14,(vlTOPp->green__DOT__MyInstrMem__DOT__clk));
    }
}
