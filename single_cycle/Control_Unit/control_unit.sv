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


    //actual ImmSrc
    //00 -> I
    //01 -> S
    //10 -> B 
    //11 -> J


    /*
    3'b000: SUM = ALUop1 + ALUop2;
    3'b001: SUM = ALUop1 - ALUop2;
    3'b010: SUM = ALUop1 & ALUop2;
    3'b011: SUM = ALUop1 | ALUop2;
    3'b100: SUM = ALUop1 ^ ALUop2;
    */

    

    logic [6:0] opcode = instr_i[6:0];
    logic [2:0] funct3 = instr_i[14:12];

    // always_comb
    //     begin
    //         if(opcode  == 7'b0000011):
    //             RegWrite_o = 1'b1;
    //             ImmSrc = 2'b00;
    //             ALUsrc_o = 1'b1;
    //             // MemWrite_o = 1'b0; (currently defaulted to 0)
    //             Resultsrc_o = 2'b01;
    //             // branch logic is missing cause nto sure how to organise PCsrc
    //             ALUctrl = 3'b000;
    //     end



    always_comb  begin

    case (opcode)

    7'b0000011: // load instructions - lb/lh/lw (3) - I Type
                //we need to decide a way to do lb and lh - how does DataMemory work atm?
        begin
            RegWrite_o = 1'b1;
            ImmSrc = 2'b00;
            ALUsrc_o = 1'b1;
            MemWrite_o = 1'b0; 
            Resultsrc_o = 2'b01;
            PCsrc_0 = 2'b000;
            ALUctrl = 3'b000;
        end

    7'b0100011: // sw
        begin
        end
    
    7'b0110011: // R-type
        begin
        end
        
    7'b0010011: //Type I (19)
        begin 
            RegWrite_o = 1'b1;
            ImmSrc_o = 2'b00;
            ALUsrc_o = 1'b1;
            // MemWrite_o = 1'b0; (not sure for this)
            Resultsrc_o = 2'b00;
            PCsrc_o = 2'b00;

                case(funct3)
                    3'b000:  ALUctrl_o = 3'b000; //addi
                    3'b001:  ALUctrl_o = 3'b101; //slli
                    default: ALUctrl_o = 3'b000;
            endcase
        end

    7'b1100011: //Type B
        begin
            RegWrite_o = 1'b0;
            ImmSrc_o = 2'b10; 
            ALUsrc_o = 1'b0;
            MemWrite_o = 1'b0;
            Resultsrc_o = 2'b01;  //dont care
            ALUctrl_o = 3'b001; //should be 001 - but we dk why it matters

                case(funct3)
                    //func3 shouldnt affect PCsrc?
                    3'b000: PCsrc_o = {1'b0 , Zero_i}; //beq
                    3'b001: PCsrc_o = {1'b0, !Zero_i}; //bne
                    default: PCsrc_o = {1'b0 , Zero_i};
                endcase
        end

    7'b1101111: //Type J - JAL
        begin 
            RegWrite_o = 1;
            ImmSrc_o = 2'b11;
            ALUsrc_o = 1'b1;
            // MemWrite_o = 1'b0; (not sure for this)
            Resultsrc_o = 2'b10;
            ALUctrl_o = 3'b000;
            PCsrc_o = 2'b01;
        end

    7'b1100111: //Type I - JALR
        begin 
            RegWrite_o = 1'b0;
            ImmSrc_o = 2'b00;   
            ALUsrc_o = 1'b1; //was blank before - check instr
            // MemWrite_o = 1'b0; (not sure for now)
            Resultsrc_o = 2'b10;
            ALUctrl_o = 3'b000; //dont care
            PCsrc_o = 2'b10;
        end
    
    default: //just in case we have something else
        begin 
            RegWrite_o = 1'b1;
            ImmSrc_o = 2'b00;
            ALUsrc_o = 1'b1;
            // MemWrite_o = 1'b0; (not sure for now)
            Resultsrc_o = 2'b00;
            ALUctrl_o = 3'b000;
            PCsrc_o = 2'b00;
        end

    endcase 

    assign MemWrite_o = 1'b0; //we let it be 0 for now
    
    end

    
endmodule

