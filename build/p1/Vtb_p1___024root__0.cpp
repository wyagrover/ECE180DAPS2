// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_p1.h for the primary calling header

#include "Vtb_p1__pch.h"

VlCoroutine Vtb_p1___024root___eval_initial__TOP__Vtiming__0(Vtb_p1___024root* vlSelf);
VlCoroutine Vtb_p1___024root___eval_initial__TOP__Vtiming__1(Vtb_p1___024root* vlSelf);
VlCoroutine Vtb_p1___024root___eval_initial__TOP__Vtiming__2(Vtb_p1___024root* vlSelf);

void Vtb_p1___024root___eval_initial(Vtb_p1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p1___024root___eval_initial\n"); );
    Vtb_p1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_initial__TOP
        if ((0U != VL_TESTPLUSARGS_I("trace"s))) {
            vlSymsp->_vm_contextp__->dumpfile("build/p1.vcd"s);
            VL_PRINTF_MT("-Info: tb/tb_p1.sv:128: $dumpvar ignored, as Verilated without --trace\n");
        }
    }
    Vtb_p1___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_p1___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb_p1___024root___eval_initial__TOP__Vtiming__2(vlSelf);
}

void Vtb_p1___024root___eval_sample(Vtb_p1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p1___024root___eval_sample\n"); );
    Vtb_p1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_p1___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_p1___024root___eval_ico(Vtb_p1___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p1___024root___eval_ico\n"); );
    Vtb_p1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_p1___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    return (0U);
}

void Vtb_p1___024root___timing_ready(Vtb_p1___024root* vlSelf);
void Vtb_p1___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_p1___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vtb_p1___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vtb_p1___024root___timing_resume(Vtb_p1___024root* vlSelf);

bool Vtb_p1___024root___eval_act(Vtb_p1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p1___024root___eval_act\n"); );
    Vtb_p1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                          << 2U) 
                                                         | ((((~ (IData)(vlSelfRef.tb_p1__DOT__clk_i)) 
                                                              & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_p1__DOT__clk_i__0)) 
                                                             << 1U) 
                                                            | ((IData)(vlSelfRef.tb_p1__DOT__clk_i) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_p1__DOT__clk_i__0)))))));
        vlSelfRef.__Vtrigprevexpr___TOP__tb_p1__DOT__clk_i__0 
            = vlSelfRef.tb_p1__DOT__clk_i;
    }
    Vtb_p1___024root___timing_ready(vlSelf);
    Vtb_p1___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_p1___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_p1___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_p1___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb_p1___024root___timing_resume(vlSelf);
        {
            // Inlined CFunc: _eval_body__act
            if ((7ULL & vlSelfRef.__VactTriggered[0U])) {
                {
                    // Inlined CFunc: _act_comb__TOP__0
                    vlSelfRef.__Vdfg_Regularize_4 = 
                        (((IData)(vlSelfRef.tb_p1__DOT__bit_i) 
                          << 2U) | (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__state_q));
                }
            }
        }
    }
    return (__VactExecute);
}

bool Vtb_p1___024root___eval_inact(Vtb_p1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p1___024root___eval_inact\n"); );
    Vtb_p1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb/tb_p1.sv", 2, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

extern const VlUnpacked<CData/*0:0*/, 8> Vtb_p1__ConstPool__TABLE_2;
extern const VlUnpacked<CData/*1:0*/, 8> Vtb_p1__ConstPool__TABLE_1;
void Vtb_p1___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out);

