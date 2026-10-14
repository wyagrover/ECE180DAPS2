// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_p2.h for the primary calling header

#include "Vtb_p2__pch.h"

VlCoroutine Vtb_p2___024root___eval_initial__TOP__Vtiming__0(Vtb_p2___024root* vlSelf);
VlCoroutine Vtb_p2___024root___eval_initial__TOP__Vtiming__1(Vtb_p2___024root* vlSelf);
VlCoroutine Vtb_p2___024root___eval_initial__TOP__Vtiming__2(Vtb_p2___024root* vlSelf);

void Vtb_p2___024root___eval_initial(Vtb_p2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___eval_initial\n"); );
    Vtb_p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_initial__TOP
        if ((0U != VL_TESTPLUSARGS_I("trace"s))) {
            vlSymsp->_vm_contextp__->dumpfile("build/p2.vcd"s);
            VL_PRINTF_MT("-Info: tb/tb_p2.sv:169: $dumpvar ignored, as Verilated without --trace\n");
        }
    }
    Vtb_p2___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_p2___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb_p2___024root___eval_initial__TOP__Vtiming__2(vlSelf);
}

void Vtb_p2___024root___eval_sample(Vtb_p2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___eval_sample\n"); );
    Vtb_p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_p2___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_p2___024root___eval_ico(Vtb_p2___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___eval_ico\n"); );
    Vtb_p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_p2___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    return (0U);
}

void Vtb_p2___024root___timing_ready(Vtb_p2___024root* vlSelf);
void Vtb_p2___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_p2___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vtb_p2___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vtb_p2___024root___timing_resume(Vtb_p2___024root* vlSelf);

bool Vtb_p2___024root___eval_act(Vtb_p2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___eval_act\n"); );
    Vtb_p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                          << 2U) 
                                                         | ((((~ (IData)(vlSelfRef.tb_p2__DOT__clk_i)) 
                                                              & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_p2__DOT__clk_i__0)) 
                                                             << 1U) 
                                                            | ((IData)(vlSelfRef.tb_p2__DOT__clk_i) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_p2__DOT__clk_i__0)))))));
        vlSelfRef.__Vtrigprevexpr___TOP__tb_p2__DOT__clk_i__0 
            = vlSelfRef.tb_p2__DOT__clk_i;
    }
    Vtb_p2___024root___timing_ready(vlSelf);
    Vtb_p2___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_p2___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_p2___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_p2___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb_p2___024root___timing_resume(vlSelf);
        {
            // Inlined CFunc: _eval_body__act
            if ((7ULL & vlSelfRef.__VactTriggered[0U])) {
                {
                    // Inlined CFunc: _act_comb__TOP__0
                    CData/*0:0*/ __Vinline_0__eval_body__act___Vinline_1__act_comb__TOP__0___Vdfg_Regularize_2;
                    __Vinline_0__eval_body__act___Vinline_1__act_comb__TOP__0___Vdfg_Regularize_2 = 0;
                    __Vinline_0__eval_body__act___Vinline_1__act_comb__TOP__0___Vdfg_Regularize_2 
                        = ((IData)(vlSelfRef.tb_p2__DOT__bypass_en_i) 
                           & (((IData)(vlSelfRef.tb_p2__DOT__wr_i) 
                               >> 0x0000000bU) & (0U 
                                                  != 
                                                  (7U 
                                                   & ((IData)(vlSelfRef.tb_p2__DOT__wr_i) 
                                                      >> 8U)))));
                    vlSelfRef.tb_p2__DOT__dut__DOT__rs1_data_o 
                        = (0x000000ffU & (((((IData)(vlSelfRef.tb_p2__DOT__rs1_addr_i) 
                                             == (7U 
                                                 & ((IData)(vlSelfRef.tb_p2__DOT__wr_i) 
                                                    >> 8U))) 
                                            & __Vinline_0__eval_body__act___Vinline_1__act_comb__TOP__0___Vdfg_Regularize_2)
                                            ? (IData)(vlSelfRef.tb_p2__DOT__wr_i)
                                            : vlSelfRef.tb_p2__DOT__dut__DOT__regs_q
                                           [vlSelfRef.tb_p2__DOT__rs1_addr_i]) 
                                          & (- (IData)(
                                                       (0U 
                                                        != (IData)(vlSelfRef.tb_p2__DOT__rs1_addr_i))))));
                    vlSelfRef.tb_p2__DOT__dut__DOT__rs2_data_o 
                        = (0x000000ffU & (((((IData)(vlSelfRef.tb_p2__DOT__rs2_addr_i) 
                                             == (7U 
                                                 & ((IData)(vlSelfRef.tb_p2__DOT__wr_i) 
                                                    >> 8U))) 
                                            & __Vinline_0__eval_body__act___Vinline_1__act_comb__TOP__0___Vdfg_Regularize_2)
                                            ? (IData)(vlSelfRef.tb_p2__DOT__wr_i)
                                            : vlSelfRef.tb_p2__DOT__dut__DOT__regs_q
                                           [vlSelfRef.tb_p2__DOT__rs2_addr_i]) 
                                          & (- (IData)(
                                                       (0U 
                                                        != (IData)(vlSelfRef.tb_p2__DOT__rs2_addr_i))))));
                }
            }
        }
    }
    return (__VactExecute);
}

