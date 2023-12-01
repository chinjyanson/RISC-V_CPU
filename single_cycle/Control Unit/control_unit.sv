module control_unit #(
    parameter DATA_WIDTH = 32,
    parameter CONTROL_WIDTH = 3,
    parameter IMM_WIDTH = 2
)(
    input   logic                           Zero,
    input   logic [DATA_WIDTH-1:0]          instr,
    output  logic                           RegWrite,
    output  logic                           MemWrite,
    output  logic [CONTROL_WIDTH-1:0]       Resultsrc,
    output  logic [CONTROL_WIDTH-1:0]       ALUctrl,
    output  logic                           ALUsrc,
    output  logic [IMM_WIDTH-1:0]           ImmSrc, 
    output  logic                           PCsrc
    // output  logic [DATA_WIDTH-1:0]          instr2 (used for debugging)
);
    //for ImmSrc
    //R => 00
    //I => 01
    //S => 10
    //B => 11

    logic [6:0] opcode = instr[6:0];
    
    always_comb  begin

    // instr2 = instr;
    case (opcode)
    7'b0010011: begin //addi instruction
        RegWrite = 1;
        ALUctrl = 3'b000;
        ALUsrc = 1;
        ImmSrc = 2'b01;
        PCsrc = 0;
    end
    7'b1100011: begin //bne instruction
        RegWrite = 0;
        ALUctrl = 3'b000;
        ALUsrc = 0;
        ImmSrc = 2'b11;
        PCsrc = !Zero;
    end
        default begin //just in case we have something else
        RegWrite = 1;
        ALUctrl = 3'b000;
        ALUsrc = 1;
        ImmSrc = 2'b00;
        PCsrc = 0;
    end
    endcase 
    end
endmodule
