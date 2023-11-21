module ControlUnit #(
    parameter DATA_WIDTH = 32
)(
    logic input                         EQ,
    logic input [DATA_WIDTH-1:0]        instr,
    logic output                        RegWrite,
    logic output [2:0]                  ALUctrl,
    logic output                        ALUsrc,
    logic output [1:0]                 ImmSrc, 
    logic output                        PCsrc
);
    //for ImmSrc
    //R => 00
    //I => 01
    //S => 10
    //B => 11

    logic opcode = instr[6:0]
    
    always_comb 
    case (opcode)
    7'b0010011: begin //addi instruction
        RegWrite = 1;
        ALUctrl = 3'b000;
        ALUsrc = 1;
        ImmScr = 2'b01;
        PCsrc = 0;
    end
    7'b1100011: begin //bne instruction
        RegWrite = 0;
        ALUctrl = 3'b000;
        ALUsrc = 0;
        ImmScr = 2'b11;
        PCsrc = EQ;
    end
        default begin //just in case we have something else
        RegWrite = 1;
        ALUctrl = 3'b000;
        ALUsrc = 1;
        ImmScr = 2'b00;
        PCsrc = 0;
    end
    endcase 
endmodule