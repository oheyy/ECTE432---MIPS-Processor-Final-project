module leftshift_add(pc, imm_32, out);
	input[31:0] pc, imm_32;
	output reg[31:0] out;
	always@(*)
	begin
		out <= (pc + (imm_32<<2));
	end
endmodule