bool Vtb_p1___024root___eval_nba(Vtb_p1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p1___024root___eval_nba\n"); );
    Vtb_p1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_p1___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_body__nba
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                {
                    // Inlined CFunc: _nba_sequent__TOP__0
                    if (vlSelfRef.tb_p1__DOT__rst_ni) {
                        if (Vtb_p1__ConstPool__TABLE_2
                            [vlSelfRef.__Vdfg_Regularize_4]) {
                            if ((0xffU > (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__count_q))) {
                                vlSelfRef.tb_p1__DOT__dut__DOT__count_q 
                                    = (0x000000ffU 
                                       & ((IData)(1U) 
                                          + (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__count_q)));
                            }
                        }
                        vlSelfRef.tb_p1__DOT__dut__DOT__state_q 
                            = Vtb_p1__ConstPool__TABLE_1
                            [vlSelfRef.__Vdfg_Regularize_4];
                    } else {
                        vlSelfRef.tb_p1__DOT__dut__DOT__count_q = 0U;
                        vlSelfRef.tb_p1__DOT__dut__DOT__state_q = 0U;
                    }
                }
            }
            if ((7ULL & vlSelfRef.__VnbaTriggered[0U])) {
                {
                    // Inlined CFunc: _act_comb__TOP__0
                    vlSelfRef.__Vdfg_Regularize_4 = 
                        (((IData)(vlSelfRef.tb_p1__DOT__bit_i) 
                          << 2U) | (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__state_q));
                }
            }
        }
        Vtb_p1___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool Vtb_p1___024root___eval_obs(Vtb_p1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p1___024root___eval_obs\n"); );
    Vtb_p1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vtb_p1___024root___eval_react(Vtb_p1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p1___024root___eval_react\n"); );
    Vtb_p1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Vtb_p1___024root___eval_postponed(Vtb_p1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p1___024root___eval_postponed\n"); );
    Vtb_p1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtb_p1___024root____VbeforeTrig_h7811a6bb__0(Vtb_p1___024root* vlSelf, const char* __VeventDescription);
void Vtb_p1___024root____VbeforeTrig_h7811a786__0(Vtb_p1___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtb_p1___024root___eval_initial__TOP__Vtiming__0(Vtb_p1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p1___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_p1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ tb_p1__DOT__shreg;
    tb_p1__DOT__shreg = 0;
    IData/*31:0*/ tb_p1__DOT__unnamedblk1_1__DOT____Vrepeat0;
    tb_p1__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    SData/*12:0*/ tb_p1__DOT__unnamedblk1__DOT__pat;
    tb_p1__DOT__unnamedblk1__DOT__pat = 0;
    IData/*31:0*/ tb_p1__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i;
    tb_p1__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 0;
    SData/*12:0*/ tb_p1__DOT__unnamedblk3__DOT__pat;
    tb_p1__DOT__unnamedblk3__DOT__pat = 0;
    IData/*31:0*/ tb_p1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__i;
    tb_p1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__i = 0;
    IData/*31:0*/ tb_p1__DOT__unnamedblk1_2__DOT____Vrepeat1;
    tb_p1__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    IData/*31:0*/ tb_p1__DOT__unnamedblk1_3__DOT____Vrepeat2;
    tb_p1__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    IData/*31:0*/ tb_p1__DOT__unnamedblk1_4__DOT____Vrepeat3;
    tb_p1__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0;
    CData/*3:0*/ tb_p1__DOT__unnamedblk5__DOT__pat;
    tb_p1__DOT__unnamedblk5__DOT__pat = 0;
    IData/*31:0*/ tb_p1__DOT__unnamedblk5__DOT__unnamedblk6__DOT__i;
    tb_p1__DOT__unnamedblk5__DOT__unnamedblk6__DOT__i = 0;
    IData/*31:0*/ tb_p1__DOT__unnamedblk1_5__DOT____Vrepeat4;
    tb_p1__DOT__unnamedblk1_5__DOT____Vrepeat4 = 0;
    CData/*0:0*/ __Vtask_tb_p1__DOT__stream__b_0;
    __Vtask_tb_p1__DOT__stream__b_0 = 0;
    CData/*0:0*/ __Vtask_tb_p1__DOT__stream__exp_1;
    __Vtask_tb_p1__DOT__stream__exp_1 = 0;
    CData/*0:0*/ __Vtask_tb_p1__DOT__send__b_2;
    __Vtask_tb_p1__DOT__send__b_2 = 0;
    CData/*0:0*/ __Vtask_tb_p1__DOT__send__expect_found_3;
    __Vtask_tb_p1__DOT__send__expect_found_3 = 0;
    CData/*0:0*/ __Vtask_tb_p1__DOT__stream__b_4;
    __Vtask_tb_p1__DOT__stream__b_4 = 0;
    CData/*0:0*/ __Vtask_tb_p1__DOT__stream__exp_5;
    __Vtask_tb_p1__DOT__stream__exp_5 = 0;
    CData/*0:0*/ __Vtask_tb_p1__DOT__send__b_6;
    __Vtask_tb_p1__DOT__send__b_6 = 0;
    CData/*0:0*/ __Vtask_tb_p1__DOT__send__expect_found_7;
    __Vtask_tb_p1__DOT__send__expect_found_7 = 0;
    CData/*0:0*/ __Vtask_tb_p1__DOT__stream__b_8;
    __Vtask_tb_p1__DOT__stream__b_8 = 0;
    CData/*0:0*/ __Vtask_tb_p1__DOT__stream__exp_9;
    __Vtask_tb_p1__DOT__stream__exp_9 = 0;
    CData/*0:0*/ __Vtask_tb_p1__DOT__send__b_10;
    __Vtask_tb_p1__DOT__send__b_10 = 0;
    CData/*0:0*/ __Vtask_tb_p1__DOT__send__expect_found_11;
    __Vtask_tb_p1__DOT__send__expect_found_11 = 0;
    CData/*0:0*/ __Vtask_tb_p1__DOT__stream__b_12;
    __Vtask_tb_p1__DOT__stream__b_12 = 0;
    CData/*0:0*/ __Vtask_tb_p1__DOT__stream__exp_13;
    __Vtask_tb_p1__DOT__stream__exp_13 = 0;
    CData/*0:0*/ __Vtask_tb_p1__DOT__send__b_14;
    __Vtask_tb_p1__DOT__send__b_14 = 0;
    CData/*0:0*/ __Vtask_tb_p1__DOT__send__expect_found_15;
    __Vtask_tb_p1__DOT__send__expect_found_15 = 0;
    CData/*0:0*/ __Vtask_tb_p1__DOT__stream__b_16;
    __Vtask_tb_p1__DOT__stream__b_16 = 0;
    CData/*0:0*/ __Vtask_tb_p1__DOT__stream__exp_17;
    __Vtask_tb_p1__DOT__stream__exp_17 = 0;
    CData/*0:0*/ __Vtask_tb_p1__DOT__send__b_18;
    __Vtask_tb_p1__DOT__send__b_18 = 0;
    CData/*0:0*/ __Vtask_tb_p1__DOT__send__expect_found_19;
    __Vtask_tb_p1__DOT__send__expect_found_19 = 0;
    CData/*0:0*/ __Vtask_tb_p1__DOT__stream__b_20;
    __Vtask_tb_p1__DOT__stream__b_20 = 0;
    CData/*0:0*/ __Vtask_tb_p1__DOT__stream__exp_21;
    __Vtask_tb_p1__DOT__stream__exp_21 = 0;
    CData/*0:0*/ __Vtask_tb_p1__DOT__send__b_22;
    __Vtask_tb_p1__DOT__send__b_22 = 0;
    CData/*0:0*/ __Vtask_tb_p1__DOT__send__expect_found_23;
    __Vtask_tb_p1__DOT__send__expect_found_23 = 0;
    CData/*0:0*/ __Vtask_tb_p1__DOT__stream__b_24;
    __Vtask_tb_p1__DOT__stream__b_24 = 0;
    CData/*0:0*/ __Vtask_tb_p1__DOT__stream__exp_25;
    __Vtask_tb_p1__DOT__stream__exp_25 = 0;
    CData/*0:0*/ __Vtask_tb_p1__DOT__send__b_26;
    __Vtask_tb_p1__DOT__send__b_26 = 0;
    CData/*0:0*/ __Vtask_tb_p1__DOT__send__expect_found_27;
    __Vtask_tb_p1__DOT__send__expect_found_27 = 0;
    CData/*0:0*/ __Vtask_tb_p1__DOT__stream__b_28;
    __Vtask_tb_p1__DOT__stream__b_28 = 0;
    CData/*0:0*/ __Vtask_tb_p1__DOT__stream__exp_29;
    __Vtask_tb_p1__DOT__stream__exp_29 = 0;
    CData/*0:0*/ __Vtask_tb_p1__DOT__send__b_30;
    __Vtask_tb_p1__DOT__send__b_30 = 0;
    CData/*0:0*/ __Vtask_tb_p1__DOT__send__expect_found_31;
    __Vtask_tb_p1__DOT__send__expect_found_31 = 0;
    CData/*0:0*/ __Vtask_tb_p1__DOT__stream__b_32;
    __Vtask_tb_p1__DOT__stream__b_32 = 0;
    CData/*0:0*/ __Vtask_tb_p1__DOT__stream__exp_33;
    __Vtask_tb_p1__DOT__stream__exp_33 = 0;
    CData/*0:0*/ __Vtask_tb_p1__DOT__send__b_34;
    __Vtask_tb_p1__DOT__send__b_34 = 0;
    CData/*0:0*/ __Vtask_tb_p1__DOT__send__expect_found_35;
    __Vtask_tb_p1__DOT__send__expect_found_35 = 0;
    CData/*0:0*/ __Vtask_tb_p1__DOT__stream__b_36;
    __Vtask_tb_p1__DOT__stream__b_36 = 0;
    CData/*0:0*/ __Vtask_tb_p1__DOT__stream__exp_37;
    __Vtask_tb_p1__DOT__stream__exp_37 = 0;
    CData/*0:0*/ __Vtask_tb_p1__DOT__send__b_38;
    __Vtask_tb_p1__DOT__send__b_38 = 0;
    CData/*0:0*/ __Vtask_tb_p1__DOT__send__expect_found_39;
    __Vtask_tb_p1__DOT__send__expect_found_39 = 0;
    // Body
    vlSelfRef.tb_p1__DOT__rst_ni = 0U;
    vlSelfRef.tb_p1__DOT__bit_i = 0U;
    tb_p1__DOT__shreg = 0U;
    tb_p1__DOT__unnamedblk1_1__DOT____Vrepeat0 = 2U;
    while (VL_LTS_III(32, 0U, tb_p1__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vtb_p1___024root____VbeforeTrig_h7811a6bb__0(vlSelf, 
                                                     "@(posedge tb_p1.clk_i)");
        co_await vlSelfRef.__VtrigSched_h7811a6bb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_p1.clk_i)", 
                                                             "tb/tb_p1.sv", 
                                                             51);
        tb_p1__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (tb_p1__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    Vtb_p1___024root____VbeforeTrig_h7811a786__0(vlSelf, 
                                                 "@(negedge tb_p1.clk_i)");
    co_await vlSelfRef.__VtrigSched_h7811a786__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_p1.clk_i)", 
                                                         "tb/tb_p1.sv", 
                                                         52);
    vlSelfRef.tb_p1__DOT__rst_ni = 1U;
    tb_p1__DOT__unnamedblk1__DOT__pat = 0x1b4dU;
    tb_p1__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 0x0000000cU;
    if (VL_UNLIKELY(((0U != (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__count_q))))) {
        VL_WRITEF_NX("  FAIL count_o not 0 after reset\n",0);
        vlSelfRef.tb_p1__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.tb_p1__DOT__errors);
    }
    while (VL_LTES_III(32, 0U, tb_p1__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i)) {
        __Vtask_tb_p1__DOT__stream__b_0 = ((0x0cU >= 
                                            (0x0000000fU 
                                             & tb_p1__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i)) 
                                           && (1U & 
                                               ((IData)(tb_p1__DOT__unnamedblk1__DOT__pat) 
                                                >> 
                                                (0x0000000fU 
                                                 & tb_p1__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i))));
        __Vtask_tb_p1__DOT__stream__exp_1 = 0U;
        __Vtask_tb_p1__DOT__stream__exp_1 = ((6U == 
                                              (7U & (IData)(tb_p1__DOT__shreg))) 
                                             & (IData)(__Vtask_tb_p1__DOT__stream__b_0));
        tb_p1__DOT__shreg = ((0x0000000eU & ((IData)(tb_p1__DOT__shreg) 
                                             << 1U)) 
                             | (IData)(__Vtask_tb_p1__DOT__stream__b_0));
        __Vtask_tb_p1__DOT__send__expect_found_3 = __Vtask_tb_p1__DOT__stream__exp_1;
        __Vtask_tb_p1__DOT__send__b_2 = __Vtask_tb_p1__DOT__stream__b_0;
        Vtb_p1___024root____VbeforeTrig_h7811a786__0(vlSelf, 
                                                     "@(negedge tb_p1.clk_i)");
        co_await vlSelfRef.__VtrigSched_h7811a786__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_p1.clk_i)", 
                                                             "tb/tb_p1.sv", 
                                                             21);
        vlSelfRef.tb_p1__DOT__bit_i = __Vtask_tb_p1__DOT__send__b_2;
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "tb/tb_p1.sv", 
                                             23);
        if (VL_UNLIKELY(((Vtb_p1__ConstPool__TABLE_2
                          [vlSelfRef.__Vdfg_Regularize_4] 
                          != (IData)(__Vtask_tb_p1__DOT__send__expect_found_3))))) {
            VL_WRITEF_NX("  FAIL cycle %0d: sent %0b, found_o=%0b expected %0b\n",4
                         , '~',32,vlSelfRef.tb_p1__DOT__seen
                         , '#',1,(IData)(__Vtask_tb_p1__DOT__send__b_2)
                         , '#',1,Vtb_p1__ConstPool__TABLE_2
                         [vlSelfRef.__Vdfg_Regularize_4]
                         , '#',1,__Vtask_tb_p1__DOT__send__expect_found_3);
            vlSelfRef.tb_p1__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.tb_p1__DOT__errors);
        }
        Vtb_p1___024root____VbeforeTrig_h7811a6bb__0(vlSelf, 
                                                     "@(posedge tb_p1.clk_i)");
        co_await vlSelfRef.__VtrigSched_h7811a6bb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_p1.clk_i)", 
                                                             "tb/tb_p1.sv", 
                                                             31);
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "tb/tb_p1.sv", 
                                             31);
        if (((IData)(__Vtask_tb_p1__DOT__send__expect_found_3) 
             & VL_GTS_III(32, 0x000000ffU, vlSelfRef.tb_p1__DOT__exp_count))) {
            vlSelfRef.tb_p1__DOT__exp_count = ((IData)(1U) 
                                               + vlSelfRef.tb_p1__DOT__exp_count);
        }
        if (VL_UNLIKELY((((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__count_q) 
                          != (0x000000ffU & vlSelfRef.tb_p1__DOT__exp_count))))) {
            VL_WRITEF_NX("  FAIL cycle %0d: count_o=%0d expected %0d\n",3
                         , '~',32,vlSelfRef.tb_p1__DOT__seen
                         , '#',8,(IData)(vlSelfRef.tb_p1__DOT__dut__DOT__count_q)
                         , '~',32,vlSelfRef.tb_p1__DOT__exp_count);
            vlSelfRef.tb_p1__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.tb_p1__DOT__errors);
        }
        vlSelfRef.tb_p1__DOT__seen = ((IData)(1U) + vlSelfRef.tb_p1__DOT__seen);
        tb_p1__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i 
            = (tb_p1__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i 
               - (IData)(1U));
    }
    if (VL_UNLIKELY(((3U != vlSelfRef.tb_p1__DOT__exp_count)))) {
        VL_WRITEF_NX("  INTERNAL: model expected 3 matches, got %0d\n",1
                     , '~',32,vlSelfRef.tb_p1__DOT__exp_count);
        vlSelfRef.tb_p1__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.tb_p1__DOT__errors);
    }
    tb_p1__DOT__unnamedblk3__DOT__pat = 0x1b6dU;
    tb_p1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__i = 0x0000000cU;
    while (VL_LTES_III(32, 0U, tb_p1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__i)) {
        __Vtask_tb_p1__DOT__stream__b_4 = ((0x0cU >= 
                                            (0x0000000fU 
                                             & tb_p1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__i)) 
                                           && (1U & 
                                               ((IData)(tb_p1__DOT__unnamedblk3__DOT__pat) 
                                                >> 
                                                (0x0000000fU 
                                                 & tb_p1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__i))));
        __Vtask_tb_p1__DOT__stream__exp_5 = 0U;
        __Vtask_tb_p1__DOT__stream__exp_5 = ((6U == 
                                              (7U & (IData)(tb_p1__DOT__shreg))) 
                                             & (IData)(__Vtask_tb_p1__DOT__stream__b_4));
        tb_p1__DOT__shreg = ((0x0000000eU & ((IData)(tb_p1__DOT__shreg) 
                                             << 1U)) 
                             | (IData)(__Vtask_tb_p1__DOT__stream__b_4));
        __Vtask_tb_p1__DOT__send__expect_found_7 = __Vtask_tb_p1__DOT__stream__exp_5;
        __Vtask_tb_p1__DOT__send__b_6 = __Vtask_tb_p1__DOT__stream__b_4;
        Vtb_p1___024root____VbeforeTrig_h7811a786__0(vlSelf, 
                                                     "@(negedge tb_p1.clk_i)");
        co_await vlSelfRef.__VtrigSched_h7811a786__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_p1.clk_i)", 
                                                             "tb/tb_p1.sv", 
                                                             21);
        vlSelfRef.tb_p1__DOT__bit_i = __Vtask_tb_p1__DOT__send__b_6;
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "tb/tb_p1.sv", 
                                             23);
        if (VL_UNLIKELY(((Vtb_p1__ConstPool__TABLE_2
                          [vlSelfRef.__Vdfg_Regularize_4] 
                          != (IData)(__Vtask_tb_p1__DOT__send__expect_found_7))))) {
            VL_WRITEF_NX("  FAIL cycle %0d: sent %0b, found_o=%0b expected %0b\n",4
                         , '~',32,vlSelfRef.tb_p1__DOT__seen
                         , '#',1,(IData)(__Vtask_tb_p1__DOT__send__b_6)
                         , '#',1,Vtb_p1__ConstPool__TABLE_2
                         [vlSelfRef.__Vdfg_Regularize_4]
                         , '#',1,__Vtask_tb_p1__DOT__send__expect_found_7);
            vlSelfRef.tb_p1__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.tb_p1__DOT__errors);
        }
        Vtb_p1___024root____VbeforeTrig_h7811a6bb__0(vlSelf, 
                                                     "@(posedge tb_p1.clk_i)");
        co_await vlSelfRef.__VtrigSched_h7811a6bb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_p1.clk_i)", 
                                                             "tb/tb_p1.sv", 
                                                             31);
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "tb/tb_p1.sv", 
                                             31);
        if (((IData)(__Vtask_tb_p1__DOT__send__expect_found_7) 
             & VL_GTS_III(32, 0x000000ffU, vlSelfRef.tb_p1__DOT__exp_count))) {
            vlSelfRef.tb_p1__DOT__exp_count = ((IData)(1U) 
                                               + vlSelfRef.tb_p1__DOT__exp_count);
        }
        if (VL_UNLIKELY((((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__count_q) 
                          != (0x000000ffU & vlSelfRef.tb_p1__DOT__exp_count))))) {
            VL_WRITEF_NX("  FAIL cycle %0d: count_o=%0d expected %0d\n",3
                         , '~',32,vlSelfRef.tb_p1__DOT__seen
                         , '#',8,(IData)(vlSelfRef.tb_p1__DOT__dut__DOT__count_q)
                         , '~',32,vlSelfRef.tb_p1__DOT__exp_count);
            vlSelfRef.tb_p1__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.tb_p1__DOT__errors);
        }
        vlSelfRef.tb_p1__DOT__seen = ((IData)(1U) + vlSelfRef.tb_p1__DOT__seen);
        tb_p1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__i 
            = (tb_p1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__i 
               - (IData)(1U));
    }
    tb_p1__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0x0000000cU;
    while (VL_LTS_III(32, 0U, tb_p1__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        __Vtask_tb_p1__DOT__stream__b_8 = 1U;
        __Vtask_tb_p1__DOT__stream__exp_9 = 0U;
        __Vtask_tb_p1__DOT__stream__exp_9 = ((6U == 
                                              (7U & (IData)(tb_p1__DOT__shreg))) 
                                             & (IData)(__Vtask_tb_p1__DOT__stream__b_8));
        tb_p1__DOT__shreg = ((0x0000000eU & ((IData)(tb_p1__DOT__shreg) 
                                             << 1U)) 
                             | (IData)(__Vtask_tb_p1__DOT__stream__b_8));
        __Vtask_tb_p1__DOT__send__expect_found_11 = __Vtask_tb_p1__DOT__stream__exp_9;
        __Vtask_tb_p1__DOT__send__b_10 = __Vtask_tb_p1__DOT__stream__b_8;
        Vtb_p1___024root____VbeforeTrig_h7811a786__0(vlSelf, 
                                                     "@(negedge tb_p1.clk_i)");
        co_await vlSelfRef.__VtrigSched_h7811a786__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_p1.clk_i)", 
                                                             "tb/tb_p1.sv", 
                                                             21);
        vlSelfRef.tb_p1__DOT__bit_i = __Vtask_tb_p1__DOT__send__b_10;
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "tb/tb_p1.sv", 
                                             23);
        if (VL_UNLIKELY(((Vtb_p1__ConstPool__TABLE_2
                          [vlSelfRef.__Vdfg_Regularize_4] 
                          != (IData)(__Vtask_tb_p1__DOT__send__expect_found_11))))) {
            VL_WRITEF_NX("  FAIL cycle %0d: sent %0b, found_o=%0b expected %0b\n",4
                         , '~',32,vlSelfRef.tb_p1__DOT__seen
                         , '#',1,(IData)(__Vtask_tb_p1__DOT__send__b_10)
                         , '#',1,Vtb_p1__ConstPool__TABLE_2
                         [vlSelfRef.__Vdfg_Regularize_4]
                         , '#',1,__Vtask_tb_p1__DOT__send__expect_found_11);
            vlSelfRef.tb_p1__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.tb_p1__DOT__errors);
        }
        Vtb_p1___024root____VbeforeTrig_h7811a6bb__0(vlSelf, 
                                                     "@(posedge tb_p1.clk_i)");
        co_await vlSelfRef.__VtrigSched_h7811a6bb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_p1.clk_i)", 
                                                             "tb/tb_p1.sv", 
                                                             31);
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "tb/tb_p1.sv", 
                                             31);
        if (((IData)(__Vtask_tb_p1__DOT__send__expect_found_11) 
             & VL_GTS_III(32, 0x000000ffU, vlSelfRef.tb_p1__DOT__exp_count))) {
            vlSelfRef.tb_p1__DOT__exp_count = ((IData)(1U) 
                                               + vlSelfRef.tb_p1__DOT__exp_count);
        }
        if (VL_UNLIKELY((((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__count_q) 
                          != (0x000000ffU & vlSelfRef.tb_p1__DOT__exp_count))))) {
            VL_WRITEF_NX("  FAIL cycle %0d: count_o=%0d expected %0d\n",3
                         , '~',32,vlSelfRef.tb_p1__DOT__seen
                         , '#',8,(IData)(vlSelfRef.tb_p1__DOT__dut__DOT__count_q)
                         , '~',32,vlSelfRef.tb_p1__DOT__exp_count);
            vlSelfRef.tb_p1__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.tb_p1__DOT__errors);
        }
        vlSelfRef.tb_p1__DOT__seen = ((IData)(1U) + vlSelfRef.tb_p1__DOT__seen);
        tb_p1__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (tb_p1__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    __Vtask_tb_p1__DOT__stream__b_12 = 0U;
    __Vtask_tb_p1__DOT__stream__exp_13 = 0U;
    __Vtask_tb_p1__DOT__stream__exp_13 = ((6U == (7U 
                                                  & (IData)(tb_p1__DOT__shreg))) 
                                          & (IData)(__Vtask_tb_p1__DOT__stream__b_12));
    tb_p1__DOT__shreg = ((0x0000000eU & ((IData)(tb_p1__DOT__shreg) 
                                         << 1U)) | (IData)(__Vtask_tb_p1__DOT__stream__b_12));
    __Vtask_tb_p1__DOT__send__expect_found_15 = __Vtask_tb_p1__DOT__stream__exp_13;
    __Vtask_tb_p1__DOT__send__b_14 = __Vtask_tb_p1__DOT__stream__b_12;
    Vtb_p1___024root____VbeforeTrig_h7811a786__0(vlSelf, 
                                                 "@(negedge tb_p1.clk_i)");
    co_await vlSelfRef.__VtrigSched_h7811a786__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_p1.clk_i)", 
                                                         "tb/tb_p1.sv", 
                                                         21);
    vlSelfRef.tb_p1__DOT__bit_i = __Vtask_tb_p1__DOT__send__b_14;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_p1.sv", 
                                         23);
    if (VL_UNLIKELY(((Vtb_p1__ConstPool__TABLE_2[vlSelfRef.__Vdfg_Regularize_4] 
                      != (IData)(__Vtask_tb_p1__DOT__send__expect_found_15))))) {
        VL_WRITEF_NX("  FAIL cycle %0d: sent %0b, found_o=%0b expected %0b\n",4
                     , '~',32,vlSelfRef.tb_p1__DOT__seen
                     , '#',1,(IData)(__Vtask_tb_p1__DOT__send__b_14)
                     , '#',1,Vtb_p1__ConstPool__TABLE_2
                     [vlSelfRef.__Vdfg_Regularize_4]
                     , '#',1,__Vtask_tb_p1__DOT__send__expect_found_15);
        vlSelfRef.tb_p1__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.tb_p1__DOT__errors);
    }
    Vtb_p1___024root____VbeforeTrig_h7811a6bb__0(vlSelf, 
                                                 "@(posedge tb_p1.clk_i)");
    co_await vlSelfRef.__VtrigSched_h7811a6bb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_p1.clk_i)", 
                                                         "tb/tb_p1.sv", 
                                                         31);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_p1.sv", 
                                         31);
    if (((IData)(__Vtask_tb_p1__DOT__send__expect_found_15) 
         & VL_GTS_III(32, 0x000000ffU, vlSelfRef.tb_p1__DOT__exp_count))) {
        vlSelfRef.tb_p1__DOT__exp_count = ((IData)(1U) 
                                           + vlSelfRef.tb_p1__DOT__exp_count);
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__count_q) 
                      != (0x000000ffU & vlSelfRef.tb_p1__DOT__exp_count))))) {
        VL_WRITEF_NX("  FAIL cycle %0d: count_o=%0d expected %0d\n",3
                     , '~',32,vlSelfRef.tb_p1__DOT__seen
                     , '#',8,(IData)(vlSelfRef.tb_p1__DOT__dut__DOT__count_q)
                     , '~',32,vlSelfRef.tb_p1__DOT__exp_count);
        vlSelfRef.tb_p1__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.tb_p1__DOT__errors);
    }
    vlSelfRef.tb_p1__DOT__seen = ((IData)(1U) + vlSelfRef.tb_p1__DOT__seen);
    __Vtask_tb_p1__DOT__stream__b_16 = 1U;
    __Vtask_tb_p1__DOT__stream__exp_17 = 0U;
    __Vtask_tb_p1__DOT__stream__exp_17 = ((6U == (7U 
                                                  & (IData)(tb_p1__DOT__shreg))) 
                                          & (IData)(__Vtask_tb_p1__DOT__stream__b_16));
    tb_p1__DOT__shreg = ((0x0000000eU & ((IData)(tb_p1__DOT__shreg) 
                                         << 1U)) | (IData)(__Vtask_tb_p1__DOT__stream__b_16));
    __Vtask_tb_p1__DOT__send__expect_found_19 = __Vtask_tb_p1__DOT__stream__exp_17;
    __Vtask_tb_p1__DOT__send__b_18 = __Vtask_tb_p1__DOT__stream__b_16;
    Vtb_p1___024root____VbeforeTrig_h7811a786__0(vlSelf, 
                                                 "@(negedge tb_p1.clk_i)");
    co_await vlSelfRef.__VtrigSched_h7811a786__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_p1.clk_i)", 
                                                         "tb/tb_p1.sv", 
                                                         21);
    vlSelfRef.tb_p1__DOT__bit_i = __Vtask_tb_p1__DOT__send__b_18;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_p1.sv", 
                                         23);
    if (VL_UNLIKELY(((Vtb_p1__ConstPool__TABLE_2[vlSelfRef.__Vdfg_Regularize_4] 
                      != (IData)(__Vtask_tb_p1__DOT__send__expect_found_19))))) {
        VL_WRITEF_NX("  FAIL cycle %0d: sent %0b, found_o=%0b expected %0b\n",4
                     , '~',32,vlSelfRef.tb_p1__DOT__seen
                     , '#',1,(IData)(__Vtask_tb_p1__DOT__send__b_18)
                     , '#',1,Vtb_p1__ConstPool__TABLE_2
                     [vlSelfRef.__Vdfg_Regularize_4]
                     , '#',1,__Vtask_tb_p1__DOT__send__expect_found_19);
        vlSelfRef.tb_p1__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.tb_p1__DOT__errors);
    }
    Vtb_p1___024root____VbeforeTrig_h7811a6bb__0(vlSelf, 
                                                 "@(posedge tb_p1.clk_i)");
    co_await vlSelfRef.__VtrigSched_h7811a6bb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_p1.clk_i)", 
                                                         "tb/tb_p1.sv", 
                                                         31);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_p1.sv", 
                                         31);
    if (((IData)(__Vtask_tb_p1__DOT__send__expect_found_19) 
         & VL_GTS_III(32, 0x000000ffU, vlSelfRef.tb_p1__DOT__exp_count))) {
        vlSelfRef.tb_p1__DOT__exp_count = ((IData)(1U) 
                                           + vlSelfRef.tb_p1__DOT__exp_count);
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__count_q) 
                      != (0x000000ffU & vlSelfRef.tb_p1__DOT__exp_count))))) {
        VL_WRITEF_NX("  FAIL cycle %0d: count_o=%0d expected %0d\n",3
                     , '~',32,vlSelfRef.tb_p1__DOT__seen
                     , '#',8,(IData)(vlSelfRef.tb_p1__DOT__dut__DOT__count_q)
                     , '~',32,vlSelfRef.tb_p1__DOT__exp_count);
        vlSelfRef.tb_p1__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.tb_p1__DOT__errors);
    }
    vlSelfRef.tb_p1__DOT__seen = ((IData)(1U) + vlSelfRef.tb_p1__DOT__seen);
    tb_p1__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0x00000190U;
    while (VL_LTS_III(32, 0U, tb_p1__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
        vlSelfRef.tb_p1__DOT____VlemExpr_0 = VL_URANDOM_RANGE_I(0U, 1U);
        __Vtask_tb_p1__DOT__stream__b_20 = (1U & vlSelfRef.tb_p1__DOT____VlemExpr_0);
        __Vtask_tb_p1__DOT__stream__exp_21 = 0U;
        __Vtask_tb_p1__DOT__stream__exp_21 = ((6U == 
                                               (7U 
                                                & (IData)(tb_p1__DOT__shreg))) 
                                              & (IData)(__Vtask_tb_p1__DOT__stream__b_20));
        tb_p1__DOT__shreg = ((0x0000000eU & ((IData)(tb_p1__DOT__shreg) 
                                             << 1U)) 
                             | (IData)(__Vtask_tb_p1__DOT__stream__b_20));
        __Vtask_tb_p1__DOT__send__expect_found_23 = __Vtask_tb_p1__DOT__stream__exp_21;
        __Vtask_tb_p1__DOT__send__b_22 = __Vtask_tb_p1__DOT__stream__b_20;
        Vtb_p1___024root____VbeforeTrig_h7811a786__0(vlSelf, 
                                                     "@(negedge tb_p1.clk_i)");
        co_await vlSelfRef.__VtrigSched_h7811a786__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_p1.clk_i)", 
                                                             "tb/tb_p1.sv", 
                                                             21);
        vlSelfRef.tb_p1__DOT__bit_i = __Vtask_tb_p1__DOT__send__b_22;
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "tb/tb_p1.sv", 
                                             23);
        if (VL_UNLIKELY(((Vtb_p1__ConstPool__TABLE_2
                          [vlSelfRef.__Vdfg_Regularize_4] 
                          != (IData)(__Vtask_tb_p1__DOT__send__expect_found_23))))) {
            VL_WRITEF_NX("  FAIL cycle %0d: sent %0b, found_o=%0b expected %0b\n",4
                         , '~',32,vlSelfRef.tb_p1__DOT__seen
                         , '#',1,(IData)(__Vtask_tb_p1__DOT__send__b_22)
                         , '#',1,Vtb_p1__ConstPool__TABLE_2
                         [vlSelfRef.__Vdfg_Regularize_4]
                         , '#',1,__Vtask_tb_p1__DOT__send__expect_found_23);
            vlSelfRef.tb_p1__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.tb_p1__DOT__errors);
        }
        Vtb_p1___024root____VbeforeTrig_h7811a6bb__0(vlSelf, 
                                                     "@(posedge tb_p1.clk_i)");
        co_await vlSelfRef.__VtrigSched_h7811a6bb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_p1.clk_i)", 
                                                             "tb/tb_p1.sv", 
                                                             31);
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "tb/tb_p1.sv", 
                                             31);
        if (((IData)(__Vtask_tb_p1__DOT__send__expect_found_23) 
             & VL_GTS_III(32, 0x000000ffU, vlSelfRef.tb_p1__DOT__exp_count))) {
            vlSelfRef.tb_p1__DOT__exp_count = ((IData)(1U) 
                                               + vlSelfRef.tb_p1__DOT__exp_count);
        }
        if (VL_UNLIKELY((((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__count_q) 
                          != (0x000000ffU & vlSelfRef.tb_p1__DOT__exp_count))))) {
            VL_WRITEF_NX("  FAIL cycle %0d: count_o=%0d expected %0d\n",3
                         , '~',32,vlSelfRef.tb_p1__DOT__seen
                         , '#',8,(IData)(vlSelfRef.tb_p1__DOT__dut__DOT__count_q)
                         , '~',32,vlSelfRef.tb_p1__DOT__exp_count);
            vlSelfRef.tb_p1__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.tb_p1__DOT__errors);
        }
        vlSelfRef.tb_p1__DOT__seen = ((IData)(1U) + vlSelfRef.tb_p1__DOT__seen);
        tb_p1__DOT__unnamedblk1_3__DOT____Vrepeat2 
            = (tb_p1__DOT__unnamedblk1_3__DOT____Vrepeat2 
               - (IData)(1U));
    }
    Vtb_p1___024root____VbeforeTrig_h7811a786__0(vlSelf, 
                                                 "@(negedge tb_p1.clk_i)");
    co_await vlSelfRef.__VtrigSched_h7811a786__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_p1.clk_i)", 
                                                         "tb/tb_p1.sv", 
                                                         87);
    vlSelfRef.tb_p1__DOT__rst_ni = 0U;
    tb_p1__DOT__unnamedblk1_4__DOT____Vrepeat3 = 2U;
    while (VL_LTS_III(32, 0U, tb_p1__DOT__unnamedblk1_4__DOT____Vrepeat3)) {
        Vtb_p1___024root____VbeforeTrig_h7811a6bb__0(vlSelf, 
                                                     "@(posedge tb_p1.clk_i)");
        co_await vlSelfRef.__VtrigSched_h7811a6bb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_p1.clk_i)", 
                                                             "tb/tb_p1.sv", 
                                                             89);
        tb_p1__DOT__unnamedblk1_4__DOT____Vrepeat3 
            = (tb_p1__DOT__unnamedblk1_4__DOT____Vrepeat3 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_p1.sv", 
                                         90);
    if (VL_UNLIKELY(((0U != (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__count_q))))) {
        VL_WRITEF_NX("  FAIL count_o=%0d after mid-stream reset, expected 0\n",1
                     , '#',8,vlSelfRef.tb_p1__DOT__dut__DOT__count_q);
        vlSelfRef.tb_p1__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.tb_p1__DOT__errors);
    }
    Vtb_p1___024root____VbeforeTrig_h7811a786__0(vlSelf, 
                                                 "@(negedge tb_p1.clk_i)");
    co_await vlSelfRef.__VtrigSched_h7811a786__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_p1.clk_i)", 
                                                         "tb/tb_p1.sv", 
                                                         95);
    vlSelfRef.tb_p1__DOT__rst_ni = 1U;
    tb_p1__DOT__shreg = 0U;
    vlSelfRef.tb_p1__DOT__exp_count = 0U;
    tb_p1__DOT__unnamedblk5__DOT__pat = 0x0dU;
    tb_p1__DOT__unnamedblk5__DOT__unnamedblk6__DOT__i = 3U;
    while (VL_LTES_III(32, 0U, tb_p1__DOT__unnamedblk5__DOT__unnamedblk6__DOT__i)) {
        __Vtask_tb_p1__DOT__stream__b_24 = (1U & ((IData)(tb_p1__DOT__unnamedblk5__DOT__pat) 
                                                  >> 
                                                  (3U 
                                                   & tb_p1__DOT__unnamedblk5__DOT__unnamedblk6__DOT__i)));
        __Vtask_tb_p1__DOT__stream__exp_25 = 0U;
        __Vtask_tb_p1__DOT__stream__exp_25 = ((6U == 
                                               (7U 
                                                & (IData)(tb_p1__DOT__shreg))) 
                                              & (IData)(__Vtask_tb_p1__DOT__stream__b_24));
        tb_p1__DOT__shreg = ((0x0000000eU & ((IData)(tb_p1__DOT__shreg) 
                                             << 1U)) 
                             | (IData)(__Vtask_tb_p1__DOT__stream__b_24));
        __Vtask_tb_p1__DOT__send__expect_found_27 = __Vtask_tb_p1__DOT__stream__exp_25;
        __Vtask_tb_p1__DOT__send__b_26 = __Vtask_tb_p1__DOT__stream__b_24;
        Vtb_p1___024root____VbeforeTrig_h7811a786__0(vlSelf, 
                                                     "@(negedge tb_p1.clk_i)");
        co_await vlSelfRef.__VtrigSched_h7811a786__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_p1.clk_i)", 
                                                             "tb/tb_p1.sv", 
                                                             21);
        vlSelfRef.tb_p1__DOT__bit_i = __Vtask_tb_p1__DOT__send__b_26;
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "tb/tb_p1.sv", 
                                             23);
        if (VL_UNLIKELY(((Vtb_p1__ConstPool__TABLE_2
                          [vlSelfRef.__Vdfg_Regularize_4] 
                          != (IData)(__Vtask_tb_p1__DOT__send__expect_found_27))))) {
            VL_WRITEF_NX("  FAIL cycle %0d: sent %0b, found_o=%0b expected %0b\n",4
                         , '~',32,vlSelfRef.tb_p1__DOT__seen
                         , '#',1,(IData)(__Vtask_tb_p1__DOT__send__b_26)
                         , '#',1,Vtb_p1__ConstPool__TABLE_2
                         [vlSelfRef.__Vdfg_Regularize_4]
                         , '#',1,__Vtask_tb_p1__DOT__send__expect_found_27);
            vlSelfRef.tb_p1__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.tb_p1__DOT__errors);
        }
        Vtb_p1___024root____VbeforeTrig_h7811a6bb__0(vlSelf, 
                                                     "@(posedge tb_p1.clk_i)");
        co_await vlSelfRef.__VtrigSched_h7811a6bb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_p1.clk_i)", 
                                                             "tb/tb_p1.sv", 
                                                             31);
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "tb/tb_p1.sv", 
                                             31);
        if (((IData)(__Vtask_tb_p1__DOT__send__expect_found_27) 
             & VL_GTS_III(32, 0x000000ffU, vlSelfRef.tb_p1__DOT__exp_count))) {
            vlSelfRef.tb_p1__DOT__exp_count = ((IData)(1U) 
                                               + vlSelfRef.tb_p1__DOT__exp_count);
        }
        if (VL_UNLIKELY((((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__count_q) 
                          != (0x000000ffU & vlSelfRef.tb_p1__DOT__exp_count))))) {
            VL_WRITEF_NX("  FAIL cycle %0d: count_o=%0d expected %0d\n",3
                         , '~',32,vlSelfRef.tb_p1__DOT__seen
                         , '#',8,(IData)(vlSelfRef.tb_p1__DOT__dut__DOT__count_q)
                         , '~',32,vlSelfRef.tb_p1__DOT__exp_count);
            vlSelfRef.tb_p1__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.tb_p1__DOT__errors);
        }
        vlSelfRef.tb_p1__DOT__seen = ((IData)(1U) + vlSelfRef.tb_p1__DOT__seen);
        tb_p1__DOT__unnamedblk5__DOT__unnamedblk6__DOT__i 
            = (tb_p1__DOT__unnamedblk5__DOT__unnamedblk6__DOT__i 
               - (IData)(1U));
    }
    if (VL_UNLIKELY(((1U != (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__count_q))))) {
        VL_WRITEF_NX("  FAIL detector did not restart correctly after reset\n",0);
        vlSelfRef.tb_p1__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.tb_p1__DOT__errors);
    }
    tb_p1__DOT__unnamedblk1_5__DOT____Vrepeat4 = 0x00000384U;
    while (VL_LTS_III(32, 0U, tb_p1__DOT__unnamedblk1_5__DOT____Vrepeat4)) {
        __Vtask_tb_p1__DOT__stream__b_28 = 1U;
        __Vtask_tb_p1__DOT__stream__exp_29 = 0U;
        __Vtask_tb_p1__DOT__stream__exp_29 = ((6U == 
                                               (7U 
                                                & (IData)(tb_p1__DOT__shreg))) 
                                              & (IData)(__Vtask_tb_p1__DOT__stream__b_28));
        tb_p1__DOT__shreg = ((0x0000000eU & ((IData)(tb_p1__DOT__shreg) 
                                             << 1U)) 
                             | (IData)(__Vtask_tb_p1__DOT__stream__b_28));
        __Vtask_tb_p1__DOT__send__expect_found_31 = __Vtask_tb_p1__DOT__stream__exp_29;
        __Vtask_tb_p1__DOT__send__b_30 = __Vtask_tb_p1__DOT__stream__b_28;
        Vtb_p1___024root____VbeforeTrig_h7811a786__0(vlSelf, 
                                                     "@(negedge tb_p1.clk_i)");
        co_await vlSelfRef.__VtrigSched_h7811a786__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_p1.clk_i)", 
                                                             "tb/tb_p1.sv", 
                                                             21);
        vlSelfRef.tb_p1__DOT__bit_i = __Vtask_tb_p1__DOT__send__b_30;
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "tb/tb_p1.sv", 
                                             23);
        if (VL_UNLIKELY(((Vtb_p1__ConstPool__TABLE_2
                          [vlSelfRef.__Vdfg_Regularize_4] 
                          != (IData)(__Vtask_tb_p1__DOT__send__expect_found_31))))) {
            VL_WRITEF_NX("  FAIL cycle %0d: sent %0b, found_o=%0b expected %0b\n",4
                         , '~',32,vlSelfRef.tb_p1__DOT__seen
                         , '#',1,(IData)(__Vtask_tb_p1__DOT__send__b_30)
                         , '#',1,Vtb_p1__ConstPool__TABLE_2
                         [vlSelfRef.__Vdfg_Regularize_4]
                         , '#',1,__Vtask_tb_p1__DOT__send__expect_found_31);
            vlSelfRef.tb_p1__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.tb_p1__DOT__errors);
        }
        Vtb_p1___024root____VbeforeTrig_h7811a6bb__0(vlSelf, 
                                                     "@(posedge tb_p1.clk_i)");
        co_await vlSelfRef.__VtrigSched_h7811a6bb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_p1.clk_i)", 
                                                             "tb/tb_p1.sv", 
                                                             31);
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "tb/tb_p1.sv", 
                                             31);
        if (((IData)(__Vtask_tb_p1__DOT__send__expect_found_31) 
             & VL_GTS_III(32, 0x000000ffU, vlSelfRef.tb_p1__DOT__exp_count))) {
            vlSelfRef.tb_p1__DOT__exp_count = ((IData)(1U) 
                                               + vlSelfRef.tb_p1__DOT__exp_count);
        }
        if (VL_UNLIKELY((((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__count_q) 
                          != (0x000000ffU & vlSelfRef.tb_p1__DOT__exp_count))))) {
            VL_WRITEF_NX("  FAIL cycle %0d: count_o=%0d expected %0d\n",3
                         , '~',32,vlSelfRef.tb_p1__DOT__seen
                         , '#',8,(IData)(vlSelfRef.tb_p1__DOT__dut__DOT__count_q)
                         , '~',32,vlSelfRef.tb_p1__DOT__exp_count);
            vlSelfRef.tb_p1__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.tb_p1__DOT__errors);
        }
        vlSelfRef.tb_p1__DOT__seen = ((IData)(1U) + vlSelfRef.tb_p1__DOT__seen);
        __Vtask_tb_p1__DOT__stream__b_32 = 0U;
        __Vtask_tb_p1__DOT__stream__exp_33 = 0U;
        __Vtask_tb_p1__DOT__stream__exp_33 = ((6U == 
                                               (7U 
                                                & (IData)(tb_p1__DOT__shreg))) 
                                              & (IData)(__Vtask_tb_p1__DOT__stream__b_32));
        tb_p1__DOT__shreg = ((0x0000000eU & ((IData)(tb_p1__DOT__shreg) 
                                             << 1U)) 
                             | (IData)(__Vtask_tb_p1__DOT__stream__b_32));
        __Vtask_tb_p1__DOT__send__expect_found_35 = __Vtask_tb_p1__DOT__stream__exp_33;
        __Vtask_tb_p1__DOT__send__b_34 = __Vtask_tb_p1__DOT__stream__b_32;
        Vtb_p1___024root____VbeforeTrig_h7811a786__0(vlSelf, 
                                                     "@(negedge tb_p1.clk_i)");
        co_await vlSelfRef.__VtrigSched_h7811a786__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_p1.clk_i)", 
                                                             "tb/tb_p1.sv", 
                                                             21);
        vlSelfRef.tb_p1__DOT__bit_i = __Vtask_tb_p1__DOT__send__b_34;
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "tb/tb_p1.sv", 
                                             23);
        if (VL_UNLIKELY(((Vtb_p1__ConstPool__TABLE_2
                          [vlSelfRef.__Vdfg_Regularize_4] 
                          != (IData)(__Vtask_tb_p1__DOT__send__expect_found_35))))) {
            VL_WRITEF_NX("  FAIL cycle %0d: sent %0b, found_o=%0b expected %0b\n",4
                         , '~',32,vlSelfRef.tb_p1__DOT__seen
                         , '#',1,(IData)(__Vtask_tb_p1__DOT__send__b_34)
                         , '#',1,Vtb_p1__ConstPool__TABLE_2
                         [vlSelfRef.__Vdfg_Regularize_4]
                         , '#',1,__Vtask_tb_p1__DOT__send__expect_found_35);
            vlSelfRef.tb_p1__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.tb_p1__DOT__errors);
        }
        Vtb_p1___024root____VbeforeTrig_h7811a6bb__0(vlSelf, 
                                                     "@(posedge tb_p1.clk_i)");
        co_await vlSelfRef.__VtrigSched_h7811a6bb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_p1.clk_i)", 
                                                             "tb/tb_p1.sv", 
                                                             31);
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "tb/tb_p1.sv", 
                                             31);
        if (((IData)(__Vtask_tb_p1__DOT__send__expect_found_35) 
             & VL_GTS_III(32, 0x000000ffU, vlSelfRef.tb_p1__DOT__exp_count))) {
            vlSelfRef.tb_p1__DOT__exp_count = ((IData)(1U) 
                                               + vlSelfRef.tb_p1__DOT__exp_count);
        }
        if (VL_UNLIKELY((((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__count_q) 
                          != (0x000000ffU & vlSelfRef.tb_p1__DOT__exp_count))))) {
            VL_WRITEF_NX("  FAIL cycle %0d: count_o=%0d expected %0d\n",3
                         , '~',32,vlSelfRef.tb_p1__DOT__seen
                         , '#',8,(IData)(vlSelfRef.tb_p1__DOT__dut__DOT__count_q)
                         , '~',32,vlSelfRef.tb_p1__DOT__exp_count);
            vlSelfRef.tb_p1__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.tb_p1__DOT__errors);
        }
        vlSelfRef.tb_p1__DOT__seen = ((IData)(1U) + vlSelfRef.tb_p1__DOT__seen);
        __Vtask_tb_p1__DOT__stream__b_36 = 1U;
        __Vtask_tb_p1__DOT__stream__exp_37 = 0U;
        __Vtask_tb_p1__DOT__stream__exp_37 = ((6U == 
                                               (7U 
                                                & (IData)(tb_p1__DOT__shreg))) 
                                              & (IData)(__Vtask_tb_p1__DOT__stream__b_36));
        tb_p1__DOT__shreg = ((0x0000000eU & ((IData)(tb_p1__DOT__shreg) 
                                             << 1U)) 
                             | (IData)(__Vtask_tb_p1__DOT__stream__b_36));
        __Vtask_tb_p1__DOT__send__expect_found_39 = __Vtask_tb_p1__DOT__stream__exp_37;
        __Vtask_tb_p1__DOT__send__b_38 = __Vtask_tb_p1__DOT__stream__b_36;
        Vtb_p1___024root____VbeforeTrig_h7811a786__0(vlSelf, 
                                                     "@(negedge tb_p1.clk_i)");
        co_await vlSelfRef.__VtrigSched_h7811a786__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_p1.clk_i)", 
                                                             "tb/tb_p1.sv", 
                                                             21);
        vlSelfRef.tb_p1__DOT__bit_i = __Vtask_tb_p1__DOT__send__b_38;
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "tb/tb_p1.sv", 
                                             23);
        if (VL_UNLIKELY(((Vtb_p1__ConstPool__TABLE_2
                          [vlSelfRef.__Vdfg_Regularize_4] 
                          != (IData)(__Vtask_tb_p1__DOT__send__expect_found_39))))) {
            VL_WRITEF_NX("  FAIL cycle %0d: sent %0b, found_o=%0b expected %0b\n",4
                         , '~',32,vlSelfRef.tb_p1__DOT__seen
                         , '#',1,(IData)(__Vtask_tb_p1__DOT__send__b_38)
                         , '#',1,Vtb_p1__ConstPool__TABLE_2
                         [vlSelfRef.__Vdfg_Regularize_4]
                         , '#',1,__Vtask_tb_p1__DOT__send__expect_found_39);
            vlSelfRef.tb_p1__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.tb_p1__DOT__errors);
        }
        Vtb_p1___024root____VbeforeTrig_h7811a6bb__0(vlSelf, 
                                                     "@(posedge tb_p1.clk_i)");
        co_await vlSelfRef.__VtrigSched_h7811a6bb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_p1.clk_i)", 
                                                             "tb/tb_p1.sv", 
                                                             31);
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "tb/tb_p1.sv", 
                                             31);
        if (((IData)(__Vtask_tb_p1__DOT__send__expect_found_39) 
             & VL_GTS_III(32, 0x000000ffU, vlSelfRef.tb_p1__DOT__exp_count))) {
            vlSelfRef.tb_p1__DOT__exp_count = ((IData)(1U) 
                                               + vlSelfRef.tb_p1__DOT__exp_count);
        }
        if (VL_UNLIKELY((((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__count_q) 
                          != (0x000000ffU & vlSelfRef.tb_p1__DOT__exp_count))))) {
            VL_WRITEF_NX("  FAIL cycle %0d: count_o=%0d expected %0d\n",3
                         , '~',32,vlSelfRef.tb_p1__DOT__seen
                         , '#',8,(IData)(vlSelfRef.tb_p1__DOT__dut__DOT__count_q)
                         , '~',32,vlSelfRef.tb_p1__DOT__exp_count);
            vlSelfRef.tb_p1__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.tb_p1__DOT__errors);
        }
        vlSelfRef.tb_p1__DOT__seen = ((IData)(1U) + vlSelfRef.tb_p1__DOT__seen);
        tb_p1__DOT__unnamedblk1_5__DOT____Vrepeat4 
            = (tb_p1__DOT__unnamedblk1_5__DOT____Vrepeat4 
               - (IData)(1U));
    }
    if (VL_UNLIKELY(((0xffU != (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__count_q))))) {
        VL_WRITEF_NX("  FAIL count_o=%0d after >255 matches, expected 255 (saturate, do not wrap)\n",1
                     , '#',8,vlSelfRef.tb_p1__DOT__dut__DOT__count_q);
        vlSelfRef.tb_p1__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.tb_p1__DOT__errors);
    }
    if ((0U == vlSelfRef.tb_p1__DOT__errors)) {
        VL_WRITEF_NX("P1 PASS  (%0d cycles checked, counter saturates correctly)\n",1
                     , '~',32,vlSelfRef.tb_p1__DOT__seen);
    } else {
        VL_WRITEF_NX("P1 FAIL  (%0d errors)\n",1, '~',32,vlSelfRef.tb_p1__DOT__errors);
    }
    VL_FINISH_MT("tb/tb_p1.sv", 122, "");
    co_return;
}

