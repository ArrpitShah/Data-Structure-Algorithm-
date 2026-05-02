#include <iostream>
using namespace std;

void swapNum(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5, y = 10;

    swapNum(x, y);

    cout << x << " " << y;  // 10 5
    return 0;
}