module regdst_mux(regdst, rt, rd, writereg);
	input regdst;
	input[4:0] rt, rd;
	output reg[4:0] writereg;
	
	always@(*)
	begin
		if(regdst == 0)
			writereg <= rt;
		else
			writereg <= rd;
	end
endmodule