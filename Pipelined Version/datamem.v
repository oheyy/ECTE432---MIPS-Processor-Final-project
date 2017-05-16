module  datamem(clk,ce,addr, wrdata, memwrite, memread, rdata);
input clk, ce, memwrite, memread;
input[31:0] addr, wrdata;
output[31:0] rdata;
reg [7:0]mem[50:0]; //268435456

	assign rdata[31:24] = mem[addr[7:0]];	
	assign rdata[23:16] = mem[addr[7:0]+1];	
	assign rdata[15:8] = mem[addr[7:0]+2];	
	assign rdata[7:0] = mem[addr[7:0]+3];	
always @(posedge clk)
	begin
		if(memwrite) begin
			
			mem[addr[6:0]] <= wrdata[31:24];
			mem[addr[6:0]+1] <= wrdata[23:16];
			mem[addr[6:0]+2] <= wrdata[15:8];
			mem[addr[6:0]+3] <= wrdata[7:0];
		end
	end
endmodule
