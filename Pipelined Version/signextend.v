module signextend(instr_16,instr_32);
	input[15:0] instr_16;
	output reg[31:0] instr_32;
always@(instr_16)
begin
	instr_32 <= $signed(instr_16);
end

endmodule
