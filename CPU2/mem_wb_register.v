`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:40:22 04/28/2022 
// Design Name: 
// Module Name:    mem_wb_register 
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
module mem_wb_register(mem_Alu_Result, mem_m2reg, mem_wreg, mem_rn, mem_mo,
			clk, clrn, wb_Alu_Result, wb_m2reg, wb_wreg, wb_rn, wb_mo
    );
	input [31:0] mem_Alu_Result, mem_mo;
	input [5:0] mem_rn;
	input mem_m2reg, mem_wreg, clk, clrn;
	output [31:0] wb_Alu_Result, wb_mo;
	output [5:0] wb_rn;
	output wb_m2reg, wb_wreg;
	reg [31:0] wb_Alu_Result, wb_mo;
	reg [5:0] wb_rn;
	reg wb_m2reg, wb_wreg;
	always @ (posedge clk or negedge clrn)
		if(clrn == 0)	
			begin
				wb_Alu_Result <= 32'b0;
				wb_mo <= 32'b0;
				wb_rn <= 5'b0;
				wb_m2reg <= 0;
				wb_wreg <= 0;
			end
		else
			begin 
				wb_Alu_Result <= mem_Alu_Result;
				wb_mo <= mem_mo;
				wb_rn <= mem_rn;
				wb_m2reg <= mem_m2reg;
				wb_wreg <= mem_wreg;
			end
endmodule
