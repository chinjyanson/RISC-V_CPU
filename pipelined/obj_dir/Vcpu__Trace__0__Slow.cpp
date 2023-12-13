// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcpu__Syms.h"


VL_ATTR_COLD void Vcpu___024root__trace_init_sub__TOP__0(Vcpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+77,"clk", false,-1);
    tracep->declBit(c+78,"rst", false,-1);
    tracep->declBus(c+79,"a0", false,-1, 31,0);
    tracep->pushNamePrefix("cpu ");
    tracep->declBus(c+82,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+83,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+84,"CONTROL_WIDTH", false,-1, 31,0);
    tracep->declBus(c+85,"IMM_WIDTH", false,-1, 31,0);
    tracep->declBit(c+77,"clk", false,-1);
    tracep->declBit(c+78,"rst", false,-1);
    tracep->declBus(c+79,"a0", false,-1, 31,0);
    tracep->declBus(c+1,"RegWriteW", false,-1, 2,0);
    tracep->declBus(c+2,"RegWriteM", false,-1, 2,0);
    tracep->declBus(c+3,"MemWriteM", false,-1, 1,0);
    tracep->declBus(c+4,"ResultSrcW", false,-1, 1,0);
    tracep->declBus(c+16,"ALUControlE", false,-1, 2,0);
    tracep->declBit(c+17,"ALUSrcE", false,-1);
    tracep->declBus(c+42,"InstrD", false,-1, 31,0);
    tracep->declBus(c+43,"ExtImmD", false,-1, 31,0);
    tracep->declBus(c+44,"PCD", false,-1, 31,0);
    tracep->declBus(c+45,"PCPlus4D", false,-1, 31,0);
    tracep->declBus(c+18,"ALUResultE", false,-1, 31,0);
    tracep->declBus(c+19,"PCTarget", false,-1, 31,0);
    tracep->declBus(c+73,"PCSrcE", false,-1, 1,0);
    tracep->declBus(c+20,"Rs1E", false,-1, 4,0);
    tracep->declBus(c+21,"Rs2E", false,-1, 4,0);
    tracep->declBus(c+5,"RdM", false,-1, 4,0);
    tracep->declBus(c+6,"RdW", false,-1, 4,0);
    tracep->declBus(c+22,"RdE", false,-1, 4,0);
    tracep->declBus(c+23,"OpcodeE", false,-1, 6,0);
    tracep->declBit(c+24,"ZeroE", false,-1);
    tracep->declBus(c+46,"PCF", false,-1, 31,0);
    tracep->declBus(c+47,"PCPlus4F", false,-1, 31,0);
    tracep->declBit(c+74,"Den", false,-1);
    tracep->declBit(c+74,"Fen", false,-1);
    tracep->declBit(c+80,"PCen", false,-1);
    tracep->declBus(c+25,"FowardAE", false,-1, 1,0);
    tracep->declBus(c+26,"FowardBE", false,-1, 1,0);
    tracep->declBit(c+75,"PCrst", false,-1);
    tracep->declBit(c+75,"Frst", false,-1);
    tracep->declBit(c+76,"Drst", false,-1);
    tracep->pushNamePrefix("alu ");
    tracep->declBus(c+84,"CONTROL_WIDTH", false,-1, 31,0);
    tracep->declBus(c+83,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+77,"clk", false,-1);
    tracep->declBit(c+74,"Den_i", false,-1);
    tracep->declBus(c+44,"PCD_i", false,-1, 31,0);
    tracep->declBus(c+48,"Rs1D_i", false,-1, 4,0);
    tracep->declBus(c+49,"Rs2D_i", false,-1, 4,0);
    tracep->declBus(c+50,"RdD_i", false,-1, 4,0);
    tracep->declBus(c+43,"ExtImmD_i", false,-1, 31,0);
    tracep->declBus(c+45,"PCPlus4D_i", false,-1, 31,0);
    tracep->declBus(c+51,"opcodeD_i", false,-1, 6,0);
    tracep->declBus(c+25,"FowardAE_i", false,-1, 1,0);
    tracep->declBus(c+26,"FowardBE_i", false,-1, 1,0);
    tracep->declBit(c+76,"Drst_i", false,-1);
    tracep->declBus(c+1,"RegWriteW_i", false,-1, 2,0);
    tracep->declBus(c+3,"MemWriteM_i", false,-1, 1,0);
    tracep->declBus(c+4,"ResultSrcW_i", false,-1, 1,0);
    tracep->declBus(c+16,"ALUControlE_i", false,-1, 2,0);
    tracep->declBit(c+17,"ALUSrcE_i", false,-1);
    tracep->declBus(c+79,"a0", false,-1, 31,0);
    tracep->declBus(c+19,"PCTargetE_o", false,-1, 31,0);
    tracep->declBus(c+23,"opcodeE_o", false,-1, 6,0);
    tracep->declBus(c+20,"Rs1E_o", false,-1, 4,0);
    tracep->declBus(c+21,"Rs2E_o", false,-1, 4,0);
    tracep->declBus(c+5,"RdM_o", false,-1, 4,0);
    tracep->declBus(c+6,"RdW_o", false,-1, 4,0);
    tracep->declBus(c+22,"RdE_o", false,-1, 4,0);
    tracep->declBit(c+24,"ZeroE_o", false,-1);
    tracep->declBus(c+18,"ALUResultE_o", false,-1, 31,0);
    tracep->declBus(c+52,"RD1D", false,-1, 31,0);
    tracep->declBus(c+53,"RD2D", false,-1, 31,0);
    tracep->declBus(c+27,"RD1E", false,-1, 31,0);
    tracep->declBus(c+28,"RD2E", false,-1, 31,0);
    tracep->declBus(c+29,"PCE", false,-1, 31,0);
    tracep->declBus(c+30,"PCPlus4E", false,-1, 31,0);
    tracep->declBus(c+31,"SrcAE", false,-1, 31,0);
    tracep->declBus(c+32,"SrcBE", false,-1, 31,0);
    tracep->declBus(c+33,"WriteDataE", false,-1, 31,0);
    tracep->declBus(c+34,"ExtImmE", false,-1, 31,0);
    tracep->declBus(c+7,"ALUResultM", false,-1, 31,0);
    tracep->declBus(c+8,"WriteDataM", false,-1, 31,0);
    tracep->declBus(c+9,"PCPlus4M", false,-1, 31,0);
    tracep->declBus(c+10,"ReadDataM", false,-1, 31,0);
    tracep->declBus(c+11,"PCPlus4W", false,-1, 31,0);
    tracep->declBus(c+12,"ReadDataW", false,-1, 31,0);
    tracep->declBus(c+13,"ALUResultW", false,-1, 31,0);
    tracep->declBus(c+14,"ResultW", false,-1, 31,0);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+84,"CONTROL_WIDTH", false,-1, 31,0);
    tracep->declBus(c+83,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+16,"ALUControl", false,-1, 2,0);
    tracep->declBus(c+31,"SrcA", false,-1, 31,0);
    tracep->declBus(c+32,"SrcB", false,-1, 31,0);
    tracep->declBus(c+18,"ALUResult", false,-1, 31,0);
    tracep->declBit(c+24,"Zero", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALUMux ");
    tracep->declBus(c+83,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+17,"control", false,-1);
    tracep->declBus(c+33,"input0", false,-1, 31,0);
    tracep->declBus(c+34,"input1", false,-1, 31,0);
    tracep->declBus(c+32,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("DREg ");
    tracep->declBus(c+83,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+77,"clk", false,-1);
    tracep->declBit(c+74,"en", false,-1);
    tracep->declBit(c+76,"rst", false,-1);
    tracep->declBus(c+52,"RD1D", false,-1, 31,0);
    tracep->declBus(c+53,"RD2D", false,-1, 31,0);
    tracep->declBus(c+44,"PCD", false,-1, 31,0);
    tracep->declBus(c+48,"Rs1D", false,-1, 4,0);
    tracep->declBus(c+49,"Rs2D", false,-1, 4,0);
    tracep->declBus(c+50,"RdD", false,-1, 4,0);
    tracep->declBus(c+43,"ExtImmD", false,-1, 31,0);
    tracep->declBus(c+45,"PCPlus4D", false,-1, 31,0);
    tracep->declBus(c+51,"opcodeD", false,-1, 6,0);
    tracep->declBus(c+27,"RD1E", false,-1, 31,0);
    tracep->declBus(c+28,"RD2E", false,-1, 31,0);
    tracep->declBus(c+29,"PCE", false,-1, 31,0);
    tracep->declBus(c+20,"Rs1E", false,-1, 4,0);
    tracep->declBus(c+21,"Rs2E", false,-1, 4,0);
    tracep->declBus(c+22,"RdE", false,-1, 4,0);
    tracep->declBus(c+34,"ExtImmE", false,-1, 31,0);
    tracep->declBus(c+30,"PCPlus4E", false,-1, 31,0);
    tracep->declBus(c+23,"opcodeE", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EREG ");
    tracep->declBus(c+83,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+77,"clk", false,-1);
    tracep->declBus(c+18,"ALUResultE", false,-1, 31,0);
    tracep->declBus(c+22,"RdE", false,-1, 4,0);
    tracep->declBus(c+33,"WriteDataE", false,-1, 31,0);
    tracep->declBus(c+30,"PCPlus4E", false,-1, 31,0);
    tracep->declBus(c+7,"ALUResultM", false,-1, 31,0);
    tracep->declBus(c+5,"RdM", false,-1, 4,0);
    tracep->declBus(c+8,"WriteDataM", false,-1, 31,0);
    tracep->declBus(c+9,"PCPlus4M", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MREG ");
    tracep->declBus(c+83,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+77,"clk", false,-1);
    tracep->declBus(c+7,"ALUResultM", false,-1, 31,0);
    tracep->declBus(c+5,"RdM", false,-1, 4,0);
    tracep->declBus(c+10,"ReadDataM", false,-1, 31,0);
    tracep->declBus(c+9,"PCPlus4M", false,-1, 31,0);
    tracep->declBus(c+13,"ALUResultW", false,-1, 31,0);
    tracep->declBus(c+6,"RdW", false,-1, 4,0);
    tracep->declBus(c+12,"ReadDataW", false,-1, 31,0);
    tracep->declBus(c+11,"PCPlus4W", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RD1EHazardMux ");
    tracep->declBus(c+83,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+85,"CONTROL_WIDTH", false,-1, 31,0);
    tracep->declBus(c+25,"control", false,-1, 1,0);
    tracep->declBus(c+27,"input0", false,-1, 31,0);
    tracep->declBus(c+14,"input1", false,-1, 31,0);
    tracep->declBus(c+7,"input2", false,-1, 31,0);
    tracep->declBus(c+31,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RD2EHazardMux ");
    tracep->declBus(c+83,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+85,"CONTROL_WIDTH", false,-1, 31,0);
    tracep->declBus(c+26,"control", false,-1, 1,0);
    tracep->declBus(c+28,"input0", false,-1, 31,0);
    tracep->declBus(c+14,"input1", false,-1, 31,0);
    tracep->declBus(c+7,"input2", false,-1, 31,0);
    tracep->declBus(c+33,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("addPCTargetE ");
    tracep->declBus(c+83,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+29,"input0", false,-1, 31,0);
    tracep->declBus(c+34,"input1", false,-1, 31,0);
    tracep->declBus(c+19,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("data ");
    tracep->declBus(c+82,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+83,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+77,"clk", false,-1);
    tracep->declBus(c+3,"WE", false,-1, 1,0);
    tracep->declBus(c+7,"A", false,-1, 31,0);
    tracep->declBus(c+8,"WD", false,-1, 31,0);
    tracep->declBus(c+10,"RD", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("register ");
    tracep->declBus(c+82,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+83,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+77,"clk", false,-1);
    tracep->declBus(c+1,"WE3", false,-1, 2,0);
    tracep->declBus(c+14,"WD3", false,-1, 31,0);
    tracep->declBus(c+48,"A1_i", false,-1, 4,0);
    tracep->declBus(c+49,"A2_i", false,-1, 4,0);
    tracep->declBus(c+50,"A3_i", false,-1, 4,0);
    tracep->declBus(c+52,"RD1", false,-1, 31,0);
    tracep->declBus(c+53,"RD2", false,-1, 31,0);
    tracep->declBus(c+79,"a0", false,-1, 31,0);
    tracep->declBus(c+54,"A1", false,-1, 7,0);
    tracep->declBus(c+55,"A2", false,-1, 7,0);
    tracep->declBus(c+56,"A3", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("resultMux ");
    tracep->declBus(c+83,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+85,"CONTROL_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4,"control", false,-1, 1,0);
    tracep->declBus(c+13,"input0", false,-1, 31,0);
    tracep->declBus(c+12,"input1", false,-1, 31,0);
    tracep->declBus(c+11,"input2", false,-1, 31,0);
    tracep->declBus(c+14,"out", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("control ");
    tracep->declBus(c+82,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+83,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+77,"clk", false,-1);
    tracep->declBit(c+74,"Fen_i", false,-1);
    tracep->declBit(c+75,"Frst_i", false,-1);
    tracep->declBit(c+74,"Den_i", false,-1);
    tracep->declBit(c+76,"Drst_i", false,-1);
    tracep->declBus(c+46,"PCF_i", false,-1, 31,0);
    tracep->declBus(c+47,"PCPlus4F_i", false,-1, 31,0);
    tracep->declBit(c+24,"ZeroE_i", false,-1);
    tracep->declBus(c+42,"InstrD_o", false,-1, 31,0);
    tracep->declBus(c+1,"RegWriteW_o", false,-1, 2,0);
    tracep->declBus(c+2,"RegWriteM_o", false,-1, 2,0);
    tracep->declBus(c+3,"MemWriteM_o", false,-1, 1,0);
    tracep->declBus(c+4,"ResultSrcW_o", false,-1, 1,0);
    tracep->declBus(c+16,"ALUControlE_o", false,-1, 2,0);
    tracep->declBit(c+17,"ALUSrcE_o", false,-1);
    tracep->declBus(c+43,"ExtImmD_o", false,-1, 31,0);
    tracep->declBus(c+44,"PCD_o", false,-1, 31,0);
    tracep->declBus(c+45,"PCPlus4D_o", false,-1, 31,0);
    tracep->declBus(c+73,"PCSrcE_o", false,-1, 1,0);
    tracep->declBus(c+57,"ImmSrcD", false,-1, 2,0);
    tracep->declBus(c+58,"InstrF", false,-1, 31,0);
    tracep->declBit(c+35,"ZeroOp", false,-1);
    tracep->declBus(c+59,"ResultSrcD", false,-1, 1,0);
    tracep->declBus(c+60,"MemWriteD", false,-1, 1,0);
    tracep->declBus(c+61,"ALUControlD", false,-1, 2,0);
    tracep->declBit(c+62,"ALUSrcD", false,-1);
    tracep->declBit(c+63,"JumpD", false,-1);
    tracep->declBit(c+64,"BranchD", false,-1);
    tracep->declBus(c+65,"RegWriteD", false,-1, 2,0);
    tracep->declBus(c+36,"RegWriteE", false,-1, 2,0);
    tracep->declBus(c+37,"ResultSrcE", false,-1, 1,0);
    tracep->declBus(c+38,"MemWriteE", false,-1, 1,0);
    tracep->declBit(c+39,"JumpE", false,-1);
    tracep->declBit(c+40,"BranchE", false,-1);
    tracep->declBus(c+41,"funct3E", false,-1, 2,0);
    tracep->declBus(c+15,"ResultSrcM", false,-1, 1,0);
    tracep->pushNamePrefix("ControlUnit ");
    tracep->declBus(c+86,"OP_WIDTH", false,-1, 31,0);
    tracep->declBus(c+51,"op", false,-1, 6,0);
    tracep->declBus(c+66,"funct3", false,-1, 2,0);
    tracep->declBit(c+67,"funct7b5", false,-1);
    tracep->declBus(c+59,"ResultSrcD", false,-1, 1,0);
    tracep->declBus(c+60,"MemWriteD", false,-1, 1,0);
    tracep->declBit(c+62,"ALUSrcD", false,-1);
    tracep->declBus(c+65,"RegWriteD", false,-1, 2,0);
    tracep->declBus(c+57,"ImmSrcD", false,-1, 2,0);
    tracep->declBus(c+61,"ALUControlD", false,-1, 2,0);
    tracep->declBit(c+63,"JumpD", false,-1);
    tracep->declBit(c+64,"BranchD", false,-1);
    tracep->declBus(c+68,"ALUOpD", false,-1, 1,0);
    tracep->pushNamePrefix("aludec ");
    tracep->declBus(c+84,"CONTROL_WIDTH", false,-1, 31,0);
    tracep->declBus(c+66,"funct3", false,-1, 2,0);
    tracep->declBit(c+67,"funct7b5", false,-1);
    tracep->declBit(c+69,"opb5", false,-1);
    tracep->declBus(c+68,"ALUOp", false,-1, 1,0);
    tracep->declBus(c+61,"ALUControl", false,-1, 2,0);
    tracep->declBit(c+70,"RtypeSub", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("maindec ");
    tracep->declBus(c+86,"OP_WIDTH", false,-1, 31,0);
    tracep->declBus(c+51,"op", false,-1, 6,0);
    tracep->declBus(c+66,"funct3", false,-1, 2,0);
    tracep->declBus(c+59,"ResultSrc", false,-1, 1,0);
    tracep->declBus(c+60,"MemWrite", false,-1, 1,0);
    tracep->declBit(c+64,"Branch", false,-1);
    tracep->declBit(c+62,"ALUSrc", false,-1);
    tracep->declBus(c+65,"RegWrite", false,-1, 2,0);
    tracep->declBit(c+63,"Jump", false,-1);
    tracep->declBus(c+68,"ALUOp", false,-1, 1,0);
    tracep->declBus(c+57,"ImmSrc", false,-1, 2,0);
    tracep->declBus(c+71,"controls", false,-1, 14,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("DReg ");
    tracep->declBus(c+83,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+77,"clk", false,-1);
    tracep->declBit(c+74,"en", false,-1);
    tracep->declBit(c+76,"rst", false,-1);
    tracep->declBus(c+65,"RegWriteD", false,-1, 2,0);
    tracep->declBus(c+59,"ResultSrcD", false,-1, 1,0);
    tracep->declBus(c+60,"MemWriteD", false,-1, 1,0);
    tracep->declBit(c+63,"JumpD", false,-1);
    tracep->declBit(c+64,"BranchD", false,-1);
    tracep->declBus(c+61,"ALUControlD", false,-1, 2,0);
    tracep->declBit(c+62,"ALUSrcD", false,-1);
    tracep->declBus(c+66,"funct3D", false,-1, 2,0);
    tracep->declBus(c+36,"RegWriteE", false,-1, 2,0);
    tracep->declBus(c+37,"ResultSrcE", false,-1, 1,0);
    tracep->declBus(c+38,"MemWriteE", false,-1, 1,0);
    tracep->declBit(c+39,"JumpE", false,-1);
    tracep->declBit(c+40,"BranchE", false,-1);
    tracep->declBus(c+16,"ALUControlE", false,-1, 2,0);
    tracep->declBit(c+17,"ALUSrcE", false,-1);
    tracep->declBus(c+41,"funct3E", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EREG ");
    tracep->declBus(c+83,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+77,"clk", false,-1);
    tracep->declBus(c+36,"RegWriteE", false,-1, 2,0);
    tracep->declBus(c+37,"ResultSrcE", false,-1, 1,0);
    tracep->declBus(c+38,"MemWriteE", false,-1, 1,0);
    tracep->declBus(c+2,"RegWriteM", false,-1, 2,0);
    tracep->declBus(c+15,"ResultSrcM", false,-1, 1,0);
    tracep->declBus(c+3,"MemWriteM", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("FReg ");
    tracep->declBus(c+83,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+77,"clk", false,-1);
    tracep->declBit(c+74,"en", false,-1);
    tracep->declBit(c+75,"rst", false,-1);
    tracep->declBus(c+58,"InstrF", false,-1, 31,0);
    tracep->declBus(c+46,"PCF", false,-1, 31,0);
    tracep->declBus(c+47,"PCPlus4F", false,-1, 31,0);
    tracep->declBus(c+45,"PCPlus4D", false,-1, 31,0);
    tracep->declBus(c+42,"InstrD", false,-1, 31,0);
    tracep->declBus(c+44,"PCD", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("InstrMem ");
    tracep->declBus(c+82,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+83,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+46,"addr_i", false,-1, 31,0);
    tracep->declBus(c+58,"Instr_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MREG ");
    tracep->declBus(c+83,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+77,"clk", false,-1);
    tracep->declBus(c+2,"RegWriteM", false,-1, 2,0);
    tracep->declBus(c+15,"ResultSrcM", false,-1, 1,0);
    tracep->declBus(c+1,"RegWriteW", false,-1, 2,0);
    tracep->declBus(c+4,"ResultSrcW", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MySignExtend ");
    tracep->declBus(c+83,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+84,"IMM_WIDTH", false,-1, 31,0);
    tracep->declBus(c+72,"instr", false,-1, 31,7);
    tracep->declBus(c+57,"ImmSrc", false,-1, 2,0);
    tracep->declBus(c+43,"ExtImm", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("hazard ");
    tracep->declBus(c+20,"Rs1E_i", false,-1, 4,0);
    tracep->declBus(c+21,"Rs2E_i", false,-1, 4,0);
    tracep->declBus(c+48,"Rs1D_i", false,-1, 4,0);
    tracep->declBus(c+49,"Rs2D_i", false,-1, 4,0);
    tracep->declBus(c+5,"RdM_i", false,-1, 4,0);
    tracep->declBus(c+6,"RdW_i", false,-1, 4,0);
    tracep->declBus(c+22,"RdE_i", false,-1, 4,0);
    tracep->declBus(c+2,"RegWriteM_i", false,-1, 2,0);
    tracep->declBus(c+1,"RegWriteW_i", false,-1, 2,0);
    tracep->declBus(c+23,"opcodeE_i", false,-1, 6,0);
    tracep->declBus(c+73,"PCSrcE_i", false,-1, 1,0);
    tracep->declBus(c+25,"FowardAE_o", false,-1, 1,0);
    tracep->declBus(c+26,"FowardBE_o", false,-1, 1,0);
    tracep->declBit(c+74,"Den_o", false,-1);
    tracep->declBit(c+74,"Fen_o", false,-1);
    tracep->declBit(c+80,"PCen_o", false,-1);
    tracep->declBit(c+75,"PCrst_o", false,-1);
    tracep->declBit(c+75,"Frst_o", false,-1);
    tracep->declBit(c+76,"Drst_o", false,-1);
    tracep->pushNamePrefix("ControlHazard ");
    tracep->declBus(c+73,"PCSrcE", false,-1, 1,0);
    tracep->declBit(c+75,"PCrst", false,-1);
    tracep->declBit(c+75,"Frst", false,-1);
    tracep->declBit(c+76,"Drst", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("FowardHazard ");
    tracep->declBus(c+20,"Rs1E", false,-1, 4,0);
    tracep->declBus(c+21,"Rs2E", false,-1, 4,0);
    tracep->declBus(c+5,"RdM", false,-1, 4,0);
    tracep->declBus(c+6,"RdW", false,-1, 4,0);
    tracep->declBus(c+2,"RegWriteM", false,-1, 2,0);
    tracep->declBus(c+1,"RegWriteW", false,-1, 2,0);
    tracep->declBus(c+25,"FowardAE", false,-1, 1,0);
    tracep->declBus(c+26,"FowardBE", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("StallHazard ");
    tracep->declBus(c+48,"Rs1D", false,-1, 4,0);
    tracep->declBus(c+49,"Rs2D", false,-1, 4,0);
    tracep->declBus(c+22,"RdE", false,-1, 4,0);
    tracep->declBus(c+23,"opcodeE", false,-1, 6,0);
    tracep->declBit(c+74,"Fen", false,-1);
    tracep->declBit(c+74,"Den", false,-1);
    tracep->declBit(c+80,"PCen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("pc ");
    tracep->declBus(c+83,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+77,"clk", false,-1);
    tracep->declBus(c+18,"ALUResultE_i", false,-1, 31,0);
    tracep->declBus(c+73,"PCSrc_i", false,-1, 1,0);
    tracep->declBit(c+80,"PCen_i", false,-1);
    tracep->declBus(c+19,"PCTarget_i", false,-1, 31,0);
    tracep->declBit(c+75,"PCrst_i", false,-1);
    tracep->declBus(c+46,"PCF_o", false,-1, 31,0);
    tracep->declBus(c+47,"PCPlus4F_o", false,-1, 31,0);
    tracep->declBus(c+81,"next_PC", false,-1, 31,0);
    tracep->pushNamePrefix("pc_mux ");
    tracep->declBus(c+83,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+85,"CONTROL_WIDTH", false,-1, 31,0);
    tracep->declBus(c+73,"control", false,-1, 1,0);
    tracep->declBus(c+47,"input0", false,-1, 31,0);
    tracep->declBus(c+19,"input1", false,-1, 31,0);
    tracep->declBus(c+18,"input2", false,-1, 31,0);
    tracep->declBus(c+81,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_reg ");
    tracep->declBus(c+83,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+77,"clk", false,-1);
    tracep->declBit(c+75,"rst", false,-1);
    tracep->declBit(c+80,"PCen", false,-1);
    tracep->declBus(c+81,"next_PC", false,-1, 31,0);
    tracep->declBus(c+46,"pc", false,-1, 31,0);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vcpu___024root__trace_init_top(Vcpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_init_top\n"); );
    // Body
    Vcpu___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vcpu___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcpu___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcpu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vcpu___024root__trace_register(Vcpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vcpu___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vcpu___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vcpu___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vcpu___024root__trace_full_sub_0(Vcpu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vcpu___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_full_top_0\n"); );
    // Init
    Vcpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcpu___024root*>(voidSelf);
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vcpu___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcpu___024root__trace_full_sub_0(Vcpu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->cpu__DOT__RegWriteW),3);
    bufp->fullCData(oldp+2,(vlSelf->cpu__DOT__RegWriteM),3);
    bufp->fullCData(oldp+3,(vlSelf->cpu__DOT__MemWriteM),2);
    bufp->fullCData(oldp+4,(vlSelf->cpu__DOT__ResultSrcW),2);
    bufp->fullCData(oldp+5,(vlSelf->cpu__DOT__RdM),5);
    bufp->fullCData(oldp+6,(vlSelf->cpu__DOT__RdW),5);
    bufp->fullIData(oldp+7,(vlSelf->cpu__DOT__alu__DOT__ALUResultM),32);
    bufp->fullIData(oldp+8,(vlSelf->cpu__DOT__alu__DOT__WriteDataM),32);
    bufp->fullIData(oldp+9,(vlSelf->cpu__DOT__alu__DOT__PCPlus4M),32);
    bufp->fullIData(oldp+10,(vlSelf->cpu__DOT__alu__DOT__data__DOT__data_mem_register
                             [(0xffU & vlSelf->cpu__DOT__alu__DOT__ALUResultM)]),32);
    bufp->fullIData(oldp+11,(vlSelf->cpu__DOT__alu__DOT__PCPlus4W),32);
    bufp->fullIData(oldp+12,(vlSelf->cpu__DOT__alu__DOT__ReadDataW),32);
    bufp->fullIData(oldp+13,(vlSelf->cpu__DOT__alu__DOT__ALUResultW),32);
    bufp->fullIData(oldp+14,(vlSelf->cpu__DOT__alu__DOT__ResultW),32);
    bufp->fullCData(oldp+15,(vlSelf->cpu__DOT__control__DOT__ResultSrcM),2);
    bufp->fullCData(oldp+16,(vlSelf->cpu__DOT__ALUControlE),3);
    bufp->fullBit(oldp+17,(vlSelf->cpu__DOT__ALUSrcE));
    bufp->fullIData(oldp+18,(vlSelf->cpu__DOT__ALUResultE),32);
    bufp->fullIData(oldp+19,((vlSelf->cpu__DOT__alu__DOT__PCE 
                              + vlSelf->cpu__DOT__alu__DOT__ExtImmE)),32);
    bufp->fullCData(oldp+20,(vlSelf->cpu__DOT__Rs1E),5);
    bufp->fullCData(oldp+21,(vlSelf->cpu__DOT__Rs2E),5);
    bufp->fullCData(oldp+22,(vlSelf->cpu__DOT__RdE),5);
    bufp->fullCData(oldp+23,(vlSelf->cpu__DOT__OpcodeE),7);
    bufp->fullBit(oldp+24,((vlSelf->cpu__DOT__alu__DOT__SrcAE 
                            == vlSelf->cpu__DOT__alu__DOT__SrcBE)));
    bufp->fullCData(oldp+25,(vlSelf->cpu__DOT__FowardAE),2);
    bufp->fullCData(oldp+26,(vlSelf->cpu__DOT__FowardBE),2);
    bufp->fullIData(oldp+27,(vlSelf->cpu__DOT__alu__DOT__RD1E),32);
    bufp->fullIData(oldp+28,(vlSelf->cpu__DOT__alu__DOT__RD2E),32);
    bufp->fullIData(oldp+29,(vlSelf->cpu__DOT__alu__DOT__PCE),32);
    bufp->fullIData(oldp+30,(vlSelf->cpu__DOT__alu__DOT__PCPlus4E),32);
    bufp->fullIData(oldp+31,(vlSelf->cpu__DOT__alu__DOT__SrcAE),32);
    bufp->fullIData(oldp+32,(vlSelf->cpu__DOT__alu__DOT__SrcBE),32);
    bufp->fullIData(oldp+33,(vlSelf->cpu__DOT__alu__DOT__WriteDataE),32);
    bufp->fullIData(oldp+34,(vlSelf->cpu__DOT__alu__DOT__ExtImmE),32);
    bufp->fullBit(oldp+35,((1U & ((vlSelf->cpu__DOT__alu__DOT__SrcAE 
                                   == vlSelf->cpu__DOT__alu__DOT__SrcBE) 
                                  ^ (IData)(vlSelf->cpu__DOT__control__DOT__funct3E)))));
    bufp->fullCData(oldp+36,(vlSelf->cpu__DOT__control__DOT__RegWriteE),3);
    bufp->fullCData(oldp+37,(vlSelf->cpu__DOT__control__DOT__ResultSrcE),2);
    bufp->fullCData(oldp+38,(vlSelf->cpu__DOT__control__DOT__MemWriteE),2);
    bufp->fullBit(oldp+39,(vlSelf->cpu__DOT__control__DOT__JumpE));
    bufp->fullBit(oldp+40,(vlSelf->cpu__DOT__control__DOT__BranchE));
    bufp->fullCData(oldp+41,(vlSelf->cpu__DOT__control__DOT__funct3E),3);
    bufp->fullIData(oldp+42,(vlSelf->cpu__DOT__InstrD),32);
    bufp->fullIData(oldp+43,(vlSelf->cpu__DOT__ExtImmD),32);
    bufp->fullIData(oldp+44,(vlSelf->cpu__DOT__PCD),32);
    bufp->fullIData(oldp+45,(vlSelf->cpu__DOT__PCPlus4D),32);
    bufp->fullIData(oldp+46,(vlSelf->cpu__DOT__PCF),32);
    bufp->fullIData(oldp+47,(((IData)(4U) + vlSelf->cpu__DOT__PCF)),32);
    bufp->fullCData(oldp+48,((0x1fU & (vlSelf->cpu__DOT__InstrD 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+49,((0x1fU & (vlSelf->cpu__DOT__InstrD 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+50,((0x1fU & (vlSelf->cpu__DOT__InstrD 
                                       >> 7U))),5);
    bufp->fullCData(oldp+51,((0x7fU & vlSelf->cpu__DOT__InstrD)),7);
    bufp->fullIData(oldp+52,(vlSelf->cpu__DOT__alu__DOT__register__DOT__reg_array
                             [(0x1fU & (vlSelf->cpu__DOT__InstrD 
                                        >> 0xfU))]),32);
    bufp->fullIData(oldp+53,(vlSelf->cpu__DOT__alu__DOT__register__DOT__reg_array
                             [(0x1fU & (vlSelf->cpu__DOT__InstrD 
                                        >> 0x14U))]),32);
    bufp->fullCData(oldp+54,((0x1fU & (vlSelf->cpu__DOT__InstrD 
                                       >> 0xfU))),8);
    bufp->fullCData(oldp+55,((0x1fU & (vlSelf->cpu__DOT__InstrD 
                                       >> 0x14U))),8);
    bufp->fullCData(oldp+56,((0x1fU & (vlSelf->cpu__DOT__InstrD 
                                       >> 7U))),8);
    bufp->fullCData(oldp+57,((7U & ((IData)(vlSelf->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls) 
                                    >> 2U))),3);
    bufp->fullIData(oldp+58,(((vlSelf->cpu__DOT__control__DOT__InstrMem__DOT__rom_array
                               [(0xffU & ((IData)(3U) 
                                          + vlSelf->cpu__DOT__PCF))] 
                               << 0x18U) | ((vlSelf->cpu__DOT__control__DOT__InstrMem__DOT__rom_array
                                             [(0xffU 
                                               & ((IData)(2U) 
                                                  + vlSelf->cpu__DOT__PCF))] 
                                             << 0x10U) 
                                            | ((vlSelf->cpu__DOT__control__DOT__InstrMem__DOT__rom_array
                                                [(0xffU 
                                                  & ((IData)(1U) 
                                                     + vlSelf->cpu__DOT__PCF))] 
                                                << 8U) 
                                               | vlSelf->cpu__DOT__control__DOT__InstrMem__DOT__rom_array
                                               [(0xffU 
                                                 & vlSelf->cpu__DOT__PCF)])))),32);
    bufp->fullCData(oldp+59,((3U & ((IData)(vlSelf->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls) 
                                    >> 0xaU))),2);
    bufp->fullCData(oldp+60,((3U & ((IData)(vlSelf->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls) 
                                    >> 8U))),2);
    bufp->fullCData(oldp+61,(vlSelf->cpu__DOT__control__DOT__ALUControlD),3);
    bufp->fullBit(oldp+62,((1U & ((IData)(vlSelf->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls) 
                                  >> 5U))));
    bufp->fullBit(oldp+63,((1U & ((IData)(vlSelf->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls) 
                                  >> 7U))));
    bufp->fullBit(oldp+64,((1U & ((IData)(vlSelf->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls) 
                                  >> 6U))));
    bufp->fullCData(oldp+65,((7U & ((IData)(vlSelf->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls) 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+66,((7U & (vlSelf->cpu__DOT__InstrD 
                                    >> 0xcU))),3);
    bufp->fullBit(oldp+67,((1U & (vlSelf->cpu__DOT__InstrD 
                                  >> 0x1eU))));
    bufp->fullCData(oldp+68,((3U & (IData)(vlSelf->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls))),2);
    bufp->fullBit(oldp+69,((1U & (vlSelf->cpu__DOT__InstrD 
                                  >> 5U))));
    bufp->fullBit(oldp+70,((IData)((0x40000020U == 
                                    (0x40000020U & vlSelf->cpu__DOT__InstrD)))));
    bufp->fullSData(oldp+71,(vlSelf->cpu__DOT__control__DOT__ControlUnit__DOT__maindec__DOT__controls),15);
    bufp->fullIData(oldp+72,((vlSelf->cpu__DOT__InstrD 
                              >> 7U)),25);
    bufp->fullCData(oldp+73,(vlSelf->cpu__DOT__PCSrcE),2);
    bufp->fullBit(oldp+74,(vlSelf->cpu__DOT__Fen));
    bufp->fullBit(oldp+75,(((0U != (IData)(vlSelf->cpu__DOT__PCSrcE))
                             ? 1U : 0U)));
    bufp->fullBit(oldp+76,(vlSelf->cpu__DOT__Drst));
    bufp->fullBit(oldp+77,(vlSelf->clk));
    bufp->fullBit(oldp+78,(vlSelf->rst));
    bufp->fullIData(oldp+79,(vlSelf->a0),32);
    bufp->fullBit(oldp+80,((((3U == (IData)(vlSelf->cpu__DOT__OpcodeE)) 
                             & (((IData)(vlSelf->cpu__DOT__RdE) 
                                 == (0x1fU & (vlSelf->cpu__DOT__InstrD 
                                              >> 0xfU))) 
                                | ((IData)(vlSelf->cpu__DOT__RdE) 
                                   == (0x1fU & (vlSelf->cpu__DOT__InstrD 
                                                >> 0x14U)))))
                             ? 0U : 1U)));
    bufp->fullIData(oldp+81,(((0U == (IData)(vlSelf->cpu__DOT__PCSrcE))
                               ? ((IData)(4U) + vlSelf->cpu__DOT__PCF)
                               : ((1U == (IData)(vlSelf->cpu__DOT__PCSrcE))
                                   ? (vlSelf->cpu__DOT__alu__DOT__PCE 
                                      + vlSelf->cpu__DOT__alu__DOT__ExtImmE)
                                   : ((2U == (IData)(vlSelf->cpu__DOT__PCSrcE))
                                       ? vlSelf->cpu__DOT__ALUResultE
                                       : 0U)))),32);
    bufp->fullIData(oldp+82,(8U),32);
    bufp->fullIData(oldp+83,(0x20U),32);
    bufp->fullIData(oldp+84,(3U),32);
    bufp->fullIData(oldp+85,(2U),32);
    bufp->fullIData(oldp+86,(7U),32);
}