bool Vtb_p2___024root___eval_inact(Vtb_p2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___eval_inact\n"); );
    Vtb_p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb/tb_p2.sv", 2, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_p2___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out);

bool Vtb_p2___024root___eval_nba(Vtb_p2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___eval_nba\n"); );
    Vtb_p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_p2___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_body__nba
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                {
                    // Inlined CFunc: _nba_sequent__TOP__0
                    CData/*7:0*/ __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___Vdly_Val__tb_p2__DOT__dut__DOT__regs_q_0;
                    __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___Vdly_Val__tb_p2__DOT__dut__DOT__regs_q_0 = 0;
                    CData/*2:0*/ __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___Vdly_Dim0__tb_p2__DOT__dut__DOT__regs_q_1;
                    __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___Vdly_Dim0__tb_p2__DOT__dut__DOT__regs_q_1 = 0;
                    CData/*0:0*/ __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___Vdly_Set__tb_p2__DOT__dut__DOT__regs_q_2;
                    __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___Vdly_Set__tb_p2__DOT__dut__DOT__regs_q_2 = 0;
                    CData/*0:0*/ __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___Vdly_Set__tb_p2__DOT__dut__DOT__regs_q_3;
                    __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___Vdly_Set__tb_p2__DOT__dut__DOT__regs_q_3 = 0;
                    __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___Vdly_Set__tb_p2__DOT__dut__DOT__regs_q_2 = 0U;
                    __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___Vdly_Set__tb_p2__DOT__dut__DOT__regs_q_3 = 0U;
                    if (vlSelfRef.tb_p2__DOT__rst_ni) {
                        if ((((IData)(vlSelfRef.tb_p2__DOT__wr_i) 
                              >> 0x0000000bU) & (0U 
                                                 != 
                                                 (7U 
                                                  & ((IData)(vlSelfRef.tb_p2__DOT__wr_i) 
                                                     >> 8U))))) {
                            __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___Vdly_Val__tb_p2__DOT__dut__DOT__regs_q_0 
                                = (0x000000ffU & (IData)(vlSelfRef.tb_p2__DOT__wr_i));
                            __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___Vdly_Dim0__tb_p2__DOT__dut__DOT__regs_q_1 
                                = (7U & ((IData)(vlSelfRef.tb_p2__DOT__wr_i) 
                                         >> 8U));
                            __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___Vdly_Set__tb_p2__DOT__dut__DOT__regs_q_2 = 1U;
                        }
                    } else {
                        __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___Vdly_Set__tb_p2__DOT__dut__DOT__regs_q_3 = 1U;
                    }
                    if (__Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___Vdly_Set__tb_p2__DOT__dut__DOT__regs_q_2) {
                        vlSelfRef.tb_p2__DOT__dut__DOT__regs_q[__Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___Vdly_Dim0__tb_p2__DOT__dut__DOT__regs_q_1] 
                            = __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___Vdly_Val__tb_p2__DOT__dut__DOT__regs_q_0;
                    }
                    if (__Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___Vdly_Set__tb_p2__DOT__dut__DOT__regs_q_3) {
                        vlSelfRef.tb_p2__DOT__dut__DOT__regs_q[0U] = 0U;
                        vlSelfRef.tb_p2__DOT__dut__DOT__regs_q[1U] = 0U;
                        vlSelfRef.tb_p2__DOT__dut__DOT__regs_q[2U] = 0U;
                        vlSelfRef.tb_p2__DOT__dut__DOT__regs_q[3U] = 0U;
                        vlSelfRef.tb_p2__DOT__dut__DOT__regs_q[4U] = 0U;
                        vlSelfRef.tb_p2__DOT__dut__DOT__regs_q[5U] = 0U;
                        vlSelfRef.tb_p2__DOT__dut__DOT__regs_q[6U] = 0U;
                        vlSelfRef.tb_p2__DOT__dut__DOT__regs_q[7U] = 0U;
                    }
                }
            }
            if ((7ULL & vlSelfRef.__VnbaTriggered[0U])) {
                {
                    // Inlined CFunc: _act_comb__TOP__0
                    CData/*0:0*/ __Vinline_0__eval_body__nba___Vinline_2__act_comb__TOP__0___Vdfg_Regularize_2;
                    __Vinline_0__eval_body__nba___Vinline_2__act_comb__TOP__0___Vdfg_Regularize_2 = 0;
                    __Vinline_0__eval_body__nba___Vinline_2__act_comb__TOP__0___Vdfg_Regularize_2 
                        = ((IData)(vlSelfRef.tb_p2__DOT__bypass_en_i) 
                           & (((IData)(vlSelfRef.tb_p2__DOT__wr_i) 
                               >> 0x0000000bU) & (0U 
                                                  != 
                                                  (7U 
                                                   & ((IData)(vlSelfRef.tb_p2__DOT__wr_i) 
                                                      >> 8U)))));
                    vlSelfRef.tb_p2__DOT__dut__DOT__rs1_data_o 
                        = (0x000000ffU & (((((IData)(vlSelfRef.tb_p2__DOT__rs1_addr_i) 
                                             == (7U 
                                                 & ((IData)(vlSelfRef.tb_p2__DOT__wr_i) 
                                                    >> 8U))) 
                                            & __Vinline_0__eval_body__nba___Vinline_2__act_comb__TOP__0___Vdfg_Regularize_2)
                                            ? (IData)(vlSelfRef.tb_p2__DOT__wr_i)
                                            : vlSelfRef.tb_p2__DOT__dut__DOT__regs_q
                                           [vlSelfRef.tb_p2__DOT__rs1_addr_i]) 
                                          & (- (IData)(
                                                       (0U 
                                                        != (IData)(vlSelfRef.tb_p2__DOT__rs1_addr_i))))));
                    vlSelfRef.tb_p2__DOT__dut__DOT__rs2_data_o 
                        = (0x000000ffU & (((((IData)(vlSelfRef.tb_p2__DOT__rs2_addr_i) 
                                             == (7U 
                                                 & ((IData)(vlSelfRef.tb_p2__DOT__wr_i) 
                                                    >> 8U))) 
                                            & __Vinline_0__eval_body__nba___Vinline_2__act_comb__TOP__0___Vdfg_Regularize_2)
                                            ? (IData)(vlSelfRef.tb_p2__DOT__wr_i)
                                            : vlSelfRef.tb_p2__DOT__dut__DOT__regs_q
                                           [vlSelfRef.tb_p2__DOT__rs2_addr_i]) 
                                          & (- (IData)(
                                                       (0U 
                                                        != (IData)(vlSelfRef.tb_p2__DOT__rs2_addr_i))))));
                }
            }
        }
        Vtb_p2___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool Vtb_p2___024root___eval_obs(Vtb_p2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___eval_obs\n"); );
    Vtb_p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vtb_p2___024root___eval_react(Vtb_p2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___eval_react\n"); );
    Vtb_p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Vtb_p2___024root___eval_postponed(Vtb_p2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___eval_postponed\n"); );
    Vtb_p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtb_p2___024root____VbeforeTrig_h8355b08a__0(Vtb_p2___024root* vlSelf, const char* __VeventDescription);
void Vtb_p2___024root____VbeforeTrig_h8355b04f__0(Vtb_p2___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtb_p2___024root___eval_initial__TOP__Vtiming__0(Vtb_p2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_p2__DOT__unnamedblk1_1__DOT____Vrepeat0;
    tb_p2__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ tb_p2__DOT__unnamedblk2__DOT__i;
    tb_p2__DOT__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ tb_p2__DOT__unnamedblk3__DOT__i;
    tb_p2__DOT__unnamedblk3__DOT__i = 0;
    IData/*31:0*/ tb_p2__DOT__unnamedblk4__DOT__i;
    tb_p2__DOT__unnamedblk4__DOT__i = 0;
    IData/*31:0*/ tb_p2__DOT__unnamedblk5__DOT__i;
    tb_p2__DOT__unnamedblk5__DOT__i = 0;
    IData/*31:0*/ tb_p2__DOT__unnamedblk6__DOT__i;
    tb_p2__DOT__unnamedblk6__DOT__i = 0;
    CData/*2:0*/ __Vtask_tb_p2__DOT__rd_chk__a1_0;
    __Vtask_tb_p2__DOT__rd_chk__a1_0 = 0;
    CData/*2:0*/ __Vtask_tb_p2__DOT__rd_chk__a2_1;
    __Vtask_tb_p2__DOT__rd_chk__a2_1 = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__got_3;
    __Vtask_tb_p2__DOT__chk__got_3 = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__exp_4;
    __Vtask_tb_p2__DOT__chk__exp_4 = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__got_6;
    __Vtask_tb_p2__DOT__chk__got_6 = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__exp_7;
    __Vtask_tb_p2__DOT__chk__exp_7 = 0;
    CData/*2:0*/ __Vtask_tb_p2__DOT__wr__a_8;
    __Vtask_tb_p2__DOT__wr__a_8 = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__wr__d_9;
    __Vtask_tb_p2__DOT__wr__d_9 = 0;
    CData/*2:0*/ __Vtask_tb_p2__DOT__rd_chk__a1_10;
    __Vtask_tb_p2__DOT__rd_chk__a1_10 = 0;
    CData/*2:0*/ __Vtask_tb_p2__DOT__rd_chk__a2_11;
    __Vtask_tb_p2__DOT__rd_chk__a2_11 = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__got_13;
    __Vtask_tb_p2__DOT__chk__got_13 = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__exp_14;
    __Vtask_tb_p2__DOT__chk__exp_14 = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__got_16;
    __Vtask_tb_p2__DOT__chk__got_16 = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__exp_17;
    __Vtask_tb_p2__DOT__chk__exp_17 = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__got_19;
    __Vtask_tb_p2__DOT__chk__got_19 = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__exp_20;
    __Vtask_tb_p2__DOT__chk__exp_20 = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__got_22;
    __Vtask_tb_p2__DOT__chk__got_22 = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__exp_23;
    __Vtask_tb_p2__DOT__chk__exp_23 = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__got_25;
    __Vtask_tb_p2__DOT__chk__got_25 = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__exp_26;
    __Vtask_tb_p2__DOT__chk__exp_26 = 0;
    CData/*2:0*/ __Vtask_tb_p2__DOT__rd_chk__a1_27;
    __Vtask_tb_p2__DOT__rd_chk__a1_27 = 0;
    CData/*2:0*/ __Vtask_tb_p2__DOT__rd_chk__a2_28;
    __Vtask_tb_p2__DOT__rd_chk__a2_28 = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__got_30;
    __Vtask_tb_p2__DOT__chk__got_30 = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__exp_31;
    __Vtask_tb_p2__DOT__chk__exp_31 = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__got_33;
    __Vtask_tb_p2__DOT__chk__got_33 = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__exp_34;
    __Vtask_tb_p2__DOT__chk__exp_34 = 0;
    CData/*2:0*/ __Vtask_tb_p2__DOT__wr__a_35;
    __Vtask_tb_p2__DOT__wr__a_35 = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__wr__d_36;
    __Vtask_tb_p2__DOT__wr__d_36 = 0;
    CData/*2:0*/ __Vtask_tb_p2__DOT__rd_chk__a1_37;
    __Vtask_tb_p2__DOT__rd_chk__a1_37 = 0;
    CData/*2:0*/ __Vtask_tb_p2__DOT__rd_chk__a2_38;
    __Vtask_tb_p2__DOT__rd_chk__a2_38 = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__got_40;
    __Vtask_tb_p2__DOT__chk__got_40 = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__exp_41;
    __Vtask_tb_p2__DOT__chk__exp_41 = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__got_43;
    __Vtask_tb_p2__DOT__chk__got_43 = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__exp_44;
    __Vtask_tb_p2__DOT__chk__exp_44 = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__got_46;
    __Vtask_tb_p2__DOT__chk__got_46 = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__exp_47;
    __Vtask_tb_p2__DOT__chk__exp_47 = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__got_49;
    __Vtask_tb_p2__DOT__chk__got_49 = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__exp_50;
    __Vtask_tb_p2__DOT__chk__exp_50 = 0;
    CData/*2:0*/ __Vtask_tb_p2__DOT__rd_chk__a1_51;
    __Vtask_tb_p2__DOT__rd_chk__a1_51 = 0;
    CData/*2:0*/ __Vtask_tb_p2__DOT__rd_chk__a2_52;
    __Vtask_tb_p2__DOT__rd_chk__a2_52 = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__got_54;
    __Vtask_tb_p2__DOT__chk__got_54 = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__exp_55;
    __Vtask_tb_p2__DOT__chk__exp_55 = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__got_57;
    __Vtask_tb_p2__DOT__chk__got_57 = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__exp_58;
    __Vtask_tb_p2__DOT__chk__exp_58 = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__got_60;
    __Vtask_tb_p2__DOT__chk__got_60 = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__exp_61;
    __Vtask_tb_p2__DOT__chk__exp_61 = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__got_63;
    __Vtask_tb_p2__DOT__chk__got_63 = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__exp_64;
    __Vtask_tb_p2__DOT__chk__exp_64 = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__got_66;
    __Vtask_tb_p2__DOT__chk__got_66 = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__exp_67;
    __Vtask_tb_p2__DOT__chk__exp_67 = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__got_69;
    __Vtask_tb_p2__DOT__chk__got_69 = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__exp_70;
    __Vtask_tb_p2__DOT__chk__exp_70 = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__got_72;
    __Vtask_tb_p2__DOT__chk__got_72 = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__exp_73;
    __Vtask_tb_p2__DOT__chk__exp_73 = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__got_75;
    __Vtask_tb_p2__DOT__chk__got_75 = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__exp_76;
    __Vtask_tb_p2__DOT__chk__exp_76 = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__got_78;
    __Vtask_tb_p2__DOT__chk__got_78 = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__exp_79;
    __Vtask_tb_p2__DOT__chk__exp_79 = 0;
    // Body
    vlSelfRef.tb_p2__DOT__rst_ni = 0U;
    vlSelfRef.tb_p2__DOT__wr_i = 0U;
    vlSelfRef.tb_p2__DOT__bypass_en_i = 0U;
    vlSelfRef.tb_p2__DOT__rs1_addr_i = 0U;
    vlSelfRef.tb_p2__DOT__rs2_addr_i = 0U;
    vlSelfRef.tb_p2__DOT__model[0U] = 0U;
    vlSelfRef.tb_p2__DOT__model[1U] = 0U;
    vlSelfRef.tb_p2__DOT__model[2U] = 0U;
    vlSelfRef.tb_p2__DOT__model[3U] = 0U;
    vlSelfRef.tb_p2__DOT__model[4U] = 0U;
    vlSelfRef.tb_p2__DOT__model[5U] = 0U;
    vlSelfRef.tb_p2__DOT__model[6U] = 0U;
    vlSelfRef.tb_p2__DOT__model[7U] = 0U;
    tb_p2__DOT__unnamedblk1_1__DOT____Vrepeat0 = 2U;
    while (VL_LTS_III(32, 0U, tb_p2__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vtb_p2___024root____VbeforeTrig_h8355b08a__0(vlSelf, 
                                                     "@(posedge tb_p2.clk_i)");
        co_await vlSelfRef.__VtrigSched_h8355b08a__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_p2.clk_i)", 
                                                             "tb/tb_p2.sv", 
                                                             48);
        tb_p2__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (tb_p2__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    Vtb_p2___024root____VbeforeTrig_h8355b04f__0(vlSelf, 
                                                 "@(negedge tb_p2.clk_i)");
    co_await vlSelfRef.__VtrigSched_h8355b04f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_p2.clk_i)", 
                                                         "tb/tb_p2.sv", 
                                                         49);
    vlSelfRef.tb_p2__DOT__rst_ni = 1U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_p2.sv", 
                                         51);
    tb_p2__DOT__unnamedblk2__DOT__i = 0U;
    while ((8U > tb_p2__DOT__unnamedblk2__DOT__i)) {
        __Vtask_tb_p2__DOT__rd_chk__a2_1 = (7U & tb_p2__DOT__unnamedblk2__DOT__i);
        __Vtask_tb_p2__DOT__rd_chk__a1_0 = (7U & tb_p2__DOT__unnamedblk2__DOT__i);
        vlSelfRef.tb_p2__DOT__rs1_addr_i = __Vtask_tb_p2__DOT__rd_chk__a1_0;
        vlSelfRef.tb_p2__DOT__rs2_addr_i = __Vtask_tb_p2__DOT__rd_chk__a2_1;
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "tb/tb_p2.sv", 
                                             39);
        __Vtask_tb_p2__DOT__chk__exp_4 = ((0U == (IData)(__Vtask_tb_p2__DOT__rd_chk__a1_0))
                                           ? 0U : vlSelfRef.tb_p2__DOT__model
                                          [__Vtask_tb_p2__DOT__rd_chk__a1_0]);
        __Vtask_tb_p2__DOT__chk__got_3 = vlSelfRef.tb_p2__DOT__dut__DOT__rs1_data_o;
        VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_p2__DOT__chk__what_2
                      ,"rs1 read of r%0d",1, '#',3,__Vtask_tb_p2__DOT__rd_chk__a1_0);
        if (VL_UNLIKELY((((IData)(__Vtask_tb_p2__DOT__chk__got_3) 
                          != (IData)(__Vtask_tb_p2__DOT__chk__exp_4))))) {
            VL_WRITEF_NX("  FAIL %-28s got=%0h expected=%0h\n",3
                         , 'S',&(vlSelfRef.__Vtask_tb_p2__DOT__chk__what_2)
                         , '#',8,(IData)(__Vtask_tb_p2__DOT__chk__got_3)
                         , '#',8,__Vtask_tb_p2__DOT__chk__exp_4);
            vlSelfRef.tb_p2__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.tb_p2__DOT__errors);
        }
        __Vtask_tb_p2__DOT__chk__exp_7 = ((0U == (IData)(__Vtask_tb_p2__DOT__rd_chk__a2_1))
                                           ? 0U : vlSelfRef.tb_p2__DOT__model
                                          [__Vtask_tb_p2__DOT__rd_chk__a2_1]);
        __Vtask_tb_p2__DOT__chk__got_6 = vlSelfRef.tb_p2__DOT__dut__DOT__rs2_data_o;
        VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_p2__DOT__chk__what_5
                      ,"rs2 read of r%0d",1, '#',3,__Vtask_tb_p2__DOT__rd_chk__a2_1);
        if (VL_UNLIKELY((((IData)(__Vtask_tb_p2__DOT__chk__got_6) 
                          != (IData)(__Vtask_tb_p2__DOT__chk__exp_7))))) {
            VL_WRITEF_NX("  FAIL %-28s got=%0h expected=%0h\n",3
                         , 'S',&(vlSelfRef.__Vtask_tb_p2__DOT__chk__what_5)
                         , '#',8,(IData)(__Vtask_tb_p2__DOT__chk__got_6)
                         , '#',8,__Vtask_tb_p2__DOT__chk__exp_7);
            vlSelfRef.tb_p2__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.tb_p2__DOT__errors);
        }
        tb_p2__DOT__unnamedblk2__DOT__i = ((IData)(1U) 
                                           + tb_p2__DOT__unnamedblk2__DOT__i);
    }
    tb_p2__DOT__unnamedblk3__DOT__i = 1U;
    while ((8U > tb_p2__DOT__unnamedblk3__DOT__i)) {
        __Vtask_tb_p2__DOT__wr__d_9 = (0x000000ffU 
                                       & ((IData)(0xa0U) 
                                          + tb_p2__DOT__unnamedblk3__DOT__i));
        __Vtask_tb_p2__DOT__wr__a_8 = (7U & tb_p2__DOT__unnamedblk3__DOT__i);
        Vtb_p2___024root____VbeforeTrig_h8355b04f__0(vlSelf, 
                                                     "@(negedge tb_p2.clk_i)");
        co_await vlSelfRef.__VtrigSched_h8355b04f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_p2.clk_i)", 
                                                             "tb/tb_p2.sv", 
                                                             27);
        vlSelfRef.tb_p2__DOT__wr_i = (0x00000800U | 
                                      (((IData)(__Vtask_tb_p2__DOT__wr__a_8) 
                                        << 8U) | (IData)(__Vtask_tb_p2__DOT__wr__d_9)));
        Vtb_p2___024root____VbeforeTrig_h8355b08a__0(vlSelf, 
                                                     "@(posedge tb_p2.clk_i)");
        co_await vlSelfRef.__VtrigSched_h8355b08a__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_p2.clk_i)", 
                                                             "tb/tb_p2.sv", 
                                                             29);
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "tb/tb_p2.sv", 
                                             29);
        Vtb_p2___024root____VbeforeTrig_h8355b04f__0(vlSelf, 
                                                     "@(negedge tb_p2.clk_i)");
        co_await vlSelfRef.__VtrigSched_h8355b04f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_p2.clk_i)", 
                                                             "tb/tb_p2.sv", 
                                                             30);
        vlSelfRef.tb_p2__DOT__wr_i = 0U;
        if ((0U != (IData)(__Vtask_tb_p2__DOT__wr__a_8))) {
            vlSelfRef.tb_p2__DOT__model[__Vtask_tb_p2__DOT__wr__a_8] 
                = __Vtask_tb_p2__DOT__wr__d_9;
        }
        tb_p2__DOT__unnamedblk3__DOT__i = ((IData)(1U) 
                                           + tb_p2__DOT__unnamedblk3__DOT__i);
    }
    tb_p2__DOT__unnamedblk4__DOT__i = 0U;
    while ((8U > tb_p2__DOT__unnamedblk4__DOT__i)) {
        __Vtask_tb_p2__DOT__rd_chk__a2_11 = (7U & ((IData)(7U) 
                                                   - tb_p2__DOT__unnamedblk4__DOT__i));
        __Vtask_tb_p2__DOT__rd_chk__a1_10 = (7U & tb_p2__DOT__unnamedblk4__DOT__i);
        vlSelfRef.tb_p2__DOT__rs1_addr_i = __Vtask_tb_p2__DOT__rd_chk__a1_10;
        vlSelfRef.tb_p2__DOT__rs2_addr_i = __Vtask_tb_p2__DOT__rd_chk__a2_11;
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "tb/tb_p2.sv", 
                                             39);
        __Vtask_tb_p2__DOT__chk__exp_14 = ((0U == (IData)(__Vtask_tb_p2__DOT__rd_chk__a1_10))
                                            ? 0U : vlSelfRef.tb_p2__DOT__model
                                           [__Vtask_tb_p2__DOT__rd_chk__a1_10]);
        __Vtask_tb_p2__DOT__chk__got_13 = vlSelfRef.tb_p2__DOT__dut__DOT__rs1_data_o;
        VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_p2__DOT__chk__what_12
                      ,"rs1 read of r%0d",1, '#',3,__Vtask_tb_p2__DOT__rd_chk__a1_10);
        if (VL_UNLIKELY((((IData)(__Vtask_tb_p2__DOT__chk__got_13) 
                          != (IData)(__Vtask_tb_p2__DOT__chk__exp_14))))) {
            VL_WRITEF_NX("  FAIL %-28s got=%0h expected=%0h\n",3
                         , 'S',&(vlSelfRef.__Vtask_tb_p2__DOT__chk__what_12)
                         , '#',8,(IData)(__Vtask_tb_p2__DOT__chk__got_13)
                         , '#',8,__Vtask_tb_p2__DOT__chk__exp_14);
            vlSelfRef.tb_p2__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.tb_p2__DOT__errors);
        }
        __Vtask_tb_p2__DOT__chk__exp_17 = ((0U == (IData)(__Vtask_tb_p2__DOT__rd_chk__a2_11))
                                            ? 0U : vlSelfRef.tb_p2__DOT__model
                                           [__Vtask_tb_p2__DOT__rd_chk__a2_11]);
        __Vtask_tb_p2__DOT__chk__got_16 = vlSelfRef.tb_p2__DOT__dut__DOT__rs2_data_o;
        VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_p2__DOT__chk__what_15
                      ,"rs2 read of r%0d",1, '#',3,__Vtask_tb_p2__DOT__rd_chk__a2_11);
        if (VL_UNLIKELY((((IData)(__Vtask_tb_p2__DOT__chk__got_16) 
                          != (IData)(__Vtask_tb_p2__DOT__chk__exp_17))))) {
            VL_WRITEF_NX("  FAIL %-28s got=%0h expected=%0h\n",3
                         , 'S',&(vlSelfRef.__Vtask_tb_p2__DOT__chk__what_15)
                         , '#',8,(IData)(__Vtask_tb_p2__DOT__chk__got_16)
                         , '#',8,__Vtask_tb_p2__DOT__chk__exp_17);
            vlSelfRef.tb_p2__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.tb_p2__DOT__errors);
        }
        tb_p2__DOT__unnamedblk4__DOT__i = ((IData)(1U) 
                                           + tb_p2__DOT__unnamedblk4__DOT__i);
    }
    vlSelfRef.tb_p2__DOT__rs1_addr_i = 2U;
    vlSelfRef.tb_p2__DOT__rs2_addr_i = 5U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_p2.sv", 
                                         61);
    __Vtask_tb_p2__DOT__chk__exp_20 = vlSelfRef.tb_p2__DOT__model[2U];
    __Vtask_tb_p2__DOT__chk__got_19 = vlSelfRef.tb_p2__DOT__dut__DOT__rs1_data_o;
    vlSelfRef.__Vtask_tb_p2__DOT__chk__what_18 = "independent ports rs1"s;
    if (VL_UNLIKELY((((IData)(__Vtask_tb_p2__DOT__chk__got_19) 
                      != (IData)(__Vtask_tb_p2__DOT__chk__exp_20))))) {
        VL_WRITEF_NX("  FAIL %-28s got=%0h expected=%0h\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_p2__DOT__chk__what_18)
                     , '#',8,(IData)(__Vtask_tb_p2__DOT__chk__got_19)
                     , '#',8,__Vtask_tb_p2__DOT__chk__exp_20);
        vlSelfRef.tb_p2__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.tb_p2__DOT__errors);
    }
    __Vtask_tb_p2__DOT__chk__exp_23 = vlSelfRef.tb_p2__DOT__model[5U];
    __Vtask_tb_p2__DOT__chk__got_22 = vlSelfRef.tb_p2__DOT__dut__DOT__rs2_data_o;
    vlSelfRef.__Vtask_tb_p2__DOT__chk__what_21 = "independent ports rs2"s;
    if (VL_UNLIKELY((((IData)(__Vtask_tb_p2__DOT__chk__got_22) 
                      != (IData)(__Vtask_tb_p2__DOT__chk__exp_23))))) {
        VL_WRITEF_NX("  FAIL %-28s got=%0h expected=%0h\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_p2__DOT__chk__what_21)
                     , '#',8,(IData)(__Vtask_tb_p2__DOT__chk__got_22)
                     , '#',8,__Vtask_tb_p2__DOT__chk__exp_23);
        vlSelfRef.tb_p2__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.tb_p2__DOT__errors);
    }
    Vtb_p2___024root____VbeforeTrig_h8355b04f__0(vlSelf, 
                                                 "@(negedge tb_p2.clk_i)");
    co_await vlSelfRef.__VtrigSched_h8355b04f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_p2.clk_i)", 
                                                         "tb/tb_p2.sv", 
                                                         66);
    vlSelfRef.tb_p2__DOT__wr_i = 0x08ffU;
    Vtb_p2___024root____VbeforeTrig_h8355b08a__0(vlSelf, 
                                                 "@(posedge tb_p2.clk_i)");
    co_await vlSelfRef.__VtrigSched_h8355b08a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_p2.clk_i)", 
                                                         "tb/tb_p2.sv", 
                                                         68);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_p2.sv", 
                                         68);
    Vtb_p2___024root____VbeforeTrig_h8355b04f__0(vlSelf, 
                                                 "@(negedge tb_p2.clk_i)");
    co_await vlSelfRef.__VtrigSched_h8355b04f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_p2.clk_i)", 
                                                         "tb/tb_p2.sv", 
                                                         69);
    vlSelfRef.tb_p2__DOT__wr_i = 0U;
    vlSelfRef.tb_p2__DOT__rs1_addr_i = 0U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_p2.sv", 
                                         70);
    __Vtask_tb_p2__DOT__chk__exp_26 = 0U;
    __Vtask_tb_p2__DOT__chk__got_25 = vlSelfRef.tb_p2__DOT__dut__DOT__rs1_data_o;
    vlSelfRef.__Vtask_tb_p2__DOT__chk__what_24 = "r0 after writing FF to it"s;
    if (VL_UNLIKELY((((IData)(__Vtask_tb_p2__DOT__chk__got_25) 
                      != (IData)(__Vtask_tb_p2__DOT__chk__exp_26))))) {
        VL_WRITEF_NX("  FAIL %-28s got=%0h expected=%0h\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_p2__DOT__chk__what_24)
                     , '#',8,(IData)(__Vtask_tb_p2__DOT__chk__got_25)
                     , '#',8,__Vtask_tb_p2__DOT__chk__exp_26);
        vlSelfRef.tb_p2__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.tb_p2__DOT__errors);
    }
    Vtb_p2___024root____VbeforeTrig_h8355b04f__0(vlSelf, 
                                                 "@(negedge tb_p2.clk_i)");
    co_await vlSelfRef.__VtrigSched_h8355b04f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_p2.clk_i)", 
                                                         "tb/tb_p2.sv", 
                                                         74);
    vlSelfRef.tb_p2__DOT__wr_i = 0x045aU;
    Vtb_p2___024root____VbeforeTrig_h8355b08a__0(vlSelf, 
                                                 "@(posedge tb_p2.clk_i)");
    co_await vlSelfRef.__VtrigSched_h8355b08a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_p2.clk_i)", 
                                                         "tb/tb_p2.sv", 
                                                         76);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_p2.sv", 
                                         76);
    Vtb_p2___024root____VbeforeTrig_h8355b04f__0(vlSelf, 
                                                 "@(negedge tb_p2.clk_i)");
    co_await vlSelfRef.__VtrigSched_h8355b04f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_p2.clk_i)", 
                                                         "tb/tb_p2.sv", 
                                                         77);
    vlSelfRef.tb_p2__DOT__wr_i = 0U;
    __Vtask_tb_p2__DOT__rd_chk__a2_28 = 4U;
    __Vtask_tb_p2__DOT__rd_chk__a1_27 = 4U;
    vlSelfRef.tb_p2__DOT__rs1_addr_i = __Vtask_tb_p2__DOT__rd_chk__a1_27;
    vlSelfRef.tb_p2__DOT__rs2_addr_i = __Vtask_tb_p2__DOT__rd_chk__a2_28;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_p2.sv", 
                                         39);
    __Vtask_tb_p2__DOT__chk__exp_31 = ((0U == (IData)(__Vtask_tb_p2__DOT__rd_chk__a1_27))
                                        ? 0U : vlSelfRef.tb_p2__DOT__model
                                       [__Vtask_tb_p2__DOT__rd_chk__a1_27]);
    __Vtask_tb_p2__DOT__chk__got_30 = vlSelfRef.tb_p2__DOT__dut__DOT__rs1_data_o;
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_p2__DOT__chk__what_29
                  ,"rs1 read of r%0d",1, '#',3,__Vtask_tb_p2__DOT__rd_chk__a1_27);
    if (VL_UNLIKELY((((IData)(__Vtask_tb_p2__DOT__chk__got_30) 
                      != (IData)(__Vtask_tb_p2__DOT__chk__exp_31))))) {
        VL_WRITEF_NX("  FAIL %-28s got=%0h expected=%0h\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_p2__DOT__chk__what_29)
                     , '#',8,(IData)(__Vtask_tb_p2__DOT__chk__got_30)
                     , '#',8,__Vtask_tb_p2__DOT__chk__exp_31);
        vlSelfRef.tb_p2__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.tb_p2__DOT__errors);
    }
    __Vtask_tb_p2__DOT__chk__exp_34 = ((0U == (IData)(__Vtask_tb_p2__DOT__rd_chk__a2_28))
                                        ? 0U : vlSelfRef.tb_p2__DOT__model
                                       [__Vtask_tb_p2__DOT__rd_chk__a2_28]);
    __Vtask_tb_p2__DOT__chk__got_33 = vlSelfRef.tb_p2__DOT__dut__DOT__rs2_data_o;
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_p2__DOT__chk__what_32
                  ,"rs2 read of r%0d",1, '#',3,__Vtask_tb_p2__DOT__rd_chk__a2_28);
    if (VL_UNLIKELY((((IData)(__Vtask_tb_p2__DOT__chk__got_33) 
                      != (IData)(__Vtask_tb_p2__DOT__chk__exp_34))))) {
        VL_WRITEF_NX("  FAIL %-28s got=%0h expected=%0h\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_p2__DOT__chk__what_32)
                     , '#',8,(IData)(__Vtask_tb_p2__DOT__chk__got_33)
                     , '#',8,__Vtask_tb_p2__DOT__chk__exp_34);
        vlSelfRef.tb_p2__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.tb_p2__DOT__errors);
    }
    tb_p2__DOT__unnamedblk5__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000064U, tb_p2__DOT__unnamedblk5__DOT__i)) {
        vlSelfRef.tb_p2__DOT____VlemExpr_0 = VL_URANDOM_RANGE_I(0U, 7U);
        __Vtask_tb_p2__DOT__wr__d_36 = (0x000000ffU 
                                        & VL_RANDOM_I());
        __Vtask_tb_p2__DOT__wr__a_35 = (7U & vlSelfRef.tb_p2__DOT____VlemExpr_0);
        Vtb_p2___024root____VbeforeTrig_h8355b04f__0(vlSelf, 
                                                     "@(negedge tb_p2.clk_i)");
        co_await vlSelfRef.__VtrigSched_h8355b04f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_p2.clk_i)", 
                                                             "tb/tb_p2.sv", 
                                                             27);
        vlSelfRef.tb_p2__DOT__wr_i = (0x00000800U | 
                                      (((IData)(__Vtask_tb_p2__DOT__wr__a_35) 
                                        << 8U) | (IData)(__Vtask_tb_p2__DOT__wr__d_36)));
        Vtb_p2___024root____VbeforeTrig_h8355b08a__0(vlSelf, 
                                                     "@(posedge tb_p2.clk_i)");
        co_await vlSelfRef.__VtrigSched_h8355b08a__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_p2.clk_i)", 
                                                             "tb/tb_p2.sv", 
                                                             29);
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "tb/tb_p2.sv", 
                                             29);
        Vtb_p2___024root____VbeforeTrig_h8355b04f__0(vlSelf, 
                                                     "@(negedge tb_p2.clk_i)");
        co_await vlSelfRef.__VtrigSched_h8355b04f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_p2.clk_i)", 
                                                             "tb/tb_p2.sv", 
                                                             30);
        vlSelfRef.tb_p2__DOT__wr_i = 0U;
        if ((0U != (IData)(__Vtask_tb_p2__DOT__wr__a_35))) {
            vlSelfRef.tb_p2__DOT__model[__Vtask_tb_p2__DOT__wr__a_35] 
                = __Vtask_tb_p2__DOT__wr__d_36;
        }
        vlSelfRef.tb_p2__DOT____VlemExpr_1 = VL_URANDOM_RANGE_I(0U, 7U);
        vlSelfRef.tb_p2__DOT____VlemExpr_2 = VL_URANDOM_RANGE_I(0U, 7U);
        __Vtask_tb_p2__DOT__rd_chk__a2_38 = (7U & vlSelfRef.tb_p2__DOT____VlemExpr_2);
        __Vtask_tb_p2__DOT__rd_chk__a1_37 = (7U & vlSelfRef.tb_p2__DOT____VlemExpr_1);
        vlSelfRef.tb_p2__DOT__rs1_addr_i = __Vtask_tb_p2__DOT__rd_chk__a1_37;
        vlSelfRef.tb_p2__DOT__rs2_addr_i = __Vtask_tb_p2__DOT__rd_chk__a2_38;
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "tb/tb_p2.sv", 
                                             39);
        __Vtask_tb_p2__DOT__chk__exp_41 = ((0U == (IData)(__Vtask_tb_p2__DOT__rd_chk__a1_37))
                                            ? 0U : vlSelfRef.tb_p2__DOT__model
                                           [__Vtask_tb_p2__DOT__rd_chk__a1_37]);
        __Vtask_tb_p2__DOT__chk__got_40 = vlSelfRef.tb_p2__DOT__dut__DOT__rs1_data_o;
        VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_p2__DOT__chk__what_39
                      ,"rs1 read of r%0d",1, '#',3,__Vtask_tb_p2__DOT__rd_chk__a1_37);
        if (VL_UNLIKELY((((IData)(__Vtask_tb_p2__DOT__chk__got_40) 
                          != (IData)(__Vtask_tb_p2__DOT__chk__exp_41))))) {
            VL_WRITEF_NX("  FAIL %-28s got=%0h expected=%0h\n",3
                         , 'S',&(vlSelfRef.__Vtask_tb_p2__DOT__chk__what_39)
                         , '#',8,(IData)(__Vtask_tb_p2__DOT__chk__got_40)
                         , '#',8,__Vtask_tb_p2__DOT__chk__exp_41);
            vlSelfRef.tb_p2__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.tb_p2__DOT__errors);
        }
        __Vtask_tb_p2__DOT__chk__exp_44 = ((0U == (IData)(__Vtask_tb_p2__DOT__rd_chk__a2_38))
                                            ? 0U : vlSelfRef.tb_p2__DOT__model
                                           [__Vtask_tb_p2__DOT__rd_chk__a2_38]);
        __Vtask_tb_p2__DOT__chk__got_43 = vlSelfRef.tb_p2__DOT__dut__DOT__rs2_data_o;
        VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_p2__DOT__chk__what_42
                      ,"rs2 read of r%0d",1, '#',3,__Vtask_tb_p2__DOT__rd_chk__a2_38);
        if (VL_UNLIKELY((((IData)(__Vtask_tb_p2__DOT__chk__got_43) 
                          != (IData)(__Vtask_tb_p2__DOT__chk__exp_44))))) {
            VL_WRITEF_NX("  FAIL %-28s got=%0h expected=%0h\n",3
                         , 'S',&(vlSelfRef.__Vtask_tb_p2__DOT__chk__what_42)
                         , '#',8,(IData)(__Vtask_tb_p2__DOT__chk__got_43)
                         , '#',8,__Vtask_tb_p2__DOT__chk__exp_44);
            vlSelfRef.tb_p2__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.tb_p2__DOT__errors);
        }
        tb_p2__DOT__unnamedblk5__DOT__i = ((IData)(1U) 
                                           + tb_p2__DOT__unnamedblk5__DOT__i);
    }
    vlSelfRef.tb_p2__DOT__bypass_en_i = 0U;
    Vtb_p2___024root____VbeforeTrig_h8355b04f__0(vlSelf, 
                                                 "@(negedge tb_p2.clk_i)");
    co_await vlSelfRef.__VtrigSched_h8355b04f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_p2.clk_i)", 
                                                         "tb/tb_p2.sv", 
                                                         89);
    vlSelfRef.tb_p2__DOT__wr_i = 0x0b77U;
    vlSelfRef.tb_p2__DOT__rs1_addr_i = 3U;
    vlSelfRef.tb_p2__DOT__rs2_addr_i = 3U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_p2.sv", 
                                         93);
    __Vtask_tb_p2__DOT__chk__exp_47 = vlSelfRef.tb_p2__DOT__model[3U];
    __Vtask_tb_p2__DOT__chk__got_46 = vlSelfRef.tb_p2__DOT__dut__DOT__rs1_data_o;
    vlSelfRef.__Vtask_tb_p2__DOT__chk__what_45 = "bypass OFF: rs1 sees old value"s;
    if (VL_UNLIKELY((((IData)(__Vtask_tb_p2__DOT__chk__got_46) 
                      != (IData)(__Vtask_tb_p2__DOT__chk__exp_47))))) {
        VL_WRITEF_NX("  FAIL %-28s got=%0h expected=%0h\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_p2__DOT__chk__what_45)
                     , '#',8,(IData)(__Vtask_tb_p2__DOT__chk__got_46)
                     , '#',8,__Vtask_tb_p2__DOT__chk__exp_47);
        vlSelfRef.tb_p2__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.tb_p2__DOT__errors);
    }
    __Vtask_tb_p2__DOT__chk__exp_50 = vlSelfRef.tb_p2__DOT__model[3U];
    __Vtask_tb_p2__DOT__chk__got_49 = vlSelfRef.tb_p2__DOT__dut__DOT__rs2_data_o;
    vlSelfRef.__Vtask_tb_p2__DOT__chk__what_48 = "bypass OFF: rs2 sees old value"s;
    if (VL_UNLIKELY((((IData)(__Vtask_tb_p2__DOT__chk__got_49) 
                      != (IData)(__Vtask_tb_p2__DOT__chk__exp_50))))) {
        VL_WRITEF_NX("  FAIL %-28s got=%0h expected=%0h\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_p2__DOT__chk__what_48)
                     , '#',8,(IData)(__Vtask_tb_p2__DOT__chk__got_49)
                     , '#',8,__Vtask_tb_p2__DOT__chk__exp_50);
        vlSelfRef.tb_p2__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.tb_p2__DOT__errors);
    }
    Vtb_p2___024root____VbeforeTrig_h8355b08a__0(vlSelf, 
                                                 "@(posedge tb_p2.clk_i)");
    co_await vlSelfRef.__VtrigSched_h8355b08a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_p2.clk_i)", 
                                                         "tb/tb_p2.sv", 
                                                         96);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_p2.sv", 
                                         96);
    Vtb_p2___024root____VbeforeTrig_h8355b04f__0(vlSelf, 
                                                 "@(negedge tb_p2.clk_i)");
    co_await vlSelfRef.__VtrigSched_h8355b04f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_p2.clk_i)", 
                                                         "tb/tb_p2.sv", 
                                                         97);
    vlSelfRef.tb_p2__DOT__wr_i = 0U;
    vlSelfRef.tb_p2__DOT__model[3U] = 0x77U;
    __Vtask_tb_p2__DOT__rd_chk__a2_52 = 3U;
    __Vtask_tb_p2__DOT__rd_chk__a1_51 = 3U;
    vlSelfRef.tb_p2__DOT__rs1_addr_i = __Vtask_tb_p2__DOT__rd_chk__a1_51;
    vlSelfRef.tb_p2__DOT__rs2_addr_i = __Vtask_tb_p2__DOT__rd_chk__a2_52;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_p2.sv", 
                                         39);
    __Vtask_tb_p2__DOT__chk__exp_55 = ((0U == (IData)(__Vtask_tb_p2__DOT__rd_chk__a1_51))
                                        ? 0U : vlSelfRef.tb_p2__DOT__model
                                       [__Vtask_tb_p2__DOT__rd_chk__a1_51]);
    __Vtask_tb_p2__DOT__chk__got_54 = vlSelfRef.tb_p2__DOT__dut__DOT__rs1_data_o;
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_p2__DOT__chk__what_53
                  ,"rs1 read of r%0d",1, '#',3,__Vtask_tb_p2__DOT__rd_chk__a1_51);
    if (VL_UNLIKELY((((IData)(__Vtask_tb_p2__DOT__chk__got_54) 
                      != (IData)(__Vtask_tb_p2__DOT__chk__exp_55))))) {
        VL_WRITEF_NX("  FAIL %-28s got=%0h expected=%0h\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_p2__DOT__chk__what_53)
                     , '#',8,(IData)(__Vtask_tb_p2__DOT__chk__got_54)
                     , '#',8,__Vtask_tb_p2__DOT__chk__exp_55);
        vlSelfRef.tb_p2__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.tb_p2__DOT__errors);
    }
    __Vtask_tb_p2__DOT__chk__exp_58 = ((0U == (IData)(__Vtask_tb_p2__DOT__rd_chk__a2_52))
                                        ? 0U : vlSelfRef.tb_p2__DOT__model
                                       [__Vtask_tb_p2__DOT__rd_chk__a2_52]);
    __Vtask_tb_p2__DOT__chk__got_57 = vlSelfRef.tb_p2__DOT__dut__DOT__rs2_data_o;
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_p2__DOT__chk__what_56
                  ,"rs2 read of r%0d",1, '#',3,__Vtask_tb_p2__DOT__rd_chk__a2_52);
    if (VL_UNLIKELY((((IData)(__Vtask_tb_p2__DOT__chk__got_57) 
                      != (IData)(__Vtask_tb_p2__DOT__chk__exp_58))))) {
        VL_WRITEF_NX("  FAIL %-28s got=%0h expected=%0h\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_p2__DOT__chk__what_56)
                     , '#',8,(IData)(__Vtask_tb_p2__DOT__chk__got_57)
                     , '#',8,__Vtask_tb_p2__DOT__chk__exp_58);
        vlSelfRef.tb_p2__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.tb_p2__DOT__errors);
    }
    vlSelfRef.tb_p2__DOT__bypass_en_i = 1U;
    Vtb_p2___024root____VbeforeTrig_h8355b04f__0(vlSelf, 
                                                 "@(negedge tb_p2.clk_i)");
    co_await vlSelfRef.__VtrigSched_h8355b04f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_p2.clk_i)", 
                                                         "tb/tb_p2.sv", 
                                                         103);
    vlSelfRef.tb_p2__DOT__wr_i = 0x0e99U;
    vlSelfRef.tb_p2__DOT__rs1_addr_i = 6U;
    vlSelfRef.tb_p2__DOT__rs2_addr_i = 2U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_p2.sv", 
                                         107);
    __Vtask_tb_p2__DOT__chk__exp_61 = 0x99U;
    __Vtask_tb_p2__DOT__chk__got_60 = vlSelfRef.tb_p2__DOT__dut__DOT__rs1_data_o;
    vlSelfRef.__Vtask_tb_p2__DOT__chk__what_59 = "bypass ON: colliding rs1 sees new data"s;
    if (VL_UNLIKELY((((IData)(__Vtask_tb_p2__DOT__chk__got_60) 
                      != (IData)(__Vtask_tb_p2__DOT__chk__exp_61))))) {
        VL_WRITEF_NX("  FAIL %-28s got=%0h expected=%0h\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_p2__DOT__chk__what_59)
                     , '#',8,(IData)(__Vtask_tb_p2__DOT__chk__got_60)
                     , '#',8,__Vtask_tb_p2__DOT__chk__exp_61);
        vlSelfRef.tb_p2__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.tb_p2__DOT__errors);
    }
    __Vtask_tb_p2__DOT__chk__exp_64 = vlSelfRef.tb_p2__DOT__model[2U];
    __Vtask_tb_p2__DOT__chk__got_63 = vlSelfRef.tb_p2__DOT__dut__DOT__rs2_data_o;
    vlSelfRef.__Vtask_tb_p2__DOT__chk__what_62 = "bypass ON: other port unaffected"s;
    if (VL_UNLIKELY((((IData)(__Vtask_tb_p2__DOT__chk__got_63) 
                      != (IData)(__Vtask_tb_p2__DOT__chk__exp_64))))) {
        VL_WRITEF_NX("  FAIL %-28s got=%0h expected=%0h\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_p2__DOT__chk__what_62)
                     , '#',8,(IData)(__Vtask_tb_p2__DOT__chk__got_63)
                     , '#',8,__Vtask_tb_p2__DOT__chk__exp_64);
        vlSelfRef.tb_p2__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.tb_p2__DOT__errors);
    }
    Vtb_p2___024root____VbeforeTrig_h8355b08a__0(vlSelf, 
                                                 "@(posedge tb_p2.clk_i)");
    co_await vlSelfRef.__VtrigSched_h8355b08a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_p2.clk_i)", 
                                                         "tb/tb_p2.sv", 
                                                         110);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_p2.sv", 
                                         110);
    Vtb_p2___024root____VbeforeTrig_h8355b04f__0(vlSelf, 
                                                 "@(negedge tb_p2.clk_i)");
    co_await vlSelfRef.__VtrigSched_h8355b04f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_p2.clk_i)", 
                                                         "tb/tb_p2.sv", 
                                                         111);
    vlSelfRef.tb_p2__DOT__wr_i = 0U;
    vlSelfRef.tb_p2__DOT__model[6U] = 0x99U;
    vlSelfRef.tb_p2__DOT__bypass_en_i = 1U;
    Vtb_p2___024root____VbeforeTrig_h8355b04f__0(vlSelf, 
                                                 "@(negedge tb_p2.clk_i)");
    co_await vlSelfRef.__VtrigSched_h8355b04f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_p2.clk_i)", 
                                                         "tb/tb_p2.sv", 
                                                         116);
    vlSelfRef.tb_p2__DOT__wr_i = 0x06eeU;
    vlSelfRef.tb_p2__DOT__rs1_addr_i = 6U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_p2.sv", 
                                         119);
    __Vtask_tb_p2__DOT__chk__exp_67 = vlSelfRef.tb_p2__DOT__model[6U];
    __Vtask_tb_p2__DOT__chk__got_66 = vlSelfRef.tb_p2__DOT__dut__DOT__rs1_data_o;
    vlSelfRef.__Vtask_tb_p2__DOT__chk__what_65 = "bypass ON but wr.en low: no forwarding"s;
    if (VL_UNLIKELY((((IData)(__Vtask_tb_p2__DOT__chk__got_66) 
                      != (IData)(__Vtask_tb_p2__DOT__chk__exp_67))))) {
        VL_WRITEF_NX("  FAIL %-28s got=%0h expected=%0h\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_p2__DOT__chk__what_65)
                     , '#',8,(IData)(__Vtask_tb_p2__DOT__chk__got_66)
                     , '#',8,__Vtask_tb_p2__DOT__chk__exp_67);
        vlSelfRef.tb_p2__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.tb_p2__DOT__errors);
    }
    Vtb_p2___024root____VbeforeTrig_h8355b04f__0(vlSelf, 
                                                 "@(negedge tb_p2.clk_i)");
    co_await vlSelfRef.__VtrigSched_h8355b04f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_p2.clk_i)", 
                                                         "tb/tb_p2.sv", 
                                                         121);
    vlSelfRef.tb_p2__DOT__wr_i = 0U;
    vlSelfRef.tb_p2__DOT__bypass_en_i = 1U;
    Vtb_p2___024root____VbeforeTrig_h8355b04f__0(vlSelf, 
                                                 "@(negedge tb_p2.clk_i)");
    co_await vlSelfRef.__VtrigSched_h8355b04f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_p2.clk_i)", 
                                                         "tb/tb_p2.sv", 
                                                         125);
    vlSelfRef.tb_p2__DOT__wr_i = 0x08bbU;
    vlSelfRef.tb_p2__DOT__rs1_addr_i = 0U;
    vlSelfRef.tb_p2__DOT__rs2_addr_i = 0U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_p2.sv", 
                                         129);
    __Vtask_tb_p2__DOT__chk__exp_70 = 0U;
    __Vtask_tb_p2__DOT__chk__got_69 = vlSelfRef.tb_p2__DOT__dut__DOT__rs1_data_o;
    vlSelfRef.__Vtask_tb_p2__DOT__chk__what_68 = "bypass ON: r0 still reads zero"s;
    if (VL_UNLIKELY((((IData)(__Vtask_tb_p2__DOT__chk__got_69) 
                      != (IData)(__Vtask_tb_p2__DOT__chk__exp_70))))) {
        VL_WRITEF_NX("  FAIL %-28s got=%0h expected=%0h\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_p2__DOT__chk__what_68)
                     , '#',8,(IData)(__Vtask_tb_p2__DOT__chk__got_69)
                     , '#',8,__Vtask_tb_p2__DOT__chk__exp_70);
        vlSelfRef.tb_p2__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.tb_p2__DOT__errors);
    }
    __Vtask_tb_p2__DOT__chk__exp_73 = 0U;
    __Vtask_tb_p2__DOT__chk__got_72 = vlSelfRef.tb_p2__DOT__dut__DOT__rs2_data_o;
    vlSelfRef.__Vtask_tb_p2__DOT__chk__what_71 = "bypass ON: r0 still reads zero"s;
    if (VL_UNLIKELY((((IData)(__Vtask_tb_p2__DOT__chk__got_72) 
                      != (IData)(__Vtask_tb_p2__DOT__chk__exp_73))))) {
        VL_WRITEF_NX("  FAIL %-28s got=%0h expected=%0h\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_p2__DOT__chk__what_71)
                     , '#',8,(IData)(__Vtask_tb_p2__DOT__chk__got_72)
                     , '#',8,__Vtask_tb_p2__DOT__chk__exp_73);
        vlSelfRef.tb_p2__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.tb_p2__DOT__errors);
    }
    Vtb_p2___024root____VbeforeTrig_h8355b08a__0(vlSelf, 
                                                 "@(posedge tb_p2.clk_i)");
    co_await vlSelfRef.__VtrigSched_h8355b08a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_p2.clk_i)", 
                                                         "tb/tb_p2.sv", 
                                                         132);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_p2.sv", 
                                         132);
    Vtb_p2___024root____VbeforeTrig_h8355b04f__0(vlSelf, 
                                                 "@(negedge tb_p2.clk_i)");
    co_await vlSelfRef.__VtrigSched_h8355b04f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_p2.clk_i)", 
                                                         "tb/tb_p2.sv", 
                                                         133);
    vlSelfRef.tb_p2__DOT__wr_i = 0U;
    tb_p2__DOT__unnamedblk6__DOT__i = 0U;
    while (VL_GTS_III(32, 0x000000c8U, tb_p2__DOT__unnamedblk6__DOT__i)) {
        vlSelfRef.tb_p2__DOT____VlemExpr_3 = VL_URANDOM_RANGE_I(0U, 7U);
        vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__wa 
            = (7U & vlSelfRef.tb_p2__DOT____VlemExpr_3);
        vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__wd 
            = (0x000000ffU & VL_RANDOM_I());
        vlSelfRef.tb_p2__DOT____VlemExpr_4 = VL_URANDOM_RANGE_I(0U, 7U);
        vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__a1 
            = (7U & vlSelfRef.tb_p2__DOT____VlemExpr_4);
        vlSelfRef.tb_p2__DOT____VlemExpr_5 = VL_URANDOM_RANGE_I(0U, 7U);
        vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__a2 
            = (7U & vlSelfRef.tb_p2__DOT____VlemExpr_5);
        vlSelfRef.tb_p2__DOT____VlemExpr_6 = VL_URANDOM_RANGE_I(0U, 1U);
        vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__we 
            = (1U & vlSelfRef.tb_p2__DOT____VlemExpr_6);
        vlSelfRef.tb_p2__DOT____VlemExpr_7 = VL_URANDOM_RANGE_I(0U, 1U);
        vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__be 
            = (1U & vlSelfRef.tb_p2__DOT____VlemExpr_7);
        Vtb_p2___024root____VbeforeTrig_h8355b04f__0(vlSelf, 
                                                     "@(negedge tb_p2.clk_i)");
        co_await vlSelfRef.__VtrigSched_h8355b04f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_p2.clk_i)", 
                                                             "tb/tb_p2.sv", 
                                                             144);
        vlSelfRef.tb_p2__DOT__bypass_en_i = vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__be;
        vlSelfRef.tb_p2__DOT__wr_i = (((IData)(vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__we) 
                                       << 0x0000000bU) 
                                      | (((IData)(vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__wa) 
                                          << 8U) | (IData)(vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__wd)));
        vlSelfRef.tb_p2__DOT__rs1_addr_i = vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__a1;
        vlSelfRef.tb_p2__DOT__rs2_addr_i = vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__a2;
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "tb/tb_p2.sv", 
                                             149);
        __Vtask_tb_p2__DOT__chk__exp_76 = ((0U == (IData)(vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__a1))
                                            ? 0U : 
                                           (((((IData)(vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__be) 
                                               & (IData)(vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__we)) 
                                              & ((IData)(vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__wa) 
                                                 == (IData)(vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__a1))) 
                                             & (0U 
                                                != (IData)(vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__wa)))
                                             ? (IData)(vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__wd)
                                             : vlSelfRef.tb_p2__DOT__model
                                            [vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__a1]));
        __Vtask_tb_p2__DOT__chk__got_75 = vlSelfRef.tb_p2__DOT__dut__DOT__rs1_data_o;
        VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_p2__DOT__chk__what_74
                      ,"random rs1 (bypass=%0b we=%0b)",2
                      , '#',1,vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__be
                      , '#',1,(IData)(vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__we));
        if (VL_UNLIKELY((((IData)(__Vtask_tb_p2__DOT__chk__got_75) 
                          != (IData)(__Vtask_tb_p2__DOT__chk__exp_76))))) {
            VL_WRITEF_NX("  FAIL %-28s got=%0h expected=%0h\n",3
                         , 'S',&(vlSelfRef.__Vtask_tb_p2__DOT__chk__what_74)
                         , '#',8,(IData)(__Vtask_tb_p2__DOT__chk__got_75)
                         , '#',8,__Vtask_tb_p2__DOT__chk__exp_76);
            vlSelfRef.tb_p2__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.tb_p2__DOT__errors);
        }
        __Vtask_tb_p2__DOT__chk__exp_79 = ((0U == (IData)(vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__a2))
                                            ? 0U : 
                                           (((((IData)(vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__be) 
                                               & (IData)(vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__we)) 
                                              & ((IData)(vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__wa) 
                                                 == (IData)(vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__a2))) 
                                             & (0U 
                                                != (IData)(vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__wa)))
                                             ? (IData)(vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__wd)
                                             : vlSelfRef.tb_p2__DOT__model
                                            [vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__a2]));
        __Vtask_tb_p2__DOT__chk__got_78 = vlSelfRef.tb_p2__DOT__dut__DOT__rs2_data_o;
        VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_p2__DOT__chk__what_77
                      ,"random rs2 (bypass=%0b we=%0b)",2
                      , '#',1,vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__be
                      , '#',1,(IData)(vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__we));
        if (VL_UNLIKELY((((IData)(__Vtask_tb_p2__DOT__chk__got_78) 
                          != (IData)(__Vtask_tb_p2__DOT__chk__exp_79))))) {
            VL_WRITEF_NX("  FAIL %-28s got=%0h expected=%0h\n",3
                         , 'S',&(vlSelfRef.__Vtask_tb_p2__DOT__chk__what_77)
                         , '#',8,(IData)(__Vtask_tb_p2__DOT__chk__got_78)
                         , '#',8,__Vtask_tb_p2__DOT__chk__exp_79);
            vlSelfRef.tb_p2__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.tb_p2__DOT__errors);
        }
        Vtb_p2___024root____VbeforeTrig_h8355b08a__0(vlSelf, 
                                                     "@(posedge tb_p2.clk_i)");
        co_await vlSelfRef.__VtrigSched_h8355b08a__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_p2.clk_i)", 
                                                             "tb/tb_p2.sv", 
                                                             155);
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "tb/tb_p2.sv", 
                                             155);
        if (((IData)(vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__we) 
             & (0U != (IData)(vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__wa)))) {
            vlSelfRef.tb_p2__DOT__model[vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__wa] 
                = vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__wd;
        }
        Vtb_p2___024root____VbeforeTrig_h8355b04f__0(vlSelf, 
                                                     "@(negedge tb_p2.clk_i)");
        co_await vlSelfRef.__VtrigSched_h8355b04f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_p2.clk_i)", 
                                                             "tb/tb_p2.sv", 
                                                             157);
        vlSelfRef.tb_p2__DOT__wr_i = 0U;
        tb_p2__DOT__unnamedblk6__DOT__i = ((IData)(1U) 
                                           + tb_p2__DOT__unnamedblk6__DOT__i);
    }
    if ((0U == vlSelfRef.tb_p2__DOT__errors)) {
        VL_WRITEF_NX("P2 PASS  (reset, r0, dual reads, write enable, bypass on/off)\n",0);
    } else {
        VL_WRITEF_NX("P2 FAIL  (%0d errors)\n",1, '~',32,vlSelfRef.tb_p2__DOT__errors);
    }
    VL_FINISH_MT("tb/tb_p2.sv", 163, "");
    co_return;
}

