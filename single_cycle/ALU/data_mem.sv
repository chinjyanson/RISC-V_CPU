module data_mem #(
    parameter ADDRESS_WIDTH = 8,
    parameter DATA_WIDTH = 32,
    parameter REG_WIDTH = 8 //convert to byte addressing
) (
    input  logic                             clk,
    input  logic     [1:0]                   WE,
    input  logic     [ADDRESS_WIDTH-1:0]     A,
    input  logic     [DATA_WIDTH-1:0]        WD,
    output logic     [DATA_WIDTH-1:0]        RD
);

    /*
    WE:
        00 - dont write
        01 - write all word (32 bits)
        10 - write half word (16 bits)
        11 - write last byte (8 bits)
    */   
    logic [REG_WIDTH-1:0]  data_mem_register [2**ADDRESS_WIDTH-1:0]; //we set our reg file which will be filled with initial values

    initial begin
        $display("Loading ROM");
        $readmemh("datarom.mem", data_mem_register); // load sine wave gen for testing (remove for final)
    end
    
    always_ff @(posedge clk) 
        case(WE) // this could be done cleaner 
        2'b01: begin //word write
            data_mem_register[A] <= WD[7:0];
            data_mem_register[A+1] <= WD[15:8];
            data_mem_register[A+2] <= WD[23:16];
            data_mem_register[A+3] <= WD[31:24];
        end
        2'b10: begin //half word 
            data_mem_register[A] <= WD[7:0];
            data_mem_register[A+1] <= WD[15:8];
        end
        2'b11:begin //write byte
            data_mem_register[A] <= WD[7:0];
        end
        default: 
            //dont do anything?
        endcase

    assign RD = {data_mem_register[A], data_mem_register[A+1], data_mem_register[A+2], data_mem_register[A+3]}; //we read and output the [A] register value

endmodule
