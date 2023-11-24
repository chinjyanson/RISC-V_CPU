// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VPCtop.h"
#include "VPCtop__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VPCtop::VPCtop(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VPCtop__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , PCsrc{vlSymsp->TOP.PCsrc}
    , ImmOp{vlSymsp->TOP.ImmOp}
    , PC{vlSymsp->TOP.PC}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VPCtop::VPCtop(const char* _vcname__)
    : VPCtop(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VPCtop::~VPCtop() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VPCtop___024root___eval_initial(VPCtop___024root* vlSelf);
void VPCtop___024root___eval_settle(VPCtop___024root* vlSelf);
void VPCtop___024root___eval(VPCtop___024root* vlSelf);
#ifdef VL_DEBUG
void VPCtop___024root___eval_debug_assertions(VPCtop___024root* vlSelf);
#endif  // VL_DEBUG
void VPCtop___024root___final(VPCtop___024root* vlSelf);

static void _eval_initial_loop(VPCtop__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VPCtop___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VPCtop___024root___eval_settle(&(vlSymsp->TOP));
        VPCtop___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VPCtop::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VPCtop::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VPCtop___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VPCtop___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* VPCtop::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VPCtop::final() {
    VPCtop___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VPCtop::hierName() const { return vlSymsp->name(); }
const char* VPCtop::modelName() const { return "VPCtop"; }
unsigned VPCtop::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> VPCtop::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VPCtop___024root__trace_init_top(VPCtop___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VPCtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPCtop___024root*>(voidSelf);
    VPCtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VPCtop___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VPCtop___024root__trace_register(VPCtop___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VPCtop::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VPCtop___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
