#include <iostream>
using namespace std;

int main() {

    int arr[] = {1,2,3};

    int n = 3;

    for(int i = 0; i < n; i++) {

        int sum = 0;

        for(int j = i; j < n; j++) {

            sum += arr[j];

            cout << sum << " ";
        }
    }

    return 0;
}