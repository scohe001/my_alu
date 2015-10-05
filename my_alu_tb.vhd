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
 
   constant <clock>_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: my PORT MAP (
          X => X,
          Y => Y,
          D => D,
          B => B
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
		--Hold reset state
            X <= '0';
            Y <= '0';
      wait for clock_period*10;
 
      -- insert stimulus here
            --Cases
            X <= '0';
            Y <= '0';
            wait for clock_period;
            Assert ( D = '0' and B = '0' )
                  Report "Case 0"
                  Severity ERROR;
						
            X <= '0';
            Y <= '1';
            wait for clock_period;
            Assert ( D = '1' and B = '1' )
                  Report "Case 1"
                  Severity ERROR;
						
				X <= '1';
            Y <= '0';
            wait for clock_period;
            Assert ( D = '1' and B = '0' )
                  Report "Case 2"
                  Severity ERROR;
						
				X <= '1';
            Y <= '1';
            wait for clock_period;
            Assert ( D = '0' and B = '0' )
                  Report "Case 3"
                  Severity ERROR;
						
		Report "Done with testbench." severity NOTE;
      wait;
   end process;

END;