module hazard_control(
    input  logic [1:0]    PCSrcE,
    output logic         PCrst,
    output logic         Frst,
    output logic         Drst
);

//we can only determine a jump in E
    // if we have a jump we need to reset D, F and PC registers

// if (PCSrcE != 2'b0) begin
//     PCrst = 1;
//     Frst = 1;
//     Drst = 1;
// end else begin 
//     PCrst = 0;
//     Frst = 0;
//     Drst = 0;
// end 

assign PCrst = (PCSrcE != 2'b0) ? 1 : 0;
assign Frst  = (PCSrcE != 2'b0) ? 1 : 0;
assign Drst  = (PCSrcE != 2'b0) ? 1 : 0;

endmodule
