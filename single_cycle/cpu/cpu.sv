module cpu #(
    parameter DATA_WIDTH = 32,
    parameter ADDRESS_WIDTH = 8

)(

    input logic                        clk,
    input logic                        rst,
    output logic [DATA_WIDTH-1:0]      a0


);

    //output internal logic for control module 
    logic   RegWrite;
    logic   [2:0] ALUctrl;
    logic   ALUsrc;
    logic   PCsrc;
    logic   [DATA_WIDTH-1:0] ImmOp;
    logic   [DATA_WIDTH-1:0] Instr;

    //output internal logic for alu module 
    logic EQ;

    //output internal logic for pc module
    logic [DATA_WIDTH-1:0] PC;


pc_top pc(
    .PC_i(), //8b
    .Zero_i(), //1b
    .instr_o(),//32b
    .RegWrite_o(), //1b
    .MemWrite_o(), //1b
    .Resultsrc_o(), //3b ==> edited to 2 bits
    .ALUctrl_o(), //3b
    .ALUsrc_o(), //1 bit
    .PCsrc_o(), //1 bit ==> edited to 2 bits
    .ImmOp_o() //32 bits
    );

control_top control(
    .EQ(EQ),
    .RegWrite(RegWrite),
    .ALUctrl(ALUctrl),
    .ALUsrc(ALUsrc),
    //.ImmSrc(ImmSrc),
    .PCsrc(PCsrc),
    .ImmOp(ImmOp),
    .PC(PC),
    .instr(Instr)
);

alu_top alu(
    .clk(clk),
    .a0(a0),
    .Instr(Instr),//we pass the whole Instruction, and then we separate inside red
    .RegWrite(RegWrite),
    .EQ(EQ),
    .ALUctrl(ALUctrl),
    .ALUsrc(ALUsrc),
    .ImmOp(ImmOp),
    .PCPlus4(PCPlus4),
    .ALUResult(ALUResult)
);
    
endmodule

