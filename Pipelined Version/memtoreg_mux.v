module memtoreg_mux(memtoreg, rdata, aluout, writedata);
	input memtoreg;
	input[31:0] rdata, aluout;
	output reg[31:0] writedata;
	
	always@(*)
	begin
		if(memtoreg == 0)
			writedata <= aluout;
		else
			writedata <= rdata;
	end
endmodule