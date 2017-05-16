`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:31:15 10/22/2015 
// Design Name: 
// Module Name:    id_ex_reg 
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
module id_ex_reg(pc, pcout, ctrl, wb_out, m_out, alusrc, aluop, regdst, regdata_rs, regdata_rt,regdata_rs_out, regdata_rt_out, imm, rt, rd, imm_out, rt_out, rd_out, clk, ce);
	input clk, ce;
	input[31:0] pc;
	output reg[31:0] pcout;
	//reg out
	input[31:0]regdata_rs, regdata_rt;
	output reg[31:0] regdata_rs_out, regdata_rt_out;
	//reg in
	input[31:0] imm;
	input[4:0] rt, rd;
	output reg[31:0] imm_out;
	output reg[4:0] rt_out, rd_out;
	//control signals
	input[8:0] ctrl;       
	output reg alusrc, regdst;
	output reg[1:0] wb_out, aluop;
	output reg[2:0] m_out;

	always @(posedge clk)
	begin
			pcout <= pc;
			regdata_rs_out <= regdata_rs;
			regdata_rt_out <= regdata_rt;
			imm_out <= imm;
			rt_out <= rt;
			rd_out <= rd;
			wb_out[1] <= ctrl[8]; //memtoreg
			wb_out[0] <= ctrl[7]; //regwrite
			m_out[2] <= ctrl[6]; //memwrite
			m_out[1] <= ctrl[5]; //memread
			m_out[0] <= ctrl[4]; //branch
			alusrc <= ctrl[3]; //alusrc
			aluop <= ctrl[2:1];//aluop
			regdst <= ctrl[0]; //regdst
			
	end


endmodule
