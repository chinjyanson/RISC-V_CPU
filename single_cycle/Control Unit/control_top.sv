module control_top #(
    parameter   ADDRESS_WIDTH = 8,
    parameter   DATA_WIDTH = 32,
    parameter   CONTROL_WIDTH = 3
)(
     input  logic [DATA_WIDTH-1:0]          PC, //8b
     input  logic                           Zero, //1b
     output logic [DATA_WIDTH-1:0]          instr,//32b
     output logic                           RegWrite, //1b
     output logic [CONTROL_WIDTH-1:0]       ALUctrl, //3b
     output logic                           ALUsrc, //1 bit
     output logic                           PCsrc, //1 bit
     output logic [DATA_WIDTH-1:0]          ImmOp //32 bits


);

    logic [1:0]                        ImmSrc;

control_unit ControlUnit(
    .Zero(Zero),
    .instr(instr),
    .RegWrite(RegWrite),
    .ALUctrl(ALUctrl),
    .ALUsrc(ALUsrc),
    .ImmSrc(ImmSrc),
    .PCsrc(PCsrc)

);

instr_mem InstrMem(
    .addr(PC),
    .dout(instr)
);

sign_extend MySignExtend(
    .instr(instr),
    .ImmSrc(ImmSrc),
    .ImmOp(ImmOp)
);

endmodule 
