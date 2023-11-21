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

    logic opcode = instr[6:0]
    
    always_comb 
    case (opcode)
    7'b0010011: begin //addi instruction
        RegWrite = 1;
        ALUctrl = 3'b000;
        ALUsrc = 1;
        ImmScr = instr[31:20];
        PCsrc = 0;
    end
    7'b1100011: begin //bne instruction
        RegWrite = 0;
        ALUctrl = 3'b000;
        ALUsrc = 0;
        ImmScr = {instr[31] , instr[7] , instr[30:25] , instr[11:8]};
        PCsrc = EQ;
    end
        default begin //just in case we have something else
        RegWrite = 1;
        ALUctrl = 3'b000;
        ALUsrc = 1;
        ImmScr = instr[31:20];
        PCsrc = 0;
    end
    endcase 
endmodule