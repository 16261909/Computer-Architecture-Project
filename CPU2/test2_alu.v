`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:10:01 04/28/2022
// Design Name:   EXE_STAGE
// Module Name:   C:/Users/Administrator/Desktop/FILE/CPU2/test2_alu.v
// Project Name:  CPU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: EXE_STAGE
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test2_alu;

	// Inputs
	reg [2:0] ealuc;
	reg ealuimm;
	reg [31:0] ea;
	reg [31:0] eb;
	reg [31:0] eimm;
	reg eshift;

	// Outputs
	wire [31:0] ealu;
	wire z;

	// Instantiate the Unit Under Test (UUT)
	EXE_STAGE uut (
		.ealuc(ealuc), 
		.ealuimm(ealuimm), 
		.ea(ea), 
		.eb(eb), 
		.eimm(eimm), 
		.eshift(eshift), 
		.ealu(ealu), 
		.z(z)
	);

	initial begin
		// Initialize Inputs
		ealuc = 0;
		ealuimm = 0;
		ea = 0;
		eb = 0;
		eimm = 0;
		eshift = 0;

		// Wait 100 ns for global reset to finish
		#100;
      ea=32'b00000000000000000000000000000101;
		eb=32'b00000000000000000000000000001101;
		// Add stimulus here

	end
      
endmodule


