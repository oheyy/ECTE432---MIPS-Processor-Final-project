`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:50:24 10/22/2015 
// Design Name: 
// Module Name:    ex_mem_reg 
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
module ex_mem_reg(pc, pc_out, wb, wb_out, m, memwrite, memread, branch, zero, zero_out, alu_in, alu_out, readreg_rt, readreg_rt_out, writereg, writereg_out, clk, ce);
	input clk, ce;
	//Control Signal
	input[31:0] pc;
	output reg[31:0] pc_out;
	input[1:0] wb;
	input[2:0] m;
	output reg[1:0] wb_out;
	output reg memwrite, memread, branch;
	//alu
	input zero;
	input[31:0] alu_in;
	output reg zero_out;
	output reg[31:0] alu_out;
	//reg
	input[31:0] readreg_rt;
	input[4:0] writereg;
	output reg[4:0] writereg_out;
	output reg[31:0] readreg_rt_out;

	always @(posedge clk)
	begin
		pc_out <= pc;
		wb_out[1] <= wb[1]; // memtoreg
		wb_out[0] <= wb[0]; //regwrite
		memwrite <= m[2]; //memwrite
		memread <= m[1]; //memread
		branch <= m[0]; //branch
		zero_out <= zero;
		alu_out <= alu_in;
		writereg_out <= writereg;
		readreg_rt_out <= readreg_rt;
	end
endmodule
