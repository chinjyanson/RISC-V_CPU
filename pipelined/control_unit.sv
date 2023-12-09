module control_unit (
    input   logic [6:0]                     opcode,
    input   logic [2:0]                     funct3,
    input   logic                           funct7,      
    output  logic [2:0]                     RegWrite,
    output  logic [1:0]                     MemWriteD,
    output  logic [1:0]                     ResultsrcD,
    output  logic [2:0]                     ALUctrlD,
    output  logic                           ALUsrcD,
    output  logic [1:0]                     ImmSrcD, 
    output  logic                           JumpD,
    output  logic                           BranchD
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

    
    always_comb
        case ({instr_i[6:0],instr_i[14:12]})
            {7'b0010011, 3'b000}:   RegWrite_o = 1'b1;
            {7'b0000011, 3'b010}:   RegWrite_o = 1'b1;
            default: RegWrite_o = 1'b0;
        endcase

    always_comb
        case ({instr_i[6:0],instr_i[14:12]})
            {7'b0010011, 3'b000}:   ALUctrl = 3'b0;
            default: ALUctrl_o = 3'b111;
        endcase

    always_comb
        case ({instr_i[6:0],instr_i[14:12]})
            {7'b0010011, 3'b000}:   ALUsrc_o = 1'b1;
            default: ALUsrc_o = 1'b0;
        endcase

    always_comb
        begin
            if ({instr_i[6:0],instr_i[14:12]} == {7'b0010011, 3'b000})
                ImmSrc_o = {instr_i[31:20]};
            else if ({instr_i[6:0],instr_i[14:12]} == {7'b1100011,3'b001})
                ImmSrc_o = {instr_i[31],instr_i[7],instr_i[30:25],instr_i[11:8]};
            else
                ImmSrc_o = {instr_i[31:20]};
        end

    always_comb
        begin
            if (({instr_i[6:0],instr_i[14:12]} == {7'b1100011,3'b000}) && EQ)
                PCsrc_o = 1'b1;
            else if (({instr_i[6:0],instr_i[14:12]} == {7'b1100011,3'b001}) && ~EQ)
                PCsrc_o = 1'b1;
            else
                PCsrc_o = 1'b0;
        end

    always_comb
        MEMWrite_o = 1'b0;

    always_comb 
        case ({instr_i[6:0],instr_i[14:12]})
            {7'b0000011, 3'b010}:   MEMsrc_o = 1'b1;
            default:                MEMsrc_o = 1'b0;
            
        endcase

            

 
endmodule