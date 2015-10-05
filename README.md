Wolfgang Finkbeiner
Stanley Cohen

LAB 1 - Arithmetic and Logic Unit (ALU)

This lab will be an introduction to microprocessors and the VHDL language. You will also be getting familiar with the Xilinx design environment. The goal of this lab is to implement a simple Arithmetic and Logic Unit (ALU) in VHDL.

ALUs are hardware circuits that perform the arithmetic computations within a processor. They support multiple operations like addition, subtraction, multiplication, division, square roots, etc. The hardware logic to perform these operations can vary widely based on the approach used (Carry-Lookahead vs Ripple-Carry adder) or the data types supported (Integer, Float, Double). An ALU could even supply multiple version of the same operation. They are not limited to only arithmetic operations. They can support bit-wise operations, like AND OR and NOT, as well.

Input data and control bits are sent to the ALU. The control bits specify an operation, and the ALU redirects the inputs to the corresponding functional circuit. When the computation completes the result is output along with extra data about the operation (overflow, underflow, carryouts, etc.)

No known issues!

