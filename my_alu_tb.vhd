--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   15:21:24 10/05/2015
-- Design Name:   
-- Module Name:   /home/csmajs/scohe001/my_alu/my_alu_tb.vhd
-- Project Name:  my_alu
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: my_alu
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
use ieee.numeric_std.all;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY my_alu_tb IS
END my_alu_tb;
 
ARCHITECTURE behavior OF my_alu_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT my_alu
    PORT(
         A : IN  std_logic_vector(7 downto 0);
         B : IN  std_logic_vector(7 downto 0);
         opcode : IN  std_logic_vector(2 downto 0);
         result : OUT  std_logic_vector(7 downto 0);
         carryout : OUT  std_logic;
         overflow : OUT  std_logic;
         zero : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal A : std_logic_vector(7 downto 0) := (others => '0');
   signal B : std_logic_vector(7 downto 0) := (others => '0');
   signal opcode : std_logic_vector(2 downto 0) := (others => '0');

 	--Outputs
   signal result : std_logic_vector(7 downto 0);
   signal carryout : std_logic;
   signal overflow : std_logic;
   signal zero : std_logic;
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
   signal clock : std_logic;
   constant clock_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: my_alu PORT MAP (
          A => A,
          B => B,
          opcode => opcode,
          result => result,
			 carryout => carryout,
			 overflow => overflow,
			 zero => zero
        );

   -- Clock process definitions
   clock_process :process
   begin
		clock <= '0';
		wait for clock_period/2;
		clock <= '1';
		wait for clock_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin
			---------------------------------------------------------------
		---------------------- UNSIGNED ADD TEST ----------------------
		---------------------------------------------------------------
		opcode <= "000";
		A <= "00000000";
		B <= "00000000";
		wait for clock_period;
		Assert(result = "00000000" and overflow = '0' and zero = '1')
			Report "Unsigned addition zero error"
			Severity ERROR;

		opcode <= "000";
		A <= "01010101";
		B <= "10101010";
		wait for clock_period;
		Assert(result = "11111111" and overflow = '0' and zero = '0')
			Report "Unsigned addition no overflow error"
			Severity ERROR;
		
		opcode <= "000";
		A <= "11111111";
		B <= "00000010";
		wait for clock_period;
		Assert(result = "00000001" and overflow = '1' and zero = '0')
			Report "Unsigned addition overflow error"
			Severity ERROR;
		
		---------------------------------------------------------------
		---------------------- SIGNED ADD TEST ------------------------
		---------------------------------------------------------------
		opcode <= "001";
		A <= "11111111";
		B <= "00000001";
		wait for clock_period;
		Assert(result = "00000000" and overflow = '0' and zero = '1')
			Report "Signed addition zero test error"
			Severity ERROR;
		
		opcode <= "001";
		A <= "11111111";
		B <= "11111110";
		wait for clock_period;
		Assert(result = "11111101" and overflow = '0' and zero = '0')
			Report "Signed addition negative test error"
			Severity ERROR;
		
		opcode <= "001";
		A <= "10000000";
		B <= "11111111";
		wait for clock_period;
		Assert(result = "01111111" and overflow = '1' and zero = '0')
			Report "Signed addition underflow test error"
			Severity ERROR;
		
		---------------------------------------------------------------
		--------------------- UNSIGNED SUB ----------------------------
		---------------------------------------------------------------
		opcode <= "010";
		A <= "00100100";
		B <= "00100100";
		wait for clock_period;
		Assert(result = "00000000" and overflow = '0' and zero = '1')
			Report "Unsigned subtraction zero error"
			Severity ERROR;

		opcode <= "010";
		A <= "11111111";
		B <= "10101010";
		wait for clock_period;
		Assert(result = "01010101" and overflow = '0' and zero = '0')
			Report "Unsigned subtraction no overflow or zero error"
			Severity ERROR;
			
		---------------------------------------------------------------
		---------------------- SIGNED SUB -----------------------------
		---------------------------------------------------------------
		opcode <= "011";
		A <= "10001100";
		B <= "10001100";
		wait for clock_period;
		Assert(result = "00000000" and overflow = '0' and zero = '1')
			Report "signed subtraction zero error"
			Severity ERROR;

		opcode <= "011";
		A <= "11111111";
		B <= "10101010";
		wait for clock_period;
		Assert(result = "01010101" and overflow = '0' and zero = '0')
			Report "signed subtraction no overflow or zero error"
			Severity ERROR;
		
		opcode <= "011";
		A <= "11111110";
		B <= "01111111";
		wait for clock_period;
		Assert(result = "01111111" and overflow = '1' and zero = '0')
			Report "signed subtraction overflow error"
			Severity ERROR;
			
		---------------------------------------------------------------
		--------------------- BIT-WISE AND ----------------------------
		---------------------------------------------------------------
		opcode <= "100";
		A <= "10001100";
		B <= "10001100";
		wait for clock_period;
		Assert(result = "10001100" and overflow = '0' and zero = '0')
			Report "Bit-Wise And ERROR: zero flag raised when zero flag should be down"
			Severity ERROR;

		opcode <= "100";
		A <= "01010101";
		B <= "10101010";
		wait for clock_period;
		Assert(result = "00000000" and overflow = '0' and zero = '1')
			Report "Bit-Wise And ERROR: zero flag down when zero flag should be raised"
			Severity ERROR;
		
			
		---------------------------------------------------------------
		---------------------- BIT-WISE OR ----------------------------
		---------------------------------------------------------------
		opcode <= "101";
		A <= "00000000";
		B <= "11100111";
		wait for clock_period;
		Assert(result = "11100111" and overflow = '0' and zero = '0')
			Report "Bit-Wise Or ERROR: zero flag should be down when zero flag is raised"
			Severity ERROR;

		opcode <= "101";
		A <= "00000000";
		B <= "00000000";
		wait for clock_period;
		Assert(result = "00000000" and overflow = '0' and zero = '1')
			Report "Bit-Wise Or ERROR: zero flag should raised when flag is down"
			Severity ERROR;
		
		
		---------------------------------------------------------------
		---------------------- BIT-WISE XOR TEST ----------------------
		---------------------------------------------------------------
		opcode <= "110";
		A <= "00001100";
		B <= "00001010";
		wait for clock_period;
		Assert(result = "00000110" and overflow = '0' and zero = '0')
			Report "XOR test error"
			Severity ERROR;
		
		---------------------------------------------------------------
		---------------------- DIVIDE TEST ----------------------------
		---------------------------------------------------------------
		opcode <= "111";
		A <= "10110011";
		wait for clock_period;
		Assert(result = "01011001" and overflow = '0' and zero = '0')
			Report "Division test error"
			Severity ERROR;
			
		opcode <= "111";
		A <= "00000001";
		wait for clock_period;
		Assert(result = "00000000" and overflow = '0' and zero = '1')
			Report "Division 0 test error"
			Severity ERROR;
			
			
		--Done
		Report "Done with testbench." severity NOTE;
      wait;
   end process;

END;