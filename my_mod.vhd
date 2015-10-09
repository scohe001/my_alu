----------------------------------------------------------------------------------
-- Company:
-- Engineer: Wolfgang Finkbeiner
--
-- Create Date:    14:57:17 09/28/2015
-- Design Name:  Lab 1
-- Module Name:  my_alu - Behavioral
-- Project Name:
-- Target Devices:
-- Tool versions:
-- Description:
--
-- Dependencies:
--
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use ieee.numeric_std.all;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity my_alu is

    generic(n: natural :=8);
    Port ( A : in  STD_LOGIC_VECTOR(n-1 downto 0);
           B : in  STD_LOGIC_VECTOR(n-1 downto 0);
           opcode : in  STD_LOGIC_VECTOR (2 downto 0);
           result : out  STD_LOGIC_VECTOR(n-1 downto 0);
           carryout : out  STD_LOGIC;
           overflow : out  STD_LOGIC;
           zero : out  STD_LOGIC);
end my_alu;

architecture Behavioral of my_alu is

begin

    process( A, B, opcode)
	 
	 variable temp : STD_LOGIC_VECTOR(n downto 0);
	 
    begin
    
        case opcode is
            when "000" => --Unsigned Add
                temp := STD_LOGIC_VECTOR(unsigned('0' & A) + unsigned('0' & B));
                result <= temp(n-1 downto 0);
                carryout <= temp(n);
					 overflow <= temp(n);
                
            when "001" => --Signed Add
                temp := STD_LOGIC_VECTOR(signed('0' & A) + signed('0' & B));
                result <= temp(n-1 downto 0);
                carryout <= temp(n);
					 --Check for overflow
					 if ((A(n-1) = '0') and (b(n-1) = '0') and (temp(n-1) = '1')) or
							((A(n-1) = '1') and (b(n-1) = '1') and (temp(n-1) = '0')) then
					     overflow <= '1';
					 else
						  overflow <= '0';
					 end if;
                
            when "010" => --Unsigned Sub
                temp := STD_LOGIC_VECTOR(unsigned('0' & A) + (not(unsigned('1' & B))) + 1);
                result <= temp(n-1 downto 0);
                carryout <= temp(n);
					 overflow <= not(temp(n));
                
            when "011" => --Signed Sub
                temp := STD_LOGIC_VECTOR(signed('0' & A) + (not(signed('0' & B))) + 1);
                result <= temp(n-1 downto 0);
                carryout <= temp(n);
					 if ((A(n-1) = '0') and (b(n-1) = '1') and (temp(n-1) = '1')) or
							((A(n-1) = '1') and (b(n-1) = '0') and (temp(n-1) = '0')) then
					     overflow <= '1';
					 else
						  overflow <= '0';
					 end if;
                
            when "100" => --Bit-wise AND
                temp := ('0' & A) AND ('0' & B);
                result <= A AND B;
					 overflow <= '0';
                
            when "101" => --Bit-wise OR
                temp := ('0' & A) OR ('0' & B);
                result <= A OR B;
					 overflow <= '0';
                
            when "110" => --Bit-wise XOR
                temp := ('0' & A) XOR ('0' & B);
                result <= A XOR B;
					 overflow <= '0';
                
            when "111" => --Divide A by 2 (right shift)
                temp := STD_LOGIC_VECTOR(shift_right(unsigned('0' & A), 1));
                result <= temp(n-1 downto 0);
					 overflow <= '0';
					 
				when others =>
					 --THINGS
                
        end case;
            
        if temp(n-1 downto 0) = "00000000" then
            zero <= '1';
        else
            zero <= '0';
        end if;

    end process;
    
end Behavioral;


