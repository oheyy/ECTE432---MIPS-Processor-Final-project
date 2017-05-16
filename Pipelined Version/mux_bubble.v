`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:30:05 10/23/2015 
// Design Name: 
// Module Name:    mux_bubble 
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
module mux_bubble(sel, ctrl, out);
	input sel;
	input[8:0] ctrl;
	output reg [8:0] out;
	
	always @(*)
	begin
	//sel = 1 is high selects control lines
		if(sel == 1)
			begin
			out <= ctrl;
			end
		//sel = 0 bubble  
		else
			out <= 0;
	end
endmodule
