`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:23:34 10/22/2015 
// Design Name: 
// Module Name:    control 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module control(opcode, ctrl);

	input[5:0] opcode;
	output reg[8:0] ctrl;
	reg regdst, branch, memread, memtoreg, memwrite, alusrc, regwrite;
	reg [1:0] aluop;

	
	always@(*)
	begin
		if(opcode == 0)//r-type instruction
			regdst = 1;
		else
			regdst = 0;
		if(opcode == 4)// 000100 branch if equal
			branch = 1;
		else
			branch = 0;
			
		if(opcode == 35)
			memread = 1;
		else 
			memread = 0;
			
		if(opcode == 35)
		begin
			memtoreg = 1;
		end
		else
			memtoreg = 0;
			
		if(opcode == 8 || opcode == 35 || opcode == 43)
			aluop = 0;
		else if(opcode == 0)
			aluop = 2;
		else if(opcode == 15)
			aluop = 3;
		else 
			aluop = 1;
			
		if(opcode == 43)
			memwrite = 1;
		else
			memwrite = 0;
			
		if(opcode == 8 || opcode == 35 || opcode == 43 || opcode == 15)
			alusrc = 1;
		else
			alusrc = 0;
			
		if(opcode == 8 || opcode == 35 || opcode == 0 || opcode === 15)
			regwrite = 1;
		else 
			regwrite = 0;
			
			ctrl[8] = memtoreg;
			ctrl[7] = regwrite;
			ctrl[6] = memwrite;
			ctrl[5] = memread;
			ctrl[4] = branch;
			ctrl[3] = alusrc;
			ctrl[2:1] = aluop;
			ctrl[0] = regdst;
	end
		
endmodule

