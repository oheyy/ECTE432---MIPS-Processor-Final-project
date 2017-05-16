`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:26:43 10/22/2015 
// Design Name: 
// Module Name:    if_id_reg 
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
module if_id_reg(opcode, rs, rt, rd, func, imm, opcode_out, rs_out, rt_out, rd_out, func_out, imm_out, if_id_write, pc_plus4_in, pc_plus4_out, clk, ce);
	input clk, ce;
	input if_id_write;
	input [5:0] opcode, func;
	input [4:0] rs, rt, rd;
	input [15:0] imm;
	input [31:0] pc_plus4_in;
	output reg [31:0] pc_plus4_out;
	output reg [5:0] opcode_out, func_out;
	output reg [4:0] rs_out, rt_out, rd_out;
	output reg [15:0] imm_out;

	always @(posedge clk)
	begin
		if(if_id_write == 1)
		begin
			opcode_out <= opcode;
			func_out <= func;
			rs_out <= rs;
			rt_out <= rt;
			rd_out <= rd;
			imm_out <= imm;
			pc_plus4_out <= pc_plus4_in;
		end
		else
		 $display("No Operation!");
	end
endmodule
