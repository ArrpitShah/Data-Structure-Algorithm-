//In this program we will learn about increment operator in C++
// The increment operator is represented by the symbol '++' and is used to increase the value of a variable by 1. It can be used in two forms: prefix and postfix.
// The prefix form (++variable) increments the variable before its value is used in an expression, while the postfix form (variable++) increments the variable after its value is used in an expression.
#include <iostream> 
using namespace std;
int main() {
    int a = 5;

    // Using postfix increment
    cout << "Postfix increment (a++): " << a++ << endl; // Outputs 5, then increments a to 6
    cout << "Current value of a: " << a << endl; // Outputs 6

    // Resetting a to 5
    a = 5;

    // Using prefix increment
    cout << "Prefix increment (++a): " << ++a << endl; // Increments a to 6, then outputs 6
    cout << "Current value of a: " << a << endl; // Outputs 6

    return 0;
}
// In this program , we learn about decrement operator in C++
// The decrement operator is represented by the symbol '--' and is used to decrease the value of    a variable by 1. Similar to the increment operator, it can be used in two forms: prefix and postfix.
// The prefix form (--variable) decrements the variable before its value is used in an expression, while the postfix form (variable--) decrements the variable after its value is used in an expression.
#include <iostream>
using namespace std;
int main() {
    int a = 5;

    // Using postfix decrement
    cout << "Postfix decrement (a--): " << a-- << endl; // Outputs 5, then decrements a to 4
    cout << "Current value of a: " << a << endl; // Outputs 4

    // Resetting a to 5
    a = 5;

    // Using prefix decrement
    cout << "Prefix decrement (--a): " << --a << endl; // Decrements a to 4, then outputs 4
    cout << "Current value of a: " << a << endl; // Outputs 4

    return 0;
}