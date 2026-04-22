// IN this session we will learn about the remainder operator in C++. 
// The remainder operator, also known as the modulus operator, is represented by the symbol '%'. It is used to find the remainder of the division of one number by another. 
// The syntax for using the remainder operator is as follows:
// result = dividend % divisor; 
#include <iostream>
using namespace std;        
int main() {
    int dividend, divisor;
    cout << "Enter the dividend: ";
    cin >> dividend;
    cout << "Enter the divisor: ";
    cin >> divisor;

    int remainder = dividend % divisor; // Calculate the remainder
    cout << "The remainder of " << dividend << " divided by " << divisor << " is: " << remainder << endl;

    return 0;
}