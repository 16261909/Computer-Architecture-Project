`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:39:57 04/28/2022 
// Design Name: 
// Module Name:    exe_mem_register 
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
module exe_mem_register(exe_Alu_Result, exe_rb, exe_wmem, exe_m2reg, exe_wreg, exe_rn,
			clk, clrn, mem_Alu_Result, mem_rb, mem_wmem, mem_m2reg, mem_wreg, mem_rn
    );
	input [31:0] exe_Alu_Result, exe_rb;
	input exe_wmem, exe_m2reg, exe_wreg, clk, clrn;
	input [4:0] exe_rn;
	output [31:0] mem_Alu_Result, mem_rb;
	output mem_wmem, mem_m2reg, mem_wreg;
	output [4:0] mem_rn;
	reg [31:0] mem_Alu_Result, mem_rb;
	reg mem_wmem, mem_m2reg, mem_wreg;
	reg [4:0] mem_rn;
	always @ (posedge clk or negedge clrn)
		if(clrn == 0)
			begin
				mem_Alu_Result <= 32'b0;
				mem_rb <= 32'b0;
				mem_wmem <= 0;
				mem_wreg <= 0;
				mem_m2reg <= 0;
				mem_rn <= 5'b0;
			end
		else
			begin
				mem_Alu_Result <= exe_Alu_Result;
				mem_rb <= exe_rb;
				mem_wmem <= exe_wmem;
				mem_wreg <= exe_wreg;
				mem_m2reg <= exe_m2reg;
				mem_rn <= exe_rn;
			end
endmodule
