#include <iostream>
using namespace std;

int main() {
    int n, key;
    cin >> n;

    int arr[100];
    int count = 0;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cin >> key;

    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            count++;
        }
    }

    cout << count;
    return 0;
}