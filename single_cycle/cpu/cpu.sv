module cpu #(
    parameter   ADDRESS_WIDTH = 8,
    parameter   DATA_WIDTH = 32,
    parameter   CONTROL_WIDTH = 3,
    parameter   IMM_WIDTH = 2

)(

    input logic                        clk,
    input logic                        rst,
    output logic [DATA_WIDTH-1:0]      a0


);

    //output internal logic for control module 
    logic   RegWrite;
    logic   MemWrite;
    logic   [DATA_WIDTH-1:0] Instr;

    //output internal logic for alu module 
    logic EQ;
    logic [ADDRESS_WIDTH-1:0]  ALUResult;
    logic [CONTROL_WIDTH-1:0]  ALUctrl;
    logic ALUsrc;
    logic Zero;


    //output internal logic for pc module
    logic [IMM_WIDTH-1:0]  Resultsrc;
    logic [DATA_WIDTH-1:0] ImmOp;
    logic [IMM_WIDTH-1:0]  PCsrc;
    logic [ADDRESS_WIDTH-1:0]  PC;
    logic [ADDRESS_WIDTH-1:0]  PCPlus4;

pc_top pc(
    .clk(clk),        
    .rst(rst),        
    .ALUResult_i(ALUResult),        
    .ImmOp_i(ImmOp),     
    .PCsrc_i(PCsrc),
    .pc_out(PC),
    .PCPlus4_o(PCPlus4) 
    );

control_top control(
    .PC_i(PC), //8b
    .Zero_i(Zero), //1b
    .instr_o(Instr),//32b
    .RegWrite_o(RegWrite), //1b
    .MemWrite_o(MemWrite), //1b
    .Resultsrc_o(Resultsrc), //3b ==> edited to 2 bits
    .ALUctrl_o(ALUctrl), //3b
    .ALUsrc_o(ALUsrc), //1 bit
    .PCsrc_o(PCsrc), //1 bit ==> edited to 2 bits
    .ImmOp_o(ImmOp) //32 bits
);

alu_top alu(
    .clk(clk),
    .ALUsrc_i(ALUsrc),
    .ALUctrl_i(ALUctrl),
    .Instr_i(Instr),
    .RegWrite_i(RegWrite),
    .ResultSrc_i(Resultsrc),
    .MemWrite_i(MemWrite),
    .ImmOp_i(ImmOp),
    .PCPlus4_i(PCPlus4),
    .Zero_o(Zero),
    .a0(a0),  //(debug output)
    .Result_o(), //unsure about this, shouldnt result stay within alu_top as its connected to register
    .ALUResult_o(ALUResult)
);
endmodule

