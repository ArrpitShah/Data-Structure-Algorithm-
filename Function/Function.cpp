// In this Section We learn about Functions in C++ Programming Language. I know this topic is before from Arrays but I want to explain it before because it is very important topic in C++ Programming Language. So let's start with the definition of Function in C++ Programming Language.
// A function is a block of code that performs a specific task. It is a reusable piece of code that can be called from other parts of the program. Functions are used to break down a large program into smaller, more manageable pieces. They also help to improve the readability and maintainability of the code.
// In C++ Programming Language, there are two types of functions:   
// 1. Built-in functions: These are functions that are provided by the C++ Standard Library. They are pre-defined and can be used directly in your program. Examples of built-in functions include:
// - cout: Used for outputting data to the console.
// - cin: Used for taking input from the user.
// - sqrt: Used for calculating the square root of a number.    
// 2. User-defined functions: These are functions that are defined by the programmer. They can be used to perform specific tasks that are not covered by the built-in functions. User-defined functions can take parameters and return values. They can also be called from other parts of the program.
// The syntax for defining a user-defined function in C++ Programming Language is as follows:
// return_type function_name(parameter_list) {
//     // function body
// }
// - return_type: This is the data type of the value that the function will return. If the function does not return any value, you can use the keyword "void".
// - function_name: This is the name of the function. It should be a valid identifier and should follow the naming conventions of C++ Programming Language.
// - parameter_list: This is a comma-separated list of parameters that the function takes. Each parameter consists of a data type and a variable name. If the function does not take any parameters, you can leave this part empty.     
// Here is an example of a user-defined function in C++ Programming Language:
#include <iostream>
using namespace std;
// Function to calculate the sum of two numbers
int sum(int a, int b) {
    return a + b;
}   
int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    int result = sum(num1, num2);
    cout << "The sum of " << num1 << " and " << num2 << " is: " << result << endl;

    return 0;
}
// In this example, we have defined a user-defined function called "sum" that takes two integer parameters and returns their sum. In the main function, we take input from the user, call the "sum" function with the input values, and then output the result to the console.
// this is the first type of Function in C++ .
// let's Learn About the second type which is void function in C++ Programming Language. A void function is a function that does not return any value. It is used when you want to perform a specific task without needing to return any result. The syntax for defining a void function is as follows:
// void function_name(parameter_list) { 
    // function body
// }
// Here is an example of a void function in C++ Programming Language:
#include <iostream>
using namespace std;
// Function to print a message
void printMessage() {
    cout << "Hello, this is a void function!" << endl;
}
int main() {
    printMessage();
    return 0;
}
// In this example, we have defined a void function called "printMessage" that does not take any parameters and does not return any value. In the main function, we simply call the "printMessage" function to display the message on the console.
// Now you have learned about both types of functions in C++ Programming Language: user-defined functions that return a value and void functions that do not return a value. Functions are an essential part of programming and are used to organize code, improve readability, and promote code reusability.
