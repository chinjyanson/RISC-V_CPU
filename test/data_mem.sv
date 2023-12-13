module data_mem #(
    parameter ADDRESS_WIDTH = 8,
    parameter DATA_WIDTH = 32
) (
    input  logic                         clk,
    input  logic [1:0]                   WE,
    input  logic [DATA_WIDTH-1:0]        A,
    input  logic [DATA_WIDTH-1:0]        WD,
    output logic [DATA_WIDTH-1:0]        test,
    output logic [DATA_WIDTH-1:0]        RD
);

    /*
    WE:
        00 - dont write
        01 - write all word (32 bits)
        10 - write half word (16 bits)
        11 - write last byte (8 bits)
    */   
    logic [DATA_WIDTH-1:0]  data_mem_register [(2**17)-1:0]; //we set our reg file which will be filled with initial values
    integer starting_address = 32'h10000;


    initial begin
        $display("Loading ROM");
        $readmemh("sine.mem", data_mem_register, starting_address);
     end

    logic [17:0] add = A[17:0];
    logic [15:0] data16 = WD[15:0];
    logic [7:0] data8 = WD[7:0];

    always_ff @(posedge clk) begin
        case(WE) // this could be done cleaner 
        2'b01: 
        begin //word write
            data_mem_register[add] <= WD;
        end
        2'b10: 
        begin //half word 
            data_mem_register[add][15:0] <= data16;
        end
        2'b11:
        begin //write byte
            data_mem_register[add][7:0] <= data8;
        end
        endcase
    end 

    assign test = data_mem_register[(2**17)-2];
    assign RD = data_mem_register[add]; //we read and output the [A] register value

endmodule
