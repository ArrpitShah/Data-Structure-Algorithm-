// In this Section we will learn about if-else statements in C++
// The if-else statement is a control flow statement that allows you to execute different blocks of code based on a condition. The syntax for an if-else statement is as follows:
/*
if (condition) {
    // code to be executed if condition is true
} else {
    // code to be executed if condition is false
}
*/
#include <iostream>
using namespace std;    
int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    if (number > 0) {
        cout << "The number is positive." << endl;
    } else if (number < 0) {
        cout << "The number is negative." << endl;
    } else {
        cout << "The number is zero." << endl;
    }

    return 0;
}