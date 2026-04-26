// In this section we will learn hoe to create a pattern using nested loops. We will create a pattern of stars that forms a right-angled triangle. 
// explaining the code:
// 1. We start by including the iostream library which allows us to use input and output functions.
// 2. We use the standard namespace to avoid having to write std:: before every standard library function.
// 3. We define the main function which is the entry point of the program.  
// 4. We declare an integer variable n which will store the number of rows in the pattern.
// 5. We take input from the user and store it in the variable n.
// 6. We use a for loop to iterate from 1 to n. This loop will control the number of rows in the pattern.
// 7. Inside the first for loop, we use another for loop to iterate from 1 to i. This loop will control the number of stars in each row.
// 8. We print a star followed by a space in each iteration of the inner loop.
// 9. After the inner loop finishes, we print a newline character to move to the next row of the pattern.        
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
// Rules for creating patterns: 
// Pattern = rows + columns
// outer loop = rows
// inner loop = columns