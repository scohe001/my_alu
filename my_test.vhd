
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
ENTITY half_subtractor_tb IS
END half_subtractor_tb;
 
ARCHITECTURE behavior OF half_subtractor_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT half_subtractor
    PORT(
         X : IN  std_logic;
         Y : IN  std_logic;
         D : OUT  std_logic;
         B : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal X : std_logic := '0';
   signal Y : std_logic := '0';

 	--Outputs
   signal D : std_logic;
   signal B : std_logic;
	
	--Clock
	signal clock : std_logic;
   constant clock_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: half_subtractor PORT MAP (
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
