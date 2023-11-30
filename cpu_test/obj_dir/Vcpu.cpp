// Verilated -*- C++ -*-
<<<<<<< HEAD
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu.h for the primary calling header

#include "Vcpu.h"
#include "Vcpu__Syms.h"

//==========

void Vcpu::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vcpu::eval\n"); );
    Vcpu__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vcpu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
=======
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vcpu.h"
#include "Vcpu__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vcpu::Vcpu(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vcpu__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , __pinNumber4{vlSymsp->TOP.__pinNumber4}
    , a0{vlSymsp->TOP.a0}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vcpu::Vcpu(const char* _vcname__)
    : Vcpu(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vcpu::~Vcpu() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vcpu___024root___eval_initial(Vcpu___024root* vlSelf);
void Vcpu___024root___eval_settle(Vcpu___024root* vlSelf);
void Vcpu___024root___eval(Vcpu___024root* vlSelf);
#ifdef VL_DEBUG
void Vcpu___024root___eval_debug_assertions(Vcpu___024root* vlSelf);
#endif  // VL_DEBUG
void Vcpu___024root___final(Vcpu___024root* vlSelf);

static void _eval_initial_loop(Vcpu__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vcpu___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vcpu___024root___eval_settle(&(vlSymsp->TOP));
        Vcpu___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vcpu::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vcpu::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vcpu___024root___eval_debug_assertions(&(vlSymsp->TOP));
>>>>>>> 07e1f023be4db24706a5e02e1dc67bc09c2f927b
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
<<<<<<< HEAD
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
            VL_FATAL_MT("cpu.sv", 1, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vcpu::_eval_initial_loop(Vcpu__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("cpu.sv", 1, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vcpu::_sequent__TOP__3(Vcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu::_sequent__TOP__3\n"); );
    Vcpu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*4:0*/ __Vdlyvdim0__cpu__DOT__Myred__DOT__register__DOT__reg_array__v0;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__Myred__DOT__register__DOT__reg_array__v0;
    IData/*31:0*/ __Vdlyvval__cpu__DOT__Myred__DOT__register__DOT__reg_array__v0;
    // Body
    __Vdlyvset__cpu__DOT__Myred__DOT__register__DOT__reg_array__v0 = 0U;
    vlTOPp->pc2 = vlTOPp->cpu__DOT__Myblue__DOT__next_PC;
    vlTOPp->cpu__DOT__Myblue__DOT__pc = ((IData)(vlTOPp->rst)
                                          ? 0U : vlTOPp->cpu__DOT__Myblue__DOT__next_PC);
    if (((0x13U == (0x7fU & vlTOPp->cpu__DOT__Instr)) 
         | (0x63U != (0x7fU & vlTOPp->cpu__DOT__Instr)))) {
        __Vdlyvval__cpu__DOT__Myred__DOT__register__DOT__reg_array__v0 
            = (vlTOPp->cpu__DOT__Myred__DOT__ALUop1 
               + vlTOPp->cpu__DOT__Myred__DOT__ALUop2);
        __Vdlyvset__cpu__DOT__Myred__DOT__register__DOT__reg_array__v0 = 1U;
        __Vdlyvdim0__cpu__DOT__Myred__DOT__register__DOT__reg_array__v0 
            = (0x1fU & (vlTOPp->cpu__DOT__Instr >> 7U));
    }
    vlTOPp->cpu__DOT__PC = vlTOPp->cpu__DOT__Myblue__DOT__next_PC;
    if (__Vdlyvset__cpu__DOT__Myred__DOT__register__DOT__reg_array__v0) {
        vlTOPp->cpu__DOT__Myred__DOT__register__DOT__reg_array[__Vdlyvdim0__cpu__DOT__Myred__DOT__register__DOT__reg_array__v0] 
            = __Vdlyvval__cpu__DOT__Myred__DOT__register__DOT__reg_array__v0;
    }
    vlTOPp->a0 = vlTOPp->cpu__DOT__Myred__DOT__register__DOT__reg_array
        [0xaU];
    vlTOPp->cpu__DOT__Instr = vlTOPp->cpu__DOT__Mygreen__DOT__MyInstrMem__DOT__rom_array
        [(0x3fU & (vlTOPp->cpu__DOT__PC >> 2U))];
    vlTOPp->instr2 = vlTOPp->cpu__DOT__Instr;
    vlTOPp->cpu__DOT__Myred__DOT__ALUop1 = vlTOPp->cpu__DOT__Myred__DOT__register__DOT__reg_array
        [(0x1fU & (vlTOPp->cpu__DOT__Instr >> 0xfU))];
    vlTOPp->cpu__DOT__Mygreen__DOT__ImmSrc = ((0x13U 
                                               == (0x7fU 
                                                   & vlTOPp->cpu__DOT__Instr))
                                               ? 1U
                                               : ((0x63U 
                                                   == 
                                                   (0x7fU 
                                                    & vlTOPp->cpu__DOT__Instr))
                                                   ? 3U
                                                   : 0U));
    vlTOPp->cpu__DOT__ImmOp = ((1U == (IData)(vlTOPp->cpu__DOT__Mygreen__DOT__ImmSrc))
                                ? ((0xfffff000U & (
                                                   (- (IData)(
                                                              (1U 
                                                               & (vlTOPp->cpu__DOT__Instr 
                                                                  >> 0x1fU)))) 
                                                   << 0xcU)) 
                                   | (0xfffU & (vlTOPp->cpu__DOT__Instr 
                                                >> 0x14U)))
                                : ((3U == (IData)(vlTOPp->cpu__DOT__Mygreen__DOT__ImmSrc))
                                    ? ((0xfffff000U 
                                        & ((- (IData)(
                                                      (1U 
                                                       & (vlTOPp->cpu__DOT__Instr 
                                                          >> 0x1fU)))) 
                                           << 0xcU)) 
                                       | ((0x800U & 
                                           (vlTOPp->cpu__DOT__Instr 
                                            << 4U)) 
                                          | ((0x7e0U 
                                              & (vlTOPp->cpu__DOT__Instr 
                                                 >> 0x14U)) 
                                             | (0x1eU 
                                                & (vlTOPp->cpu__DOT__Instr 
                                                   >> 7U)))))
                                    : 0U));
    vlTOPp->cpu__DOT__Myred__DOT__ALUop2 = (((0x13U 
                                              == (0x7fU 
                                                  & vlTOPp->cpu__DOT__Instr)) 
                                             | (0x63U 
                                                != 
                                                (0x7fU 
                                                 & vlTOPp->cpu__DOT__Instr)))
                                             ? vlTOPp->cpu__DOT__ImmOp
                                             : vlTOPp->cpu__DOT__Myred__DOT__register__DOT__reg_array
                                            [(0x1fU 
                                              & (vlTOPp->cpu__DOT__Instr 
                                                 >> 0x14U))]);
    vlTOPp->cpu__DOT__Myblue__DOT__next_PC = (((0x13U 
                                                != 
                                                (0x7fU 
                                                 & vlTOPp->cpu__DOT__Instr)) 
                                               & ((0x63U 
                                                   == 
                                                   (0x7fU 
                                                    & vlTOPp->cpu__DOT__Instr)) 
                                                  & (vlTOPp->cpu__DOT__Myred__DOT__ALUop1 
                                                     != vlTOPp->cpu__DOT__Myred__DOT__ALUop2)))
                                               ? (vlTOPp->cpu__DOT__Myblue__DOT__pc 
                                                  + vlTOPp->cpu__DOT__ImmOp)
                                               : ((IData)(4U) 
                                                  + vlTOPp->cpu__DOT__Myblue__DOT__pc));
}

void Vcpu::_eval(Vcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu::_eval\n"); );
    Vcpu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__3(vlSymsp);
        vlTOPp->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

VL_INLINE_OPT QData Vcpu::_change_request(Vcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu::_change_request\n"); );
    Vcpu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vcpu::_change_request_1(Vcpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu::_change_request_1\n"); );
    Vcpu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vcpu::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
=======
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vcpu___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* Vcpu::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vcpu::final() {
    Vcpu___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vcpu::hierName() const { return vlSymsp->name(); }
const char* Vcpu::modelName() const { return "Vcpu"; }
unsigned Vcpu::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vcpu::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vcpu___024root__trace_init_top(Vcpu___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vcpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcpu___024root*>(voidSelf);
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vcpu___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vcpu___024root__trace_register(Vcpu___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vcpu::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vcpu___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
>>>>>>> 07e1f023be4db24706a5e02e1dc67bc09c2f927b
