`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:42:40 04/28/2022
// Design Name:   SCCPU
// Module Name:   C:/Users/Administrator/Desktop/FILE/CPU2/test2_1.v
// Project Name:  CPU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: SCCPU
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test2_1;

	// Inputs
	reg Clock;
	reg Resetn;

	// Outputs
	wire [31:0] PC;
	wire [31:0] if_Inst;
	wire [31:0] id_Inst;
	wire [31:0] exe_Alu_Result;
	wire [1:0] pcsource;
	wire id_aluimm;
	wire id_shift;
	wire exe_aluimm;
	wire exe_shift;
	wire [1:0] exe_aluc;
	wire [31:0] exe_ra;
	wire [31:0] exe_rb;
	wire [31:0] exe_imm;

	// Instantiate the Unit Under Test (UUT)
	SCCPU uut (
		.Clock(Clock), 
		.Resetn(Resetn), 
		.PC(PC), 
		.if_Inst(if_Inst), 
		.id_Inst(id_Inst), 
		.exe_Alu_Result(exe_Alu_Result), 
		.pcsource(pcsource), 
		.id_aluimm(id_aluimm), 
		.id_shift(id_shift), 
		.exe_aluimm(exe_aluimm), 
		.exe_shift(exe_shift), 
		.exe_aluc(exe_aluc), 
		.exe_ra(exe_ra), 
		.exe_rb(exe_rb), 
		.exe_imm(exe_imm)
	);

	initial begin
		// Initialize Inputs
		Clock = 0;
		Resetn = 0;

		// Wait 100 ns for global reset to finish
		#4;
        Resetn = 1;
		// Add stimulus here

	end
      always #2 Clock = ~Clock;
      
endmodule

