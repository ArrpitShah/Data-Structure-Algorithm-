// Let's Run Operators in c++ ; 
// What is operators in C++?
// Operators in C++ are special symbols or keywords that perform specific operations on one or more operands. They are used to manipulate data and variables in various ways, such as performing arithmetic calculations, comparing values, and assigning values to variables. C++ provides a wide range of operators, including arithmetic operators (+, -, *, /), comparison operators (==, !=, <, >), logical operators (&&, ||), and assignment operators (=, +=, -=), among others. These operators allow programmers to write complex expressions and perform various operations on data efficiently.
#include <iostream> 
using namespace std;
int main() {

    // Arithmetic Operators
    int a = 10, b = 5;
    cout << "a + b = " << a + b << endl; // Addition
    cout << "a - b = " << a - b << endl; // Subtraction
    cout << "a * b = " << a * b << endl; // Multiplication
    cout << "a / b = " << a / b << endl; // Division

    // Comparison Operators
    cout << "a == b: " << (a == b) << endl; // Equal to
    cout << "a != b: " << (a != b) << endl; // Not equal to
    cout << "a > b: " << (a > b) << endl;   // Greater than
    cout << "a < b: " << (a < b) << endl;   // Less than

    // Logical Operators
    bool x = true, y = false;
    cout << "x && y: " << (x && y) << endl; // Logical AND
    cout << "x || y: " << (x || y) << endl; // Logical OR
    cout << "!x: " << (!x) << endl;         // Logical NOT

    return 0;
}
