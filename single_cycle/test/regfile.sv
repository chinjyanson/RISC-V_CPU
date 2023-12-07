module regfile #(
    parameter ADDRESS_WIDTH = 8,
    parameter DATA_WIDTH = 32
)(
    input   logic                   clk,
    input   logic [2:0]             WE3,
    input   logic [DATA_WIDTH-1:0]  WD3,
    input   logic [DATA_WIDTH-1:0]  Instr,
    output  logic [DATA_WIDTH-1:0]  RD1,
    output  logic [DATA_WIDTH-1:0]  RD2,
    output  logic [DATA_WIDTH-1:0]  a0  //(debug output)
);

logic[7:0] A2 = {3'b0 , Instr[24:20]};
logic[7:0] A1 = {3'b0 , Instr[19:15]};
logic[7:0] A3 = {3'b0 , Instr[11:7]};

logic [DATA_WIDTH-1:0] reg_array [2**ADDRESS_WIDTH-1:0];

always @(posedge clk)
    case(WE3) // this could be done cleaner 
        3'b001: begin //write
            reg_array[A3] <= WD3;
        end
        3'b010: begin //lh -sign extended
            reg_array[A3] <= {{16{WD3[15]}}, WD3[15:0]};
        end
        3'b011: begin //lb - sign extended
            reg_array[A3] <= {{24{WD3[7]}}, WD3[7:0]};
        end
        3'b111: begin  //lbu - zero extended
            reg_array[A3] <= {{24'b0}, WD3[7:0]};
        end 
        3'b110: begin  //lhu - zero extended
            reg_array[A3] <= {16'b0, WD3[15:0]};
        end


        
    endcase

assign RD1 = reg_array[A1];
assign RD2 = reg_array[A2];
assign a0 =  reg_array[11];

endmodule
