// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_p2.h for the primary calling header

#ifndef VERILATED_VTB_P2___024ROOT_H_
#define VERILATED_VTB_P2___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_p2__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_p2___024root final {
  public:

    // DESIGN-SPECIFIC STATE
    CData/*0:0*/ tb_p2__DOT__clk_i;
    CData/*0:0*/ tb_p2__DOT__rst_ni;
    CData/*2:0*/ tb_p2__DOT__rs1_addr_i;
    CData/*2:0*/ tb_p2__DOT__rs2_addr_i;
    CData/*0:0*/ tb_p2__DOT__bypass_en_i;
    CData/*2:0*/ tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__wa;
    CData/*7:0*/ tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__wd;
    CData/*2:0*/ tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__a1;
    CData/*2:0*/ tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__a2;
    CData/*0:0*/ tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__we;
    CData/*0:0*/ tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__be;
    CData/*7:0*/ tb_p2__DOT__dut__DOT__rs1_data_o;
    CData/*7:0*/ tb_p2__DOT__dut__DOT__rs2_data_o;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_p2__DOT__clk_i__0;
    SData/*11:0*/ tb_p2__DOT__wr_i;
    IData/*31:0*/ tb_p2__DOT____VlemExpr_7;
    IData/*31:0*/ tb_p2__DOT____VlemExpr_6;
    IData/*31:0*/ tb_p2__DOT____VlemExpr_5;
    IData/*31:0*/ tb_p2__DOT____VlemExpr_4;
    IData/*31:0*/ tb_p2__DOT____VlemExpr_3;
    IData/*31:0*/ tb_p2__DOT____VlemExpr_2;
    IData/*31:0*/ tb_p2__DOT____VlemExpr_1;
    IData/*31:0*/ tb_p2__DOT____VlemExpr_0;
    IData/*31:0*/ tb_p2__DOT__errors;
    IData/*31:0*/ __Vi;
    VlUnpacked<CData/*7:0*/, 8> tb_p2__DOT__model;
    VlUnpacked<CData/*7:0*/, 8> tb_p2__DOT__dut__DOT__regs_q;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    std::string __Vtask_tb_p2__DOT__chk__what_2;
    std::string __Vtask_tb_p2__DOT__chk__what_5;
    std::string __Vtask_tb_p2__DOT__chk__what_12;
    std::string __Vtask_tb_p2__DOT__chk__what_15;
    std::string __Vtask_tb_p2__DOT__chk__what_18;
    std::string __Vtask_tb_p2__DOT__chk__what_21;
    std::string __Vtask_tb_p2__DOT__chk__what_24;
    std::string __Vtask_tb_p2__DOT__chk__what_29;
    std::string __Vtask_tb_p2__DOT__chk__what_32;
    std::string __Vtask_tb_p2__DOT__chk__what_39;
    std::string __Vtask_tb_p2__DOT__chk__what_42;
    std::string __Vtask_tb_p2__DOT__chk__what_45;
    std::string __Vtask_tb_p2__DOT__chk__what_48;
    std::string __Vtask_tb_p2__DOT__chk__what_53;
    std::string __Vtask_tb_p2__DOT__chk__what_56;
    std::string __Vtask_tb_p2__DOT__chk__what_59;
    std::string __Vtask_tb_p2__DOT__chk__what_62;
    std::string __Vtask_tb_p2__DOT__chk__what_65;
    std::string __Vtask_tb_p2__DOT__chk__what_68;
    std::string __Vtask_tb_p2__DOT__chk__what_71;
    std::string __Vtask_tb_p2__DOT__chk__what_74;
    std::string __Vtask_tb_p2__DOT__chk__what_77;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h8355b08a__0;
    VlTriggerScheduler __VtrigSched_h8355b04f__0;

    // INTERNAL VARIABLES
    Vtb_p2__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_p2___024root(Vtb_p2__Syms* symsp, const char* namep);
    ~Vtb_p2___024root();
    VL_UNCOPYABLE(Vtb_p2___024root);

    // INTERNAL METHODS
};


#endif  // guard
