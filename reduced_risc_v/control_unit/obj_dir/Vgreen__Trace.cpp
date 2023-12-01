// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vgreen__Syms.h"


void Vgreen::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vgreen__Syms* __restrict vlSymsp = static_cast<Vgreen__Syms*>(userp);
    Vgreen* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vgreen::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vgreen__Syms* __restrict vlSymsp = static_cast<Vgreen__Syms*>(userp);
    Vgreen* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgCData(oldp+0,(vlTOPp->PC),8);
        tracep->chgBit(oldp+1,(vlTOPp->EQ));
        tracep->chgIData(oldp+2,(vlTOPp->instr),32);
        tracep->chgBit(oldp+3,(vlTOPp->RegWrite));
        tracep->chgCData(oldp+4,(vlTOPp->ALUctrl),3);
        tracep->chgBit(oldp+5,(vlTOPp->ALUsrc));
        tracep->chgBit(oldp+6,(vlTOPp->PCsrc));
        tracep->chgIData(oldp+7,(vlTOPp->ImmOp),32);
        tracep->chgCData(oldp+8,(vlTOPp->opcode_out),7);
        tracep->chgCData(oldp+9,(vlTOPp->green__DOT__ImmSrc),2);
        tracep->chgCData(oldp+10,((0x7fU & vlTOPp->instr)),7);
    }
}

void Vgreen::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vgreen__Syms* __restrict vlSymsp = static_cast<Vgreen__Syms*>(userp);
    Vgreen* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
