`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:36:10 10/20/2015 
// Design Name: 
// Module Name:    MIPS 
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




module mips_top(
		clk,
		ce,
		alu_aa,
		alu_bb,
		pc,
		alu_output,
		reg_s1,
		reg_s2, 
		ctrl_regdst,
		ctrl_alub,
		ctrl_memtoreg,
		ctrl_branch,
		ctrl_regwrite
	);
	
	output [31:0] alu_aa, alu_bb, pc, alu_output;
	output [4:0] reg_s1, reg_s2;
	output ctrl_regdst, ctrl_alub, ctrl_branch, ctrl_regwrite, ctrl_memtoreg;
	
	input clk, ce;
	
	assign alu_aa = alu_a;
	assign alu_bb = alu_b;
	assign alu_output = alu_out;
	assign reg_s1 = rs;
	assign reg_s2 = rt;
	assign pc = pcout;
	assign ctrl_regdst = reg_dst;
	assign ctrl_alub = alu_src;
	assign ctrl_memtoreg = mem_to_reg;
	assign ctrl_branch = branch;
	assign ctrl_regwrite = reg_write;
	
	wire [31:0] pcout;
	wire [31:0] pcin; 
	
	wire [5:0] opcode;
	wire [5:0] func;
	wire [4:0] rs, rt, rd;
	wire [15:0] imm;
	
	reg [4:0] write_reg_select;
	
	wire reg_dst, branch, mem_read, mem_to_reg, mem_write, alu_src, reg_write;
	wire [1:0] alu_op;
	wire [3:0] alu_op_ctr;
	reg [31:0] alu_b;
	wire [31:0] alu_a, reg2_out, alu_out;
	wire alu_zero;
	
	wire [31:0] sign_extended;
	
	wire [31:0] data_mem_out;
	reg [31:0] reg_writeback;
	
	reg [31:0] pc_next;
	assign pcin = pc_next;
	 
	pc prog_count (
		.pcin(pcin), 
		.pcout(pcout), 
		.clk(clk), 
		.ce(ce)
	);
	 
	 instrmem instr_mem (
		 .pcread(pcout), 
		 .opcode(opcode), 
		 .rs(rs), 
		 .rt(rt), 
		 .rd(rd), 
		 .func(func), 
		 .imm(imm)
    );
	 
	alucontrol alu_ctr (
		.aluop(alu_op), 
		.funcode(func), 
		.aluctrl(alu_op_ctr)
	);
	 
	control ctr_unit (
		.opcode(opcode), 
		.regdst(reg_dst), 
		.branch(branch), 
		.memread(mem_read), 
		.memtoreg(mem_to_reg), 
		.aluop(alu_op), 
		.memwrite(mem_write), 
		.alusrc(alu_src), 
		.regwrite(reg_write)
	);
	 
	datamem data_mem (
		.clk(clk), 
		.ce(ce), 
		.addr(alu_out), 
		.wrdata(reg2_out), 
		.memwrite(mem_write), 
		.memread(mem_read), 
		.rdata(data_mem_out)
	);
	 
	 // Instantiate the module
	regblock reg_file (
		 .clk(clk), 
		 .ce(ce), 
		 .readreg1(rs), 
		 .readreg2(rt),
		 .writereg(write_reg_select), 
		 .writedata(reg_writeback), 
		 .regwrite(reg_write), 
		 .reg1(alu_a), 
		 .reg2(reg2_out)
	 );

	signextend sign_extend (
		.instr_16(imm), 
		.instr_32(sign_extended)
	);
	
	mipsalu ALU (
		.aluctl(alu_op_ctr), 
		.a(alu_a), 
		.b(alu_b), 
		.aluout(alu_out), 
		.zero(alu_zero)
	);
	
	always @*
	begin
		if(reg_dst == 0)
			write_reg_select = rt;
		else
			write_reg_select = rd;
			
		if(alu_src == 0)
			alu_b = reg2_out;
		else
			alu_b = sign_extended;
		
		if(mem_to_reg == 0)
			reg_writeback = alu_out;
		else
			reg_writeback = data_mem_out;
		
		if( (branch & alu_zero) == 0)
			pc_next = pcout + 4;
		else
			pc_next = (sign_extended << 2) + pcout;
	
			
		
	end


endmodule
