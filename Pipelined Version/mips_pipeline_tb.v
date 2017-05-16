`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:44:24 10/23/2015
// Design Name:   pipeline_top
// Module Name:   H:/Pipeline Mips/PipelineMips/mips_pipeline_tb.v
// Project Name:  PipelineMips
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: pipeline_top
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

//iverilog -s pipeline_top -o test.vvp pipeline_top.v
`include "pipeline_top.v"
module mips_pipeline_tb;
	// Inputs
	reg clk;
	reg ce;

	// Instantiate the Unit Under Test (UUT)
	pipeline_top uut(
		.clk(clk), 
		.ce(ce)
		);	
	initial begin
		// Initialize Inputs
		//$dumpfile("pipeline_tb.vcd");
       // $dumpvars;
		clk = 0;
		ce = 1;

		// Wait 100 ns for global reset to finish
		forever #2 clk = ~clk;
      end
endmodule

