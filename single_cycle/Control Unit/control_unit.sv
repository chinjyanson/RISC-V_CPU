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

    /*
    3'b000: SUM = ALUop1 + ALUop2;
    3'b001: SUM = ALUop1 - ALUop2;
    3'b010: SUM = ALUop1 & ALUop2;
    3'b011: SUM = ALUop1 | ALUop2;
    3'b100: SUM = ALUop1 ^ ALUop2;
    */

    logic [6:0] opcode = instr[6:0];
    logic [2:0] funct3 = instr[14:12];

    always_comb  begin

    case (opcode)
    7'b0010011: begin //Type I (19)
        RegWrite = 1;
        ALUsrc = 1;
        ImmSrc = 2'b01;
        PCsrc = 0;
        case(funct3)
        3'b000: ALUctrl = 3'b000; //addi
        3'b001: ALUctrl = 3'101: //slli
        endcase
    end
    7'b1100011: begin //Type B
        RegWrite = 0;   
        ALUctrl = 3'b000; //dont care
        ALUsrc = 0;
        ImmSrc = 2'b11; 
        case(funct3)
        3'b000: PCsrc = Zero; //beq
        3'b001: PCsrc = !Zero; //bne
        endcase
        
    end
    7'b1101111: begin //Type J - JAL
        RegWrite = 1;
        ALUctrl = 3'b000;
        ALUsrc = 1;
        ImmSrc = 2'b10;
        PCsrc = 1;
    end
    7'b1100111:begin //Type I - JALR
        RegWrite = 0;   
        ALUctrl = 3'b000; //dont care
        ALUsrc = ;
        ImmSrc = 2'b11; 
        PCscr = 1
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

//Jalr zero, 0(ra)

//we need to have a cable to read from PC, if we want to set rd = PC +4