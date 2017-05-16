module pcplus4(pc, pcplus4_out);
	input[31:0] pc;
	output reg[31:0] pcplus4_out;
	
	initial begin
	pcplus4_out = 0;
	end
	
	always @(pc)
	begin
	pcplus4_out <= pc + 4;
	end
endmodule