VlCoroutine Vtb_p2___024root___eval_initial__TOP__Vtiming__1(Vtb_p2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x00000000001e8480ULL, 
                                         nullptr, "tb/tb_p2.sv", 
                                         174);
    VL_WRITEF_NX("P2 TIMEOUT -- the testbench never reached the end; your design is probably stalled.\n[%0t] %%Fatal: tb_p2.sv:176: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"tb_p2", 'T',-12
                 , '#',64,VL_TIME_UNITED_Q(1));
    VL_STOP_MT("tb/tb_p2.sv", 176, "", false);
    co_return;
}

VlCoroutine Vtb_p2___024root___eval_initial__TOP__Vtiming__2(Vtb_p2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vtb_p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "tb/tb_p2.sv", 
                                             12);
        vlSelfRef.tb_p2__DOT__clk_i = (1U & (~ (IData)(vlSelfRef.tb_p2__DOT__clk_i)));
    }
    co_return;
}

bool Vtb_p2___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___trigger_anySet__ico\n"); );
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

bool Vtb_p2___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___trigger_anySet__act\n"); );
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

void Vtb_p2___024root___timing_ready(Vtb_p2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___timing_ready\n"); );
    Vtb_p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h8355b08a__0.ready("@(posedge tb_p2.clk_i)");
    }
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h8355b04f__0.ready("@(negedge tb_p2.clk_i)");
    }
}

