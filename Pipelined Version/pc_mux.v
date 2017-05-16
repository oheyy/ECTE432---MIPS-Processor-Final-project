module pc_mux(branch, zero, pcplus4, bradd, pc_next);
	input branch, zero;
	input[31:0] pcplus4, bradd;
	output reg [31:0] pc_next;

	always @(*)
	begin
		if(branch && (zero == 1))
			pc_next <= bradd;
		else
			pc_next <= pcplus4;
	end
endmodule