// 1  2  3  4
// 12 13 14 5
// 11 16 15 6
// 10 9  8  7

#include <iostream>
using namespace std;

int main() {
    int n = 4;
    int arr[10][10];

    int top = 0, bottom = n - 1;
    int left = 0, right = n - 1;
    int num = 1;

    while(top <= bottom && left <= right) {

        for(int i = left; i <= right; i++) arr[top][i] = num++;
        top++;

        for(int i = top; i <= bottom; i++) arr[i][right] = num++;
        right--;

        for(int i = right; i >= left; i--) arr[bottom][i] = num++;
        bottom--;

        for(int i = bottom; i >= top; i--) arr[i][left] = num++;
        left++;
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}