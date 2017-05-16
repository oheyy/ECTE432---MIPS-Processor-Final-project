`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:23:44 10/22/2015 
// Design Name: 
// Module Name:    mem_wb_reg 
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
module mem_wb_reg(wb, memtoreg, regwrite, dmem, dmem_out, alu, alu_out, writereg, writereg_out, clk, ce);
	input clk, ce;
	//datamemory
	input[31:0] dmem;
	output reg[31:0] dmem_out;
	//aluout
	input[31:0] alu;
	output reg[31:0] alu_out;
	//reg
	input[4:0] writereg;
	output reg[4:0] writereg_out;
	//control signal
	input[1:0] wb;
	output reg memtoreg, regwrite;

	always @(posedge clk)
	begin
			memtoreg <= wb[1]; //memtoreg
			regwrite <= wb[0]; //regwrite
			dmem_out <= dmem;
			alu_out <= alu;
			writereg_out <= writereg;
	end

endmodule