VlCoroutine Vtb_p1___024root___eval_initial__TOP__Vtiming__1(Vtb_p1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p1___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_p1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x00000000001e8480ULL, 
                                         nullptr, "tb/tb_p1.sv", 
                                         133);
    VL_WRITEF_NX("P1 TIMEOUT -- the testbench never reached the end; your design is probably stalled.\n[%0t] %%Fatal: tb_p1.sv:135: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"tb_p1", 'T',-12
                 , '#',64,VL_TIME_UNITED_Q(1));
    VL_STOP_MT("tb/tb_p1.sv", 135, "", false);
    co_return;
}

VlCoroutine Vtb_p1___024root___eval_initial__TOP__Vtiming__2(Vtb_p1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p1___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vtb_p1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "tb/tb_p1.sv", 
                                             9);
        vlSelfRef.tb_p1__DOT__clk_i = (1U & (~ (IData)(vlSelfRef.tb_p1__DOT__clk_i)));
    }
    co_return;
}

bool Vtb_p1___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p1___024root___trigger_anySet__ico\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

bool Vtb_p1___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p1___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vtb_p1___024root___timing_ready(Vtb_p1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p1___024root___timing_ready\n"); );
    Vtb_p1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h7811a6bb__0.ready("@(posedge tb_p1.clk_i)");
    }
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h7811a786__0.ready("@(negedge tb_p1.clk_i)");
    }
}

