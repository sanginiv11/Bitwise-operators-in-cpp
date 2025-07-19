#include<iostream>

using namespace std;
int main() {
int a =5;
int b =3;
int bitwise_and = a & b; // Bitwise AND
int bitwise_or =a|b; // Bitwise OR
int bitwise_xor =a^b; // Bitwise XOR
int bitwise_not =~a; // Bitwise NOT
int left_shift =a<<2; // Bitwise Left Shift
int right_shift = a>>1; // Bitwise Right Shift
//print
cout<<"AND: "<<bitwise_and<<endl;
cout<<"OR: "<<bitwise_or<<endl;
cout<<"XOR: "<<bitwise_xor<<endl;
cout<<"NOT a: "<<bitwise_not<<endl;
cout<<"Left Shift: "<<left_shift<<endl;
cout<<"Right Shift: "<<right_shift<<endl;

return 0;
}
