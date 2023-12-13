// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu.h for the primary calling header

#include "verilated.h"

#include "Vcpu___024root.h"

VL_ATTR_COLD void Vcpu___024root___initial__TOP__0(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___initial__TOP__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_hb978afc8__0;
    // Body
    VL_WRITEF("Loading ROM\n");
    __Vtemp_hb978afc8__0[0U] = 0x2e6d656dU;
    __Vtemp_hb978afc8__0[1U] = 0x61726f6dU;
    __Vtemp_hb978afc8__0[2U] = 0x646174U;
    VL_READMEM_N(true, 32, 256, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_hb978afc8__0)
                 ,  &(vlSelf->cpu__DOT__alu__DOT__data__DOT__data_mem_register)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 8, 256, 0, std::string{"pdf.mem"}
                 ,  &(vlSelf->cpu__DOT__control__DOT__InstrMem__DOT__rom_array)
                 , 0, ~0ULL);
}

extern const VlUnpacked<CData/*2:0*/, 64> Vcpu__ConstPool__TABLE_h9668aa63_0;

VL_ATTR_COLD void Vcpu___024root___settle__TOP__0(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___settle__TOP__0\n"); );
    // Init
    CData/*5:0*/ __Vtableidx1;
    // Body
    vlSelf->a0 = vlSelf->cpu__DOT__alu__DOT__register__DOT__reg_array
        [0xbU];
    vlSelf->cpu__DOT__alu__DOT__ResultW = ((0U == (IData)(vlSelf->cpu__DOT__ResultSrcW))
                                            ? vlSelf->cpu__DOT__alu__DOT__ALUResultW
                                            : ((1U 
                                                == (IData)(vlSelf->cpu__DOT__ResultSrcW))
                                                ? vlSelf->cpu__DOT__alu__DOT__ReadDataW
                                                : (
                                                   (2U 
                                                    == (IData)(vlSelf->cpu__DOT__ResultSrcW))
                                                    ? vlSelf->cpu__DOT__alu__DOT__PCPlus4W
                                                    : 0U)));
    if (((0U != (IData)(vlSelf->cpu__DOT__RegWriteM)) 
         | (0U != (IData)(vlSelf->cpu__DOT__RegWriteW)))) {
        vlSelf->cpu__DOT__FowardAE = (((IData)(vlSelf->cpu__DOT__Rs1E) 
                                       == (IData)(vlSelf->cpu__DOT__RdM))
                                       ? 2U : (((IData)(vlSelf->cpu__DOT__Rs1E) 
                                                == (IData)(vlSelf->cpu__DOT__RdW))
                                                ? 1U
                                                : 0U));
        vlSelf->cpu__DOT__FowardBE = (((IData)(vlSelf->cpu__DOT__Rs2E) 
                                       == (IData)(vlSelf->cpu__DOT__RdM))
                                       ? 2U : (((IData)(vlSelf->cpu__DOT__Rs2E) 
                                                == (IData)(vlSelf->cpu__DOT__RdW))
                                                ? 1U
                                                : 0U));
    } else {
        vlSelf->cpu__DOT__FowardAE = 0U;
        vlSelf->cpu__DOT__FowardBE = 0U;
    }
    vlSelf->cpu__DOT__Fen = (((3U == (IData)(vlSelf->cpu__DOT__OpcodeE)) 
                              & (((IData)(vlSelf->cpu__DOT__RdE) 
                                  == (0x1fU & (vlSelf->cpu__DOT__InstrD 
                                               >> 0xfU))) 
                                 | ((IData)(vlSelf->cpu__DOT__RdE) 
                                    == (0x1fU & (vlSelf->cpu__DOT__InstrD 
                                                 >> 0x14U)))))
                              ? 0U : 1U);
    if ((0x40U & vlSelf->cpu__DOT__InstrD)) {
        vlSelf->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls 
            = ((0x20U & vlSelf->cpu__DOT__InstrD) ? 
               ((0x10U & vlSelf->cpu__DOT__InstrD) ? 0U
                 : ((8U & vlSelf->cpu__DOT__InstrD)
                     ? ((4U & vlSelf->cpu__DOT__InstrD)
                         ? ((2U & vlSelf->cpu__DOT__InstrD)
                             ? ((1U & vlSelf->cpu__DOT__InstrD)
                                 ? 0x188cU : 0U) : 0U)
                         : 0U) : ((4U & vlSelf->cpu__DOT__InstrD)
                                   ? ((2U & vlSelf->cpu__DOT__InstrD)
                                       ? ((1U & vlSelf->cpu__DOT__InstrD)
                                           ? 0x18a0U
                                           : 0U) : 0U)
                                   : ((2U & vlSelf->cpu__DOT__InstrD)
                                       ? ((1U & vlSelf->cpu__DOT__InstrD)
                                           ? 0x49U : 0U)
                                       : 0U)))) : 0U);
    } else if ((0x20U & vlSelf->cpu__DOT__InstrD)) {
        if ((0x10U & vlSelf->cpu__DOT__InstrD)) {
            vlSelf->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls 
                = ((8U & vlSelf->cpu__DOT__InstrD) ? 0U
                    : ((4U & vlSelf->cpu__DOT__InstrD)
                        ? ((2U & vlSelf->cpu__DOT__InstrD)
                            ? ((1U & vlSelf->cpu__DOT__InstrD)
                                ? 0x1033U : 0U) : 0U)
                        : ((2U & vlSelf->cpu__DOT__InstrD)
                            ? ((1U & vlSelf->cpu__DOT__InstrD)
                                ? 0x1002U : 0U) : 0U)));
        } else if ((8U & vlSelf->cpu__DOT__InstrD)) {
            vlSelf->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls = 0U;
        } else if ((4U & vlSelf->cpu__DOT__InstrD)) {
            vlSelf->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls = 0U;
        } else if ((2U & vlSelf->cpu__DOT__InstrD)) {
            if ((1U & vlSelf->cpu__DOT__InstrD)) {
                vlSelf->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls = 0x28U;
                if ((0U == (7U & (vlSelf->cpu__DOT__InstrD 
                                  >> 0xcU)))) {
                    vlSelf->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls 
                        = (0x300U | (0x7cffU & (IData)(vlSelf->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls)));
                } else if ((1U == (7U & (vlSelf->cpu__DOT__InstrD 
                                         >> 0xcU)))) {
                    vlSelf->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls 
                        = (0x200U | (0x7cffU & (IData)(vlSelf->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls)));
                } else if ((2U == (7U & (vlSelf->cpu__DOT__InstrD 
                                         >> 0xcU)))) {
                    vlSelf->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls 
                        = (0x100U | (0x7cffU & (IData)(vlSelf->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls)));
                }
            } else {
                vlSelf->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls = 0U;
            }
        } else {
            vlSelf->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls = 0U;
        }
    } else if ((0x10U & vlSelf->cpu__DOT__InstrD)) {
        vlSelf->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls 
            = ((8U & vlSelf->cpu__DOT__InstrD) ? 0U
                : ((4U & vlSelf->cpu__DOT__InstrD) ? 0U
                    : ((2U & vlSelf->cpu__DOT__InstrD)
                        ? ((1U & vlSelf->cpu__DOT__InstrD)
                            ? 0x1002U : 0U) : 0U)));
    } else if ((8U & vlSelf->cpu__DOT__InstrD)) {
        vlSelf->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls = 0U;
    } else if ((4U & vlSelf->cpu__DOT__InstrD)) {
        vlSelf->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls = 0U;
    } else if ((2U & vlSelf->cpu__DOT__InstrD)) {
        if ((1U & vlSelf->cpu__DOT__InstrD)) {
            vlSelf->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls = 0x420U;
            if ((0x4000U & vlSelf->cpu__DOT__InstrD)) {
                if ((1U & (~ (vlSelf->cpu__DOT__InstrD 
                              >> 0xdU)))) {
                    vlSelf->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls 
                        = ((0x1000U & vlSelf->cpu__DOT__InstrD)
                            ? (0x6000U | (0xfffU & (IData)(vlSelf->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls)))
                            : (0x7000U | (0xfffU & (IData)(vlSelf->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls))));
                }
            } else if ((0x2000U & vlSelf->cpu__DOT__InstrD)) {
                if ((1U & (~ (vlSelf->cpu__DOT__InstrD 
                              >> 0xcU)))) {
                    vlSelf->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls 
                        = (0x1000U | (0xfffU & (IData)(vlSelf->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls)));
                }
            } else {
                vlSelf->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls 
                    = ((0x1000U & vlSelf->cpu__DOT__InstrD)
                        ? (0x2000U | (0xfffU & (IData)(vlSelf->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls)))
                        : (0x3000U | (0xfffU & (IData)(vlSelf->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls))));
            }
        } else {
            vlSelf->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls = 0U;
        }
    } else {
        vlSelf->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls = 0U;
    }
    vlSelf->cpu__DOT__alu__DOT__SrcAE = ((0U == (IData)(vlSelf->cpu__DOT__FowardAE))
                                          ? vlSelf->cpu__DOT__alu__DOT__RD1E
                                          : ((1U == (IData)(vlSelf->cpu__DOT__FowardAE))
                                              ? vlSelf->cpu__DOT__alu__DOT__ResultW
                                              : ((2U 
                                                  == (IData)(vlSelf->cpu__DOT__FowardAE))
                                                  ? vlSelf->cpu__DOT__alu__DOT__ALUResultM
                                                  : 0U)));
    vlSelf->cpu__DOT__alu__DOT__WriteDataE = ((0U == (IData)(vlSelf->cpu__DOT__FowardBE))
                                               ? vlSelf->cpu__DOT__alu__DOT__RD2E
                                               : ((1U 
                                                   == (IData)(vlSelf->cpu__DOT__FowardBE))
                                                   ? vlSelf->cpu__DOT__alu__DOT__ResultW
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->cpu__DOT__FowardBE))
                                                    ? vlSelf->cpu__DOT__alu__DOT__ALUResultM
                                                    : 0U)));
    if ((0U == (7U & ((IData)(vlSelf->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls) 
                      >> 2U)))) {
        vlSelf->cpu__DOT__ExtImmD = (((- (IData)((vlSelf->cpu__DOT__InstrD 
                                                  >> 0x1fU))) 
                                      << 0xcU) | (vlSelf->cpu__DOT__InstrD 
                                                  >> 0x14U));
    } else if ((1U == (7U & ((IData)(vlSelf->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls) 
                             >> 2U)))) {
        vlSelf->cpu__DOT__ExtImmD = (((- (IData)((vlSelf->cpu__DOT__InstrD 
                                                  >> 0x1fU))) 
                                      << 0xcU) | ((0xfe0U 
                                                   & (vlSelf->cpu__DOT__InstrD 
                                                      >> 0x14U)) 
                                                  | (0x1fU 
                                                     & (vlSelf->cpu__DOT__InstrD 
                                                        >> 7U))));
    } else if ((2U == (7U & ((IData)(vlSelf->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls) 
                             >> 2U)))) {
        vlSelf->cpu__DOT__ExtImmD = (((- (IData)((vlSelf->cpu__DOT__InstrD 
                                                  >> 0x1fU))) 
                                      << 0xcU) | ((0x800U 
                                                   & (vlSelf->cpu__DOT__InstrD 
                                                      << 4U)) 
                                                  | ((0x7e0U 
                                                      & (vlSelf->cpu__DOT__InstrD 
                                                         >> 0x14U)) 
                                                     | (0x1eU 
                                                        & (vlSelf->cpu__DOT__InstrD 
                                                           >> 7U)))));
    } else if ((3U == (7U & ((IData)(vlSelf->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls) 
                             >> 2U)))) {
        vlSelf->cpu__DOT__ExtImmD = (((- (IData)((vlSelf->cpu__DOT__InstrD 
                                                  >> 0x1fU))) 
                                      << 0x14U) | (
                                                   (0xff000U 
                                                    & vlSelf->cpu__DOT__InstrD) 
                                                   | ((0x800U 
                                                       & (vlSelf->cpu__DOT__InstrD 
                                                          >> 9U)) 
                                                      | (0x7feU 
                                                         & (vlSelf->cpu__DOT__InstrD 
                                                            >> 0x14U)))));
    } else if ((4U == (7U & ((IData)(vlSelf->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls) 
                             >> 2U)))) {
        vlSelf->cpu__DOT__ExtImmD = (0xfffff000U & vlSelf->cpu__DOT__InstrD);
    }
    __Vtableidx1 = (((IData)((0x40000020U == (0x40000020U 
                                              & vlSelf->cpu__DOT__InstrD))) 
                     << 5U) | ((0x1cU & (vlSelf->cpu__DOT__InstrD 
                                         >> 0xaU)) 
                               | (3U & (IData)(vlSelf->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls))));
    vlSelf->cpu__DOT__control__DOT__ALUControlD = Vcpu__ConstPool__TABLE_h9668aa63_0
        [__Vtableidx1];
    vlSelf->cpu__DOT__alu__DOT__SrcBE = ((IData)(vlSelf->cpu__DOT__ALUSrcE)
                                          ? vlSelf->cpu__DOT__alu__DOT__ExtImmE
                                          : vlSelf->cpu__DOT__alu__DOT__WriteDataE);
    vlSelf->cpu__DOT__ALUResultE = ((4U & (IData)(vlSelf->cpu__DOT__ALUControlE))
                                     ? ((2U & (IData)(vlSelf->cpu__DOT__ALUControlE))
                                         ? ((1U & (IData)(vlSelf->cpu__DOT__ALUControlE))
                                             ? vlSelf->cpu__DOT__alu__DOT__SrcBE
                                             : (vlSelf->cpu__DOT__alu__DOT__SrcAE 
                                                >> 
                                                (0x1fU 
                                                 & vlSelf->cpu__DOT__alu__DOT__SrcBE)))
                                         : ((1U & (IData)(vlSelf->cpu__DOT__ALUControlE))
                                             ? (vlSelf->cpu__DOT__alu__DOT__SrcAE 
                                                << 
                                                (0x1fU 
                                                 & vlSelf->cpu__DOT__alu__DOT__SrcBE))
                                             : (vlSelf->cpu__DOT__alu__DOT__SrcAE 
                                                ^ vlSelf->cpu__DOT__alu__DOT__SrcBE)))
                                     : ((2U & (IData)(vlSelf->cpu__DOT__ALUControlE))
                                         ? ((1U & (IData)(vlSelf->cpu__DOT__ALUControlE))
                                             ? (vlSelf->cpu__DOT__alu__DOT__SrcAE 
                                                | vlSelf->cpu__DOT__alu__DOT__SrcBE)
                                             : (vlSelf->cpu__DOT__alu__DOT__SrcAE 
                                                & vlSelf->cpu__DOT__alu__DOT__SrcBE))
                                         : ((1U & (IData)(vlSelf->cpu__DOT__ALUControlE))
                                             ? (vlSelf->cpu__DOT__alu__DOT__SrcAE 
                                                - vlSelf->cpu__DOT__alu__DOT__SrcBE)
                                             : (vlSelf->cpu__DOT__alu__DOT__SrcAE 
                                                + vlSelf->cpu__DOT__alu__DOT__SrcBE))));
    vlSelf->cpu__DOT__PCSrcE = ((IData)(vlSelf->cpu__DOT__control__DOT__JumpE)
                                 ? ((IData)(vlSelf->cpu__DOT__ALUSrcE)
                                     ? 2U : 1U) : (
                                                   ((IData)(vlSelf->cpu__DOT__control__DOT__BranchE) 
                                                    & ((vlSelf->cpu__DOT__alu__DOT__SrcAE 
                                                        == vlSelf->cpu__DOT__alu__DOT__SrcBE) 
                                                       ^ (IData)(vlSelf->cpu__DOT__control__DOT__funct3E)))
                                                    ? 1U
                                                    : 0U));
    vlSelf->cpu__DOT__pc__DOT__next_PC = ((0U == (IData)(vlSelf->cpu__DOT__PCSrcE))
                                           ? ((IData)(4U) 
                                              + vlSelf->cpu__DOT__PCF)
                                           : ((1U == (IData)(vlSelf->cpu__DOT__PCSrcE))
                                               ? (vlSelf->cpu__DOT__alu__DOT__PCE 
                                                  + vlSelf->cpu__DOT__alu__DOT__ExtImmE)
                                               : ((2U 
                                                   == (IData)(vlSelf->cpu__DOT__PCSrcE))
                                                   ? vlSelf->cpu__DOT__ALUResultE
                                                   : 0U)));
}

