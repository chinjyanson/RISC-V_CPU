module control_unit #(
    parameter DATA_WIDTH = 32,
    parameter CONTROL_WIDTH = 3,
    parameter IMM_WIDTH = 2
)(
    input   logic                           Zero_i,
    input   logic [DATA_WIDTH-1:0]          instr_i,
    output  logic                           RegWrite_o,
    output  logic                           MemWrite_o,
    output  logic [IMM_WIDTH-1:0]           Resultsrc_o,
    output  logic [CONTROL_WIDTH-1:0]       ALUctrl_o,
    output  logic                           ALUsrc_o,
    output  logic [IMM_WIDTH-1:0]           ImmSrc_o, 
    output  logic [IMM_WIDTH-1:0]           PCsrc_o
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

    

    logic [6:0] opcode = instr_i[6:0];
    logic [2:0] funct3 = instr_i[14:12];

    always_comb  begin

    case (opcode)
    7'b0000011: begin //lw
        RegWrite = 1;
        ImmSrc = 2'b00;
        ALUsrc = 1;
        MemWrite = 0;
        Resultsrc = 1'b01;
        

    end
    7'b0100011: begin //sw

    end
    7'b0110011: begin

    end
    7'b0010011: begin //Type I (19)
        RegWrite_o = 1;
        ALUsrc_o = 1;
        Resultsrc_o = 2'b00;
        ImmSrc_o = 2'b01;
        PCsrc_o = 2'b00;
        case(funct3)
        3'b000: ALUctrl_o = 3'b000; //addi
        3'b001: ALUctrl_o = 3'b101; //slli
        default: ALUctrl_o = 3'b000;
        endcase
    end
    7'b1100011: begin //Type B
        RegWrite_o = 0;   
        Resultsrc_o = 2'b01;
        ALUctrl_o = 3'b000; //dont care
        ALUsrc_o = 0;
        ImmSrc_o = 2'b11; 
        case(funct3)
        3'b000: PCsrc_o = {1'b0 , Zero_i}; //beq
        3'b001: PCsrc_o = {1'b0, !Zero_i}; //bne
        default: PCsrc_o = {1'b0 , Zero_i};
        endcase
        
    end
    7'b1101111: begin //Type J - JAL
        RegWrite_o = 1;
        Resultsrc_o = 2'b10;
        ALUctrl_o = 3'b000;
        ALUsrc_o = 1;
        ImmSrc_o = 2'b10;
        PCsrc_o = 2'b01;
    end
    7'b1100111:begin //Type I - JALR
        RegWrite_o = 0;   
        Resultsrc_o = 2'b10;
        ALUctrl_o = 3'b000; //dont care
        ALUsrc_o = 1;
        ImmSrc_o = 2'b11; 
        PCsrc_o = 2'b10;
    end
        default begin //just in case we have something else
        RegWrite_o = 1;
        Resultsrc_o = 2'b00;
        ALUctrl_o = 3'b000;
        ALUsrc_o = 1;
        ImmSrc_o = 2'b00;
        PCsrc_o = 2'b00;
    end
    endcase 
    end

    assign MemWrite_o = 0; //we let it be 0 for now
endmodule

