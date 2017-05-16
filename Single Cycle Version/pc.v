module pc(pcin,pcout,clk,ce);
//abc
input clk, ce;
input[31:0] pcin;
output reg[31:0] pcout;
initial begin
	pcout<=0;
end
always @(posedge clk)
begin
	pcout <= pcin;
end
endmodule
