# Bitwise-operators-in-cpp
Aim: To implement bitwise operators in C++

Theory :
(01) BITWISE OPERATORS IN C++. 
This C++ program demonstrates bitwise operators using two integers 'a' and 'b'. It performs bitwise AND ('&'), OR ('|'), XOR ('^'), NOT ('~'), left shift ('<<'), and right shift ('>>') operations. Each result is stored in a variable and then printed. The program helps understand how bit-level operations work in C++ and how data is manipulated at the binary level.

(02) SETTING AND RESETTING THE BIT.
The program demonstrates how to set and reset a specific bit in an integer using bitwise operators.
- The user is first prompted to enter an integer 'number' and a 'bitPosition' (starting from 0 for the least significant bit).
- To "set a bit", the program uses the expression:'(number | (1 << bitPosition))'. This shifts 1 to the left by 'bitPosition' places, creating a mask. The bitwise OR ('|') sets the bit at that position to 1, without changing other bits.
- To "reset a bit", '(number & (~(1 << bitPosition)))' creates a mask with 0 at the target bit and 1s elsewhere. The bitwise AND clears only that bit, keeping others unchanged.

Conclusion: Both programs show how to perform low-level operations in C++ using bitwise operators. Basic bitwise operations like AND, OR, XOR, NOT, and shifts are displayed in the first. The second uses these ideas to set and reset particular bits. They offer a comprehensive grasp of how bitwise logic can be effectively used to manipulate binary data.

