`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:01:49 10/22/2015 
// Design Name: 
// Module Name:    hazard_detection_unit 
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
module hazard_detection_unit(mem_wbout, id_ex_memread, wbout, pcwrite, if_id_write, mux_bubble, if_id_rt, if_id_rs, regdst_out_rt, ex_mem_rt);
	input [1:0]wbout, mem_wbout;
	input[2:0] id_ex_memread;
	input[4:0] if_id_rt, if_id_rs, regdst_out_rt, ex_mem_rt;
	output reg mux_bubble, pcwrite, if_id_write;
	initial begin
		mux_bubble <= 1;
		pcwrite <= 1;
		if_id_write <= 1;	
	end
	always @(*)
	begin
		//Comparing data dependicies for lw and branch
		//TODO: Flush @ branch
/*		if((id_ex_memread[0] == 1))
		begin
			mux_bubble <= 0;
			pcwrite <= 0;
			if_id_write <= 0;
		end //Data dependency, from mem.*/
		if(((wbout[0] == 1))&&((regdst_out_rt == if_id_rt)||(regdst_out_rt == if_id_rs)))//lw, sw type instruction
		begin
			mux_bubble <= 0;
			pcwrite <= 0;
			if_id_write <= 0;
		end
		else if((mem_wbout[0] == 1) &&((ex_mem_rt == if_id_rt)||(ex_mem_rt == if_id_rs)))
		begin
			mux_bubble <= 0;
			pcwrite <= 0;
			if_id_write <= 0;
		end
		else
		begin
			mux_bubble <= 1;
			pcwrite <= 1;
			if_id_write <= 1;
		end
	end

endmodule
