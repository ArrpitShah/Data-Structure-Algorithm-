// In this section we learn how to calculate the sum of the first n natural numbers using a simple loop in C++. The program will take a positive integer n as input from the user and then use a for loop to calculate the sum of the first n natural numbers. Finally, it will display the result to the user.
#include <iostream>
using namespace std;
int main() {
    int n, sum = 0;
    cout << "Enter a positive integer: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        sum += i; // This is equivalent to sum = sum + i
    }

    cout << "The sum of the first " << n << " natural numbers is: " << sum << endl;

    return 0;
}