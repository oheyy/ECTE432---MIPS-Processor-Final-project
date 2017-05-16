module pc(pcin,pcout, pcwrite,clk,ce);
input clk, ce, pcwrite;
input[31:0] pcin;
output reg[31:0] pcout;
initial begin
	pcout <= 0;
end
always @(posedge clk)
begin
	if(pcwrite == 1) 
		pcout <= pcin; //nop
	else
		$display("Skip writing to pc nop");//nop
end
endmodule
