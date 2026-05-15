#include <iostream>
using namespace std;

int main() {

    int arr[] = {1,3,5,2,2};

    int n = 5;

    int totalSum = 0;

    for(int i = 0; i < n; i++) {
        totalSum += arr[i];
    }

    int leftSum = 0;

    for(int i = 0; i < n; i++) {

        totalSum -= arr[i];

        if(leftSum == totalSum) {
            cout << i;
            return 0;
        }

        leftSum += arr[i];
    }

    return 0;
}