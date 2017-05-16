module regblock(clk, ce, readreg1, readreg2, writereg, writedata, regwrite, reg1, reg2);
//ab
input wire [4:0] readreg1, readreg2, writereg;
input wire [31:0] writedata;
input wire regwrite, clk, ce;
output reg[31:0] reg1, reg2;

reg [31:0]regfile[31:0];

initial 
begin
	regfile[0] <= 0;
end

/*	assign reg1 = regfile[readreg1];
	assign reg2 = regfile[readreg2];*/
	
always @*
begin

	if(readreg1 == writereg && regwrite == 1)
		reg1 <= writedata;
	else
		reg1 <= regfile[readreg1];
		
	if(readreg2 == writereg && regwrite == 1)
		reg2 <= writedata;
	else
		reg2 <= regfile[readreg2];
end

always @( posedge clk)
begin
	if(regwrite)
		regfile[writereg] <= writedata;
end

endmodule 