module regblock(clk, ce, readreg1, readreg2, writereg, writedata, regwrite, reg1, reg2);
//ab
input wire [4:0] readreg1, readreg2, writereg;
input wire [31:0] writedata;
input wire regwrite, clk, ce;
output [31:0] reg1, reg2;

reg [31:0]regfile[31:0];

initial 
begin
	regfile[0] <= 0;
end

assign reg1 = regfile[readreg1];
assign reg2 = regfile[readreg2];

always @( posedge clk)
begin
	if(regwrite)
		regfile[writereg] <= writedata;
end

endmodule 