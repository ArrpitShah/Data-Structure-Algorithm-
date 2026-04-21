// What is input and output in C++? 
// Input and output (I/O) in C++ refers to the process of receiving data from the user (input) and displaying information to the user (output).
// C++ provides a standard library called <iostream> that allows you to perform input and output operations using the cin and cout objects.
// The cin object is used for input, while the cout object is used for output.  
#include <iostream>
using namespace std;
int main() {
    // Output example
    cout << "Hello, World!" << endl; // This line of code will output "Hello, World!" to the console.

    // Input example
    int number;
    cout << "Enter a number: "; // Prompt the user to enter a number
    cin >> number; // Read the input from the user and store it in the variable 'number'
    
    cout << "You entered: " << number << endl; // Output the value entered by the user

    return 0;
}