void Vtb_p2___024root___timing_resume(Vtb_p2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___timing_resume\n"); );
    Vtb_p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h8355b08a__0.moveToResumeQueue(
                                                          "@(posedge tb_p2.clk_i)");
    vlSelfRef.__VtrigSched_h8355b04f__0.moveToResumeQueue(
                                                          "@(negedge tb_p2.clk_i)");
    vlSelfRef.__VtrigSched_h8355b08a__0.resume("@(posedge tb_p2.clk_i)");
    vlSelfRef.__VtrigSched_h8355b04f__0.resume("@(negedge tb_p2.clk_i)");
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_p2___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void Vtb_p2___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

void Vtb_p2___024root____VbeforeTrig_h8355b08a__0(Vtb_p2___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root____VbeforeTrig_h8355b08a__0\n"); );
    Vtb_p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.tb_p2__DOT__clk_i)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_p2__DOT__clk_i__0)) 
                                   << 1U) | ((IData)(vlSelfRef.tb_p2__DOT__clk_i) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_p2__DOT__clk_i__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_p2__DOT__clk_i__0 
        = vlSelfRef.tb_p2__DOT__clk_i;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h8355b08a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8355b08a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8355b08a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8355b08a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8355b08a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8355b08a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8355b08a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8355b08a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8355b08a__0.ready(__VeventDescription);
    }
    if ((2ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h8355b04f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8355b04f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8355b04f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8355b04f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8355b04f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8355b04f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8355b04f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8355b04f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8355b04f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8355b04f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8355b04f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8355b04f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8355b04f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8355b04f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8355b04f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8355b04f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8355b04f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8355b04f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8355b04f__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vtb_p2___024root____VbeforeTrig_h8355b04f__0(Vtb_p2___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root____VbeforeTrig_h8355b04f__0\n"); );
    Vtb_p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.tb_p2__DOT__clk_i)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_p2__DOT__clk_i__0)) 
                                   << 1U) | ((IData)(vlSelfRef.tb_p2__DOT__clk_i) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_p2__DOT__clk_i__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_p2__DOT__clk_i__0 
        = vlSelfRef.tb_p2__DOT__clk_i;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h8355b08a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8355b08a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8355b08a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8355b08a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8355b08a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8355b08a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8355b08a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8355b08a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8355b08a__0.ready(__VeventDescription);
    }
    if ((2ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h8355b04f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8355b04f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8355b04f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8355b04f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8355b04f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8355b04f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8355b04f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8355b04f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8355b04f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8355b04f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8355b04f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8355b04f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8355b04f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8355b04f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8355b04f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8355b04f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8355b04f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8355b04f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8355b04f__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vtb_p2___024root___eval_debug_assertions(Vtb_p2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___eval_debug_assertions\n"); );
    Vtb_p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
