module alub_mux(alusrc, b, imm, alub);
	input alusrc;
	input[31:0] b, imm;
	output reg[31:0] alub;
	
	always@(*)
	begin
		if(alusrc == 0)
			alub <= b;
		else
			alub <= imm;
	end
endmodule