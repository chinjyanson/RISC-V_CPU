module regfile #(
    parameter ADDRESS_WIDTH = 8,
    parameter DATA_WIDTH = 32
)(
    input   logic                   clk,
    input   logic [1:0]             WE3,
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

always_ff @(posedge clk) begin 
    case(WE3) // this could be done cleaner 
        2'b01: begin //word write
            reg_array[A3] <= WD3;
        end
        2'b10: begin //half word 
            reg_array[A3][15:0] <= WD3[15:0];
        end
        2'b11: begin //write byte
            reg_array[A3][7:0] <= WD3[7:0];
        end
        default: begin             //dont do anything?
        end 
    endcase
end 

assign RD1 = reg_array[A1];
assign RD2 = reg_array[A2];
assign a0 =  reg_array[10];

endmodule
