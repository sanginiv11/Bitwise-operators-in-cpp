# Bitwise-operators-in-cpp
Aim: To implement bitwise operators in C++

Algorithm:(Bitwise operators in C++)
1. Start the program.
2. Declare two integer variables, a and b, and assign values (a = 5, b = 3).
3. Calculate bitwise AND of a and b, store in bitwise_and.
4. Calculate bitwise OR of a and b, store in bitwise_or.
5. Calculate bitwise XOR of a and b, store in bitwise_xor.
6. Calculate bitwise NOT of a, store in bitwise_not.
7. Calculate left shift of a by 2 positions, store in left_shift.
8. Calculate right shift of a by 1 position, store in right_shift.
9. Print the results of all bitwise operations.
10. End the program.
    
Algorithm:(Setting resetting the bit)
1. Start the program.
2. Declare two integer variables: number and bitPosition.
3. Prompt the user to enter an integer and read the value into number.
4. Prompt the user to enter the bit position to modify and read the value into bitPosition.
5. Set the bit at bitPosition in number using bitwise OR and print the result.
6. Reset the bit at bitPosition in number using bitwise AND with NOT and print the result.
7. End the program.

Theory :
(01) BITWISE OPERATORS IN C++. 
- This C++ program demonstrates bitwise operators using two integers 'a' and 'b'.
-  It performs bitwise AND ('&'), OR ('|'), XOR ('^'), NOT ('~'), left shift ('<<'), and right shift ('>>') operations.
-  Each result is stored in a variable and then printed.
-  The program helps understand how bit-level operations work in C++ and how data is manipulated at the binary level.

(02) SETTING AND RESETTING THE BIT.
The program demonstrates how to set and reset a specific bit in an integer using bitwise operators.
- The user is first prompted to enter an integer 'number' and a 'bitPosition' (starting from 0 for the least significant bit).
- To "set a bit", the program uses the expression:'(number | (1 << bitPosition))'.
- This shifts 1 to the left by 'bitPosition' places, creating a mask. The bitwise OR ('|') sets the bit at that position to 1, without changing other bits.
- To "reset a bit", '(number & (~(1 << bitPosition)))' creates a mask with 0 at the target bit and 1s elsewhere.
- The bitwise AND clears only that bit, keeping others unchanged.

Conclusion: Both programs show how to perform low-level operations in C++ using bitwise operators. Basic bitwise operations like AND, OR, XOR, NOT, and shifts are displayed in the first. The second uses these ideas to set and reset particular bits. They offer a comprehensive grasp of how bitwise logic can be effectively used to manipulate binary data.

