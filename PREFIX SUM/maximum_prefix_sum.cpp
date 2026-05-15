#include <iostream>
using namespace std;

int main() {

    int arr[] = {-2,1,3,-1,2};

    int n = 5;

    int prefixSum = 0;
    int maxSum = arr[0];

    for(int i = 0; i < n; i++) {

        prefixSum += arr[i];

        maxSum = max(maxSum, prefixSum);
    }

    cout << maxSum;

    return 0;
}