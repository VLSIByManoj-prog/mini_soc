// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmini_project_soc_tb.h for the primary calling header

#include "verilated.h"

#include "Vmini_project_soc_tb__Syms.h"
#include "Vmini_project_soc_tb___024root.h"

VL_ATTR_COLD void Vmini_project_soc_tb___024root___eval_static__TOP(Vmini_project_soc_tb___024root* vlSelf);

VL_ATTR_COLD void Vmini_project_soc_tb___024root___eval_static(Vmini_project_soc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmini_project_soc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmini_project_soc_tb___024root___eval_static\n"); );
    // Body
    Vmini_project_soc_tb___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vmini_project_soc_tb___024root___eval_static__TOP(Vmini_project_soc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmini_project_soc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmini_project_soc_tb___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->mini_project_soc_tb__DOT__clk = 0U;
    vlSelf->mini_project_soc_tb__DOT__rst = 1U;
    vlSelf->mini_project_soc_tb__DOT__alu_sel = 0U;
    vlSelf->mini_project_soc_tb__DOT__mux_sel = 0U;
}

VL_ATTR_COLD void Vmini_project_soc_tb___024root___eval_final(Vmini_project_soc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmini_project_soc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmini_project_soc_tb___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vmini_project_soc_tb___024root___eval_settle(Vmini_project_soc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmini_project_soc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmini_project_soc_tb___024root___eval_settle\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmini_project_soc_tb___024root___dump_triggers__act(Vmini_project_soc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmini_project_soc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmini_project_soc_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge mini_project_soc_tb.clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmini_project_soc_tb___024root___dump_triggers__nba(Vmini_project_soc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmini_project_soc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmini_project_soc_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge mini_project_soc_tb.clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmini_project_soc_tb___024root___ctor_var_reset(Vmini_project_soc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmini_project_soc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmini_project_soc_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->mini_project_soc_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->mini_project_soc_tb__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->mini_project_soc_tb__DOT__alu_sel = VL_RAND_RESET_I(1);
    vlSelf->mini_project_soc_tb__DOT__mux_sel = VL_RAND_RESET_I(1);
    vlSelf->mini_project_soc_tb__DOT__dut__DOT__count = VL_RAND_RESET_I(4);
    vlSelf->__Vdlyvval__mini_project_soc_tb__DOT__clk__v0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__mini_project_soc_tb__DOT__clk__v0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__mini_project_soc_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
