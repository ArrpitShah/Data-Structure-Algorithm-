// In this section we will learn about loops in C++. Loops are used to execute a block of code repeatedly until a certain condition is met. There are three types of loops in C++: for loop, while loop, and do-while loop. Each type of loop has its own syntax and use cases. We will explore each type of loop with examples to understand how they work and when to use them.
#include <iostream>
using namespace std;
int main() {
    cout << "Printing numbers from 1 to 10 using a for loop: " << endl;
    for (int i = 1; i <= 10; i++) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}

// While loop example
#include <iostream>
using namespace std;
int main() {
    cout << "Printing numbers from 1 to 10 using a while loop: " << endl;
    int i = 1;
    while (i <= 10) {
        cout << i << " ";
        i++;
    }
    cout << endl;

    return 0;
}

// Do-while loop example
#include <iostream>
using namespace std;
int main() {
    cout << "Printing numbers from 1 to 10 using a do-while loop: " << endl;
    int i = 1;
    do {
        cout << i << " ";
        i++;
    } while (i <= 10);
    cout << endl;

    return 0;
}