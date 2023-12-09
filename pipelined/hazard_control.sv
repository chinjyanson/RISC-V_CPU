module hazard_control(
    logic input [1:0]    PCSrcE,
    logic output         PCrst,
    logic output         Frst,
    logic output         Drst
);

//we can only determine a jump in E
    // if we have a jump we need to reset D, F and PC registers

if (PCSrcE != 2'b0) begin
    PCrst = 1;
    Frst = 1;
    Drst = 1;
end

endmodule