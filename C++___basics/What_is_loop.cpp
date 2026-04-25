// In this section we will learn about loops in C++. Loops are used to execute a block of code repeatedly until a certain condition is met. There are three types of loops in C++: for loop, while loop, and do-while loop. Each type of loop has its own syntax and use cases. Let's explore each of them with examples.       
#include <iostream>
using namespace std;
int main() {
    // For loop example
    cout << "For loop example: " << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Iteration: " << i + 1 << endl;
    }

    // While loop example
    cout << "\nWhile loop example: " << endl;
    int j = 0;
    while (j < 5) {
        cout << "Iteration: " << j + 1 << endl;
        j++;
    }

    // Do-while loop example
    cout << "\nDo-while loop example: " << endl;
    int k = 0;
    do {
        cout << "Iteration: " << k + 1 << endl;
        k++;
    } while (k < 5);

    return 0;
}