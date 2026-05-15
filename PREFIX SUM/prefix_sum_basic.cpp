#include <iostream>
using namespace std;

int main() {

    int arr[] = {1,2,3,4,5};

    int n = 5;

    int prefix[100];

    prefix[0] = arr[0];

    for(int i = 1; i < n; i++) {
        prefix[i] = prefix[i-1] + arr[i];
    }

    for(int i = 0; i < n; i++) {
        cout << prefix[i] << " ";
    }

    return 0;
}