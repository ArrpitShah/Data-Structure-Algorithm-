// In this code we find out whether a number is even or odd using the modulus operator (%). The modulus operator gives the remainder of a division operation. If a number is divisible by 2 (i.e., the remainder is 0), then it is an even number; otherwise, it is an odd number.
#include <iostream> 
using namespace std;
int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    if (number % 2 == 0) {
        cout << "The number is even." << endl;
    } else {
        cout << "The number is odd." << endl;
    }

    return 0;
}