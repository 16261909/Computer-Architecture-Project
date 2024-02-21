`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:57:45 04/27/2021 
// Design Name: 
// Module Name:    ceshi 
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
module ceshi(q0,q1,q2,q3
    );
	 
input q0,q1,q2,q3;
output q0,q1,q2,q3;

assign q0=q1;
assign q1=q2;
assign q2=q3;
assign q3=q0;

endmodule
