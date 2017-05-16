`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:47:16 10/23/2015 
// Design Name: 
// Module Name:    pipeline_top 
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
`include "pc.v"
`include "instrmem.v"
`include "if_id_reg.v"
`include "id_ex_reg.v"
`include "mem_wb_reg.v"
`include "ex_mem_reg.v"
`include "alu.v"
`include "alucontrol.v"
`include "control.v"
`include "datamem.v"
`include "hazard_detection_unit.v"
`include "regblock.v"
`include "signextend.v"
`include "mux_bubble.v"
`include "pcplus4.v"
`include "pc_mux.v" 
`include "leftshift_add.v"
`include "memtoreg_mux.v"
`include "regdst_mux.v"
`include "alub_mux.v"

module pipeline_top(clk, ce, aluaa, alubb, aluoutt, pc_out, nop, rs_in, rt_in, rd_in, reg_out_1, reg_out_2, read_data_dm );
	input clk,ce;
	output[31:0] aluaa, alubb, aluoutt, pc_out, reg_out_1, reg_out_2, read_data_dm;
	output nop;
	output[4:0] rs_in, rt_in, rd_in;
	
	assign aluaa = reg1_out;
	assign alubb = alub_sel;
	assign aluoutt = aluout;
	assign pc_out = pcout;
	assign reg_out_1 = reg1;
	assign reg_out_2 = reg2;
	assign read_data_dm = rdata;
	assign nop = sel;
	assign rs_in = rs_out;
	assign rt_in = rt_out;
	assign rd_in = rd_out;
	
// IF
	wire pcwrite;
	wire [31:0] pcout;
	wire [31:0] pcin;
	pc pc (
	 .pcin(pcin), 
	 .pcout(pcout), 
	 .pcwrite(pcwrite), 
	 .clk(clk), 
	 .ce(ce)
	 );
	 wire [5:0] opcode, func;
	 wire[4:0] rs, rt, rd;
	 wire[15:0] imm;
	instrmem instrmem (
	 .pcread(pcout), 
	 .opcode(opcode), 
	 .rs(rs), 
	 .rt(rt), 
	 .rd(rd), 
	 .func(func), 
	 .imm(imm)
	 );
	 wire[31:0] pc_plus4;
	 pcplus4 plus4(
	 .pc(pcout), 
	 .pcplus4_out(pc_plus4));
	 
	 wire [5:0] opcode_out, func_out;
	 wire[4:0] rs_out, rt_out, rd_out;
	 wire if_id_write;
	 wire[31:0] pc_plus4_out;

	 wire[15:0] imm_16;
	if_id_reg ifid(
	 .opcode(opcode), 
	 .rs(rs), 
	 .rt(rt), 
	 .rd(rd), 
	 .func(func), 
	 .imm(imm), 
	 .opcode_out(opcode_out), 
	 .rs_out(rs_out), 
	 .rt_out(rt_out), 
	 .rd_out(rd_out), 
	 .func_out(func_out), 
	 .imm_out(imm_16), 
	 .if_id_write(if_id_write), 
	 .pc_plus4_in(pc_plus4), 
	 .pc_plus4_out(pc_plus4_out), 
	 .clk(clk), 
	 .ce(ce)
	 );
	 

	 wire branch, zero_out;
	 wire[31:0] branch_addr_out;
	 pc_mux pc_mux(
	 .branch(branch), 
	 .zero(zero_out),
	 .pcplus4(pc_plus4), 
	 .bradd(branch_addr_out), 
	 .pc_next(pcin)
	 );
	// ID
	

	wire regwrite;
	wire[4:0] writereg_out_wb_reg;
	wire[31:0] reg1, reg2;
	wire[31:0] mux_writeback_data;
	regblock regfile(
	 .clk(clk), 
	 .ce(ce), 
	 .readreg1(rs_out), 
	 .readreg2(rt_out), 
	 .writereg(writereg_out_wb_reg), 
	 .writedata(mux_writeback_data), 
	 .regwrite(regwrite), 
	 .reg1(reg1), 
	 .reg2(reg2)
	 );
	 wire[31:0] instr_32;
	signextend sign_extend(
	 .instr_16(imm_16), 
	 .instr_32(instr_32)
	 );
	 wire[8:0] ctrl;
	control control (
	 .opcode(opcode_out), 
	 .ctrl(ctrl)
	 );
	 wire sel;
	 wire [8:0] out;
	mux_bubble mux_bubble_ut(
	 .sel(sel), 
	 .ctrl(ctrl), 
	 .out(out)
	 );
	//EX
	wire[1:0] wb_out, aluop;
	wire[2:0] m_out;
	wire alusrc, regdst;
	wire[31:0] reg1_out, reg2_out;
	wire[31:0] instr_32_ex, pc_plus4_ex;
	wire[4:0] rt_out_ex, rd_out_ex;
	
	id_ex_reg id_ex_reg_ut(
	 .pc(pc_plus4_out), 
	 .pcout(pc_plus4_ex),
	 .ctrl(ctrl), 
	 .wb_out(wb_out), 
	 .m_out(m_out), 
	 .alusrc(alusrc), 
	 .aluop(aluop), 
	 .regdst(regdst), 
	 .regdata_rs(reg1), 
	 .regdata_rt(reg2), 
	 .regdata_rs_out(reg1_out), 
	 .regdata_rt_out(reg2_out), 
	 .imm(instr_32), 
	 .rt(rt_out), 
	 .rd(rd_out), 
	 .imm_out(instr_32_ex), 
	 .rt_out(rt_out_ex), 
	 .rd_out(rd_out_ex), 
	 .clk(clk), 
	 .ce(ce)
	 );
	 wire[31:0] alub_sel;
	 alub_mux mux_alub(
	 .alusrc(alusrc), 
	 .b(reg2_out), 
	 .imm(instr_32_ex), 
	 .alub(alub_sel)
	 );
	 wire[4:0] regdst_out;
	 regdst_mux mux_regdst(
	.regdst(regdst), 
	.rt(rt_out_ex), 
	.rd(rd_out_ex), 
	.writereg(regdst_out)
	);
	 wire[31:0] branch_addr;
	 leftshift_add leftshift(
	 .pc(pc_plus4_ex), 
	 .imm_32(instr_32_ex), 
	 .out(branch_addr)
	 );
	 wire[3:0] aluctrl;
	alucontrol alucontrol_ut (
	 .aluop(aluop), 
	 .funcode(instr_32_ex[5:0]), 
	 .aluctrl(aluctrl)
	 );
	 wire[31:0] aluout;
	 wire zero;
	 
	mipsalu mipsalu_ut (
	 .aluctl(aluctrl), 
	 .a(reg1_out), 
	 .b(alub_sel), 
	 .aluout(aluout), 
	 .zero(zero)
	 );
	//MEM
	wire[31:0] aluout_mem, reg2_out_mem;
	wire[1:0] wb_out_mem;
	wire[4:0] writereg_out;
	wire memwrite, memread;
	ex_mem_reg ex_mem_reg_ut(
	.pc(branch_addr),
	.pc_out(branch_addr_out),
    .wb(wb_out), 
    .wb_out(wb_out_mem), 
    .m(m_out), 
    .memwrite(memwrite), 
    .memread(memread), 
    .branch(branch), 
    .zero(zero), 
    .zero_out(zero_out), 
    .alu_in(aluout), 
    .alu_out(aluout_mem), 
    .readreg_rt(reg2_out), 
    .readreg_rt_out(reg2_out_mem), 
    .writereg(regdst_out), 
    .writereg_out(writereg_out), 
    .clk(clk), 
    .ce(ce)
    );
	wire[31:0] rdata;
	datamem datamem_ut (
	 .clk(clk), 
	 .ce(ce), 
	 .addr(aluout_mem), 
	 .wrdata(reg2_out_mem), 
	 .memwrite(memwrite), 
	 .memread(memread), 
	 .rdata(rdata)
	 );
	//WB
	wire memtoreg;
	wire[31:0] radata_out, aluout_wb;
	mem_wb_reg mem_wb_reg_ut(
	 .wb(wb_out_mem), 
	 .memtoreg(memtoreg), 
	 .regwrite(regwrite), 
	 .dmem(rdata), 
	 .dmem_out(radata_out), 
	 .alu(aluout_mem), 
	 .alu_out(aluout_wb), 
	 .writereg(writereg_out), 
	 .writereg_out(writereg_out_wb_reg), 
	 .clk(clk), 
	 .ce(ce)
	 );
	 memtoreg_mux mux_memtoreg(
	 .memtoreg(memtoreg), 
	 .rdata(radata_out), 
	 .aluout(aluout_wb), 
	 .writedata(mux_writeback_data)
	 );
	//Hazard Detection Unit
	
	hazard_detection_unit hazard_detection_ut(
	 .mem_wbout(wb_out_mem),
	 .id_ex_memread(m_out),
	 .wbout(wb_out), 
	 .pcwrite(pcwrite), 
	 .if_id_write(if_id_write), 
	 .mux_bubble(sel), 
	 .if_id_rt(rt_out), 
	 .if_id_rs(rs_out), 
	 .regdst_out_rt(regdst_out),
	 .ex_mem_rt(writereg_out)
	 );
	//always @(*)
	//begin
			//if(alusrc == 1)
			//	alub_sel <= instr_32;
			//else
			//	alub_sel <= reg1_out;
				
			//if(regdst == 1)
			//	regdst_mux <= rd_out_ex;
			//else
			//	regdst_mux <= rt_out_ex;
				
			//if(memtoreg == 1)
			//	mux_writeback_data <= radata_out;
			//else
			//	mux_writeback_data <= aluout_wb;
				
	//end



endmodule
