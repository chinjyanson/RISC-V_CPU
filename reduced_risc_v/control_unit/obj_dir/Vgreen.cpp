// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vgreen.h for the primary calling header

#include "Vgreen.h"
#include "Vgreen__Syms.h"

//==========

void Vgreen::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vgreen::eval\n"); );
    Vgreen__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vgreen* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("green.sv", 1, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vgreen::_eval_initial_loop(Vgreen__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("green.sv", 1, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vgreen::_combo__TOP__3(Vgreen__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgreen::_combo__TOP__3\n"); );
    Vgreen* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->instr = ((vlTOPp->green__DOT__MyInstrMem__DOT__rom_array
                      [(0xffU & ((IData)(3U) + (IData)(vlTOPp->PC)))] 
                      << 0x18U) | ((vlTOPp->green__DOT__MyInstrMem__DOT__rom_array
                                    [(0xffU & ((IData)(2U) 
                                               + (IData)(vlTOPp->PC)))] 
                                    << 0x10U) | ((vlTOPp->green__DOT__MyInstrMem__DOT__rom_array
                                                  [
                                                  (0xffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlTOPp->PC)))] 
                                                  << 8U) 
                                                 | vlTOPp->green__DOT__MyInstrMem__DOT__rom_array
                                                 [vlTOPp->PC])));
    vlTOPp->RegWrite = ((0x13U == (0x7fU & vlTOPp->instr)) 
                        | (0x63U != (0x7fU & vlTOPp->instr)));
    vlTOPp->ALUsrc = ((0x13U == (0x7fU & vlTOPp->instr)) 
                      | (0x63U != (0x7fU & vlTOPp->instr)));
    vlTOPp->opcode_out = (0x7fU & vlTOPp->instr);
    vlTOPp->PCsrc = ((0x13U != (0x7fU & vlTOPp->instr)) 
                     & ((0x63U == (0x7fU & vlTOPp->instr)) 
                        & (IData)(vlTOPp->EQ)));
    vlTOPp->green__DOT__ImmSrc = ((0x13U == (0x7fU 
                                             & vlTOPp->instr))
                                   ? 1U : ((0x63U == 
                                            (0x7fU 
                                             & vlTOPp->instr))
                                            ? 3U : 0U));
    vlTOPp->ImmOp = ((1U == (IData)(vlTOPp->green__DOT__ImmSrc))
                      ? ((0xfffff000U & ((- (IData)(
                                                    (1U 
                                                     & (vlTOPp->instr 
                                                        >> 0x1fU)))) 
                                         << 0xcU)) 
                         | (0xfffU & (vlTOPp->instr 
                                      >> 0x14U))) : 
                     ((3U == (IData)(vlTOPp->green__DOT__ImmSrc))
                       ? ((0xfffff000U & ((- (IData)(
                                                     (1U 
                                                      & (vlTOPp->instr 
                                                         >> 0x1fU)))) 
                                          << 0xcU)) 
                          | ((0x800U & (vlTOPp->instr 
                                        << 4U)) | (
                                                   (0x7e0U 
                                                    & (vlTOPp->instr 
                                                       >> 0x14U)) 
                                                   | (0x1eU 
                                                      & (vlTOPp->instr 
                                                         >> 7U)))))
                       : 0U));
}

void Vgreen::_eval(Vgreen__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgreen::_eval\n"); );
    Vgreen* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__3(vlSymsp);
}

VL_INLINE_OPT QData Vgreen::_change_request(Vgreen__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgreen::_change_request\n"); );
    Vgreen* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vgreen::_change_request_1(Vgreen__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgreen::_change_request_1\n"); );
    Vgreen* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vgreen::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgreen::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((EQ & 0xfeU))) {
        Verilated::overWidthError("EQ");}
}
#endif  // VL_DEBUG
