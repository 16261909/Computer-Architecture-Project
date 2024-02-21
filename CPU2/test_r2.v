`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:33:38 04/28/2022
// Design Name:   id_exe_register
// Module Name:   C:/Users/Administrator/Desktop/FILE/CPU2/test_r2.v
// Project Name:  CPU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: id_exe_register
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_r2;

	// Inputs
	reg id_m2reg;
	reg id_wmem;
	reg [2:0] id_aluc;
	reg id_aluimm;
	reg [31:0] id_ra;
	reg [31:0] id_rb;
	reg [31:0] id_imm;
	reg id_shift;
	reg id_wreg;
	reg [5:0] id_rn;
	reg clk;
	reg clrn;

	// Outputs
	wire exe_m2reg;
	wire exe_wmem;
	wire [2:0] exe_aluc;
	wire exe_aluimm;
	wire [31:0] exe_ra;
	wire [31:0] exe_rb;
	wire [31:0] exe_imm;
	wire exe_shift;
	wire exe_wreg;
	wire [4:0] exe_rn;

	// Instantiate the Unit Under Test (UUT)
	id_exe_register uut (
		.id_m2reg(id_m2reg), 
		.id_wmem(id_wmem), 
		.id_aluc(id_aluc), 
		.id_aluimm(id_aluimm), 
		.id_ra(id_ra), 
		.id_rb(id_rb), 
		.id_imm(id_imm), 
		.id_shift(id_shift), 
		.id_wreg(id_wreg), 
		.id_rn(id_rn), 
		.clk(clk), 
		.clrn(clrn), 
		.exe_m2reg(exe_m2reg), 
		.exe_wmem(exe_wmem), 
		.exe_aluc(exe_aluc), 
		.exe_aluimm(exe_aluimm), 
		.exe_ra(exe_ra), 
		.exe_rb(exe_rb), 
		.exe_imm(exe_imm), 
		.exe_shift(exe_shift), 
		.exe_wreg(exe_wreg), 
		.exe_rn(exe_rn)
	);

	initial begin
		// Initialize Inputs
		id_m2reg = 0;
		id_wmem = 0;
		id_aluc = 0;
		id_aluimm = 0;
		id_ra = 0;
		id_rb = 0;
		id_imm = 0;
		id_shift = 0;
		id_wreg = 0;
		id_rn = 0;
		clk = 0;
		clrn = 0;

		// Wait 100 ns for global reset to finish
		#4;
			clrn = 1;
		  id_aluimm = 1;
		  id_shift = 1;
		// Add stimulus here

	end
      always #2 clk = ~clk;
endmodule
 
