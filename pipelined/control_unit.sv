module control_unit #(
    parameter DATA_WIDTH = 32,
    parameter CONTROL_WIDTH = 3,
    parameter IMM_WIDTH = 2
)(
    input   logic [6:0]                     opcode,
    input   logic [2:0]                     funct3,
    input   logic                           funct7,      
    output  logic [2:0]                     RegWrite,
    output  logic [1:0]                     MemWriteD,
    output  logic [IMM_WIDTH-1:0]           ResultsrcD,
    output  logic [CONTROL_WIDTH-1:0]       ALUctrlD,
    output  logic                           ALUsrcD,
    output  logic [IMM_WIDTH-1:0]           ImmSrcD, 
    output  logic                           JumpD,
    output logic                            BranchD
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
    
    always_comb  begin

    case (opcode)

    7'b0000011: // (3) load instructions - I Type
        begin
            ImmSrcD = 2'b00;
            ALUsrcD = 1'b1;
            MemWriteD = 2'b00; 
            ResultsrcD = 2'b01;
            PCsrcD = 2'b000;
            ALUctrlD = 3'b000;
            case(funct3)
                3'b000: RegWrite = 3'b011; //lb
                3'b001: RegWrite = 3'b010; //lh
                3'b010: RegWrite = 3'b001; //lw
                3'b100: RegWrite = 3'b111; //lbu
                3'b101: RegWrite = 3'b110; //lhu
                default: RegWrite = 3'b000; //(not sure what default should be but 000 for now)
            endcase
        end

    7'b0100011: // (35) store instrucions - S type 
        begin
            ImmSrcD = 2'b01;
            ALUsrcD = 1'b1;
            RegWrite = 3'b000; 
            ResultsrcD = 2'b00;
            PCsrcD = 2'b000;
            ALUctrlD = 3'b000;
            case(funct3)
                3'b000: MemWriteD = 2'b11; //sb
                3'b001: MemWriteD = 2'b10; //sh
                3'b010: MemWriteD = 2'b01; //sw
                default: MemWriteD = 2'b00; //(not sure what default should be but 000 for now)
            endcase
        end
    
    7'b0110011: // R-type
        begin
            RegWrite = 3'b001;
            ImmSrcD = 2'b00;
            ALUsrcD = 1'b0;
            MemWriteD = 2'b00;
            ResultsrcD = 2'b00;
            PCsrcD = 2'b00;
            case(funct3)
                3'b000:
                    begin
                        if({opcode[5], funct7} == {1'b1, 1'b1})
                            ALUctrlD = 3'b001;
                        else
                            ALUctrlD = 3'b000;
                    end 
                3'b010: ALUctrlD = 3'b101;
                3'b110: ALUctrlD = 3'b011;
                3'b111: ALUctrlD = 3'b010;
                default: ALUctrlD = 3'b000;
            endcase
        end
        
    7'b0010011: //Type I (19)
        begin 
            RegWrite = 3'b001;
            ImmSrcD = 2'b00;
            ALUsrcD = 1'b1;
            MemWriteD = 2'b00; 
            ResultsrcD = 2'b00;
            PCsrcD = 2'b00;

                case(funct3)
                    3'b000:  ALUctrlD = 3'b000; //addi
                    3'b001:  ALUctrlD = 3'b101; //slli
                    default: ALUctrlD = 3'b000;
            endcase
        end

    7'b1100011: //Type B
        begin
            RegWrite = 3'b000;
            ImmSrcD = 2'b10; 
            ALUsrcD = 1'b0;
            MemWriteD = 2'b00;
            ResultsrcD = 2'b01;  //dont care
            ALUctrlD = 3'b001; //should be 001 - but we dk why it matters

                case(funct3)
                    //func3 shouldnt affect PCsrc? - we need to change this for pipeling
                    3'b000: PCsrcD = {1'b0 , Zero_i}; //beq
                    3'b001: PCsrcD = {1'b0, !Zero_i}; //bne
                    default: PCsrcD = {1'b0 , Zero_i};
                endcase
        end

    7'b1101111: //Type J - JAL
        begin 
            RegWrite = 3'b001;
            ImmSrcD = 2'b11;
            ALUsrcD = 1'b1;
            MemWriteD = 2'b00; 
            ResultsrcD = 2'b10;
            ALUctrlD = 3'b000;
            PCsrcD = 2'b01;
        end

    7'b1100111: //Type I - JALR
        begin 
            RegWrite = 3'b000;
            ImmSrcD = 2'b00;   
            ALUsrcD = 1'b1; //was blank before - check instr
            MemWriteD = 2'b00; 
            ResultsrcD = 2'b10;
            ALUctrlD = 3'b000; //dont care
            PCsrcD = 2'b10;
        end
    
    default: //just in case we have something else
        begin 
            RegWrite = 3'b001;
            ImmSrcD = 2'b00;
            ALUsrcD = 1'b1;
            MemWriteD = 2'b00;
            ResultsrcD = 2'b00;
            ALUctrlD = 3'b000;
            PCsrcD = 2'b00;
        end

    endcase 
    
    end

endmodule

