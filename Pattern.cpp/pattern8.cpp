// 1
// 01
// 101
// 0101
#include <iostream>
using namespace std;

int main() {
    int n = 4;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << (j % 2);
        }
        cout << endl;
    }

    return 0;
}