VL_ATTR_COLD void Vcpu___024root___eval_initial(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    Vcpu___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vcpu___024root___eval_settle(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_settle\n"); );
    // Body
    Vcpu___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vcpu___024root___final(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___final\n"); );
}

VL_ATTR_COLD void Vcpu___024root___ctor_var_reset(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->a0 = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__RegWriteW = VL_RAND_RESET_I(3);
    vlSelf->cpu__DOT__RegWriteM = VL_RAND_RESET_I(3);
    vlSelf->cpu__DOT__MemWriteM = VL_RAND_RESET_I(2);
    vlSelf->cpu__DOT__ResultSrcW = VL_RAND_RESET_I(2);
    vlSelf->cpu__DOT__ALUControlE = VL_RAND_RESET_I(3);
    vlSelf->cpu__DOT__ALUSrcE = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__InstrD = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__ExtImmD = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__PCD = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__PCPlus4D = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__ALUResultE = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__PCSrcE = VL_RAND_RESET_I(2);
    vlSelf->cpu__DOT__Rs1E = VL_RAND_RESET_I(5);
    vlSelf->cpu__DOT__Rs2E = VL_RAND_RESET_I(5);
    vlSelf->cpu__DOT__RdM = VL_RAND_RESET_I(5);
    vlSelf->cpu__DOT__RdW = VL_RAND_RESET_I(5);
    vlSelf->cpu__DOT__RdE = VL_RAND_RESET_I(5);
    vlSelf->cpu__DOT__OpcodeE = VL_RAND_RESET_I(7);
    vlSelf->cpu__DOT__PCF = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__Fen = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__FowardAE = VL_RAND_RESET_I(2);
    vlSelf->cpu__DOT__FowardBE = VL_RAND_RESET_I(2);
    vlSelf->cpu__DOT__PCrst = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__pc__DOT__next_PC = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__control__DOT__ALUControlD = VL_RAND_RESET_I(3);
    vlSelf->cpu__DOT__control__DOT__RegWriteE = VL_RAND_RESET_I(3);
    vlSelf->cpu__DOT__control__DOT__ResultSrcE = VL_RAND_RESET_I(2);
    vlSelf->cpu__DOT__control__DOT__MemWriteE = VL_RAND_RESET_I(2);
    vlSelf->cpu__DOT__control__DOT__JumpE = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__control__DOT__BranchE = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__control__DOT__funct3E = VL_RAND_RESET_I(3);
    vlSelf->cpu__DOT__control__DOT__ResultSrcM = VL_RAND_RESET_I(2);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->cpu__DOT__control__DOT__InstrMem__DOT__rom_array[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls = VL_RAND_RESET_I(15);
    vlSelf->cpu__DOT__alu__DOT__RD1E = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__alu__DOT__RD2E = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__alu__DOT__PCE = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__alu__DOT__PCPlus4E = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__alu__DOT__SrcAE = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__alu__DOT__SrcBE = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__alu__DOT__WriteDataE = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__alu__DOT__ExtImmE = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__alu__DOT__ALUResultM = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__alu__DOT__WriteDataM = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__alu__DOT__PCPlus4M = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__alu__DOT__PCPlus4W = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__alu__DOT__ReadDataW = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__alu__DOT__ALUResultW = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__alu__DOT__ResultW = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->cpu__DOT__alu__DOT__register__DOT__reg_array[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->cpu__DOT__alu__DOT__data__DOT__data_mem_register[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
