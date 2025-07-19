
#include<iostream>
using namespace std;

int main() {
    int number, bitPosition;
    cout << "Enter an integer: ";
    cin >> number;
    cout << "Enter bit position to modify: ";
    cin >> bitPosition;
    cout << "After setting bit " << bitPosition << ": " << (number | (1 << bitPosition)) << endl;
    cout << "After resetting bit " << bitPosition << ": " << (number & (~(1 << bitPosition))) << endl;
    return 0;
}
