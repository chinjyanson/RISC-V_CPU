module green #(
    parameter ADDRESS_WIDTH = 8,
    DATA_WIDTH = 32
)(
    logic input [ADDRESS_WIDTH-1:0]     PC, //8b
    logic input                         EQ, //1b
    logic output [DATA_WIDTH-1:0]       instr,//32b
    logic output                        RegWrite, //1b
    logic output [2:0]                  ALUctrl, //3b
    logic output                        ALUsrc, //1 bit
    logic output                        PCsrc, //1 bit
    logic output[DATA_WIDTH-1:0]        ImmOp //32 bits
);

    logic [11:0]                        ImmSrc //not very sure how this goes
                                                // now it has to be 12 i think, but later it can have differetent widths

ControlUnit MyControlUnit(
    .EQ(EQ),
    .instr(instr),
    .RegWrite(RegWrite),
    .ALUctrl(ALUctrl),
    .ALUsrc(ALUsrc),
    .ImmScr(ImmScr),
    .PCsrc(PCsrc)
);

InstrMem MyInstrMem(
    .addr(PC),
    .dout(instr)
);

SignExtend MySignExtend(
    .ImmSrc(ImmScr),
    .ImmOp(ImmOp)
);

endmodule 