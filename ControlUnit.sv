module ControlUnit #(
    parameter DATA_WIDTH = 32
)(
    logic input                         EQ,
    logic input [DATA_WIDTH-1:0]        instr,
    logic output                        RegWrite,
    logic output [2:0]                  ALUctrl,
    logic output                        ALUsrc,
    logic output [11:0]                 ImmSrc, 
    logic output                        PCsrc
);

endmodule