	

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
               result : out  STD_LOGIC_VECTOR(n+3 downto 0);
               carryout : out  STD_LOGIC;
               overflow : out  STD_LOGIC;
               zero : out  STD_LOGIC);
    end my_alu;
     
    architecture Behavioral of my_alu is
     
    begin
     
        process( A, B, opcode)
             
             variable temp : STD_LOGIC_VECTOR(n downto 0);
				 variable tresult : STD_LOGIC_VECTOR(n+3 downto 0);
             variable A2 : STD_LOGIC_VECTOR(n -1 downto 0);
             variable B2 : STD_LOGIC_VECTOR(n - 1 downto 0);
             variable num1 : integer;
             variable num2 : integer;
             
        begin
				num1 := 0;
				num2 := 0;
            
				--Convert A to binary and store in A2
				for I in 0 to ((n/4)-1) loop
					 num1 := to_integer(unsigned(A((3+(4*(((n/4)-1)-I))) downto (4*(((n/4)-1)-I))))) + num1*10;
				end loop;
				A2 := STD_LOGIC_VECTOR(to_unsigned(num1, 8));
				
				--Convert B to binary and store in B2
				for I in 0 to ((n/4)-1) loop
					 num2 := to_integer(unsigned(B((3+(4*(((n/4)-1)-I))) downto (4*(((n/4)-1)-I))))) + num2*10;
				end loop;
				B2 := STD_LOGIC_VECTOR(to_unsigned(num2, 8));

            case opcode is
                when "000" => --Unsigned Add  
                    temp := STD_LOGIC_VECTOR(unsigned('0' & A2) + unsigned('0' & B2));
                    carryout <= temp(n);
                    overflow <= temp(n);
                   
                when "001" => --Signed Add
                    temp := STD_LOGIC_VECTOR(signed('0' & A2) + signed('0' & B2));
                    carryout <= temp(n);
						  --Check for overflow
						  if ((A2(n-1) = '0') and (b2(n-1) = '0') and (temp(n-1) = '1')) or
						  		((A2(n-1) = '1') and (b2(n-1) = '1') and (temp(n-1) = '0')) then
						  	 overflow <= '1';
						  else
						  			overflow <= '0';
						  end if;
                   
                when "010" => --Unsigned Sub
						  temp := STD_LOGIC_VECTOR(unsigned('0' & A2) + (not(unsigned('1' & B2))) + 1);
						  carryout <= temp(n);
						  overflow <= not(temp(n));
                   
                when "011" => --Signed Sub
							temp := STD_LOGIC_VECTOR(signed('0' & A2) + (not(signed('0' & B2))) + 1);
							carryout <= temp(n);
							if ((A2(n-1) = '0') and (B2(n-1) = '1') and (temp(n-1) = '1')) or
												((A2(n-1) = '1') and (B2(n-1) = '0') and (temp(n-1) = '0')) then
								 overflow <= '1';
							else
										overflow <= '0';
							end if;
                   
                when "100" => --Bit-wise AND
                    temp := ('0' & A2) AND ('0' & B2);
						  overflow <= '0';
                   
                when "101" => --Bit-wise OR
                    temp := ('0' & A2) OR ('0' & B2);
						  overflow <= '0';
                   
                when "110" => --Bit-wise XOR
                    temp := ('0' & A2) XOR ('0' & B2);
						  overflow <= '0';
                   
                when "111" => --Divide A by 2 (right shift)
                    temp := STD_LOGIC_VECTOR(shift_right(unsigned('0' & A2), 1));
						  overflow <= '0';
						
					  when others =>
							--THINGS
                   
            end case;
				
            tresult := STD_LOGIC_VECTOR(to_unsigned(0, n+3));
				for I in 0 to 2 loop
					tresult(0) := not(temp(n));
				   tresult := STD_LOGIC_VECTOR(unsigned(tresult) * 2);
					temp := STD_LOGIC_VECTOR(unsigned(temp) * 2);
					 --for X in 0 to ((n/4)-1) loop
					--	if (unsigned(tresult((3+(4*(((n/4)-1)-X))) downto (4*(((n/4)-1)-X)))) >= 5) then
					 --    tresult(n downto (n-X)) := STD_LOGIC_VECTOR(unsigned(tresult(n downto (n-X))) + 3);
					--	end if;
					 --end loop;
				end loop;
				
				result <= tresult;
				
            if temp = (temp'range => '0') then
                zero <= '1';
            else
                zero <= '0';
            end if;
     
        end process;
       
    end Behavioral;