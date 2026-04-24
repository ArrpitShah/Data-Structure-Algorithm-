// In this section we will learn how to find the maximum of two numbers using if-else statements in C++. The program will take two numbers as input from the user and then compare them to determine which one is greater.
#include <iostream>
using namespace std;
int main() {
    double num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    if (num1 > num2) {
        cout << "The maximum number is: " << num1 << endl;
    } else if (num2 > num1) {
        cout << "The maximum number is: " << num2 << endl;
    } else {
        cout << "Both numbers are equal." << endl;
    }

    return 0;
}