void Vtb_p1___024root___timing_resume(Vtb_p1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p1___024root___timing_resume\n"); );
    Vtb_p1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h7811a6bb__0.moveToResumeQueue(
                                                          "@(posedge tb_p1.clk_i)");
    vlSelfRef.__VtrigSched_h7811a786__0.moveToResumeQueue(
                                                          "@(negedge tb_p1.clk_i)");
    vlSelfRef.__VtrigSched_h7811a6bb__0.resume("@(posedge tb_p1.clk_i)");
    vlSelfRef.__VtrigSched_h7811a786__0.resume("@(negedge tb_p1.clk_i)");
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_p1___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p1___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void Vtb_p1___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p1___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

void Vtb_p1___024root____VbeforeTrig_h7811a6bb__0(Vtb_p1___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p1___024root____VbeforeTrig_h7811a6bb__0\n"); );
    Vtb_p1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.tb_p1__DOT__clk_i)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_p1__DOT__clk_i__0)) 
                                   << 1U) | ((IData)(vlSelfRef.tb_p1__DOT__clk_i) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_p1__DOT__clk_i__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_p1__DOT__clk_i__0 
        = vlSelfRef.tb_p1__DOT__clk_i;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h7811a6bb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h7811a6bb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h7811a6bb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h7811a6bb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h7811a6bb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h7811a6bb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h7811a6bb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h7811a6bb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h7811a6bb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h7811a6bb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h7811a6bb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h7811a6bb__0.ready(__VeventDescription);
    }
    if ((2ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h7811a786__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h7811a786__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h7811a786__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h7811a786__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h7811a786__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h7811a786__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h7811a786__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h7811a786__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h7811a786__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h7811a786__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h7811a786__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h7811a786__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h7811a786__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vtb_p1___024root____VbeforeTrig_h7811a786__0(Vtb_p1___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p1___024root____VbeforeTrig_h7811a786__0\n"); );
    Vtb_p1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.tb_p1__DOT__clk_i)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_p1__DOT__clk_i__0)) 
                                   << 1U) | ((IData)(vlSelfRef.tb_p1__DOT__clk_i) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_p1__DOT__clk_i__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_p1__DOT__clk_i__0 
        = vlSelfRef.tb_p1__DOT__clk_i;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h7811a6bb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h7811a6bb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h7811a6bb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h7811a6bb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h7811a6bb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h7811a6bb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h7811a6bb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h7811a6bb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h7811a6bb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h7811a6bb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h7811a6bb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h7811a6bb__0.ready(__VeventDescription);
    }
    if ((2ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h7811a786__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h7811a786__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h7811a786__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h7811a786__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h7811a786__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h7811a786__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h7811a786__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h7811a786__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h7811a786__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h7811a786__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h7811a786__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h7811a786__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h7811a786__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vtb_p1___024root___eval_debug_assertions(Vtb_p1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p1___024root___eval_debug_assertions\n"); );
    Vtb_p1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
