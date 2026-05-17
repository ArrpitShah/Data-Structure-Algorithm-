#include <iostream>
#include <unordered_map>
using namespace std;

int main() {

    int arr[] = {1,2,2,3,1,4,3};

    int n = 7;

    unordered_map<int, int> freq;

    // frequency count
    for(int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    // first non-repeating
    for(int i = 0; i < n; i++) {

        if(freq[arr[i]] == 1) {
            cout << arr[i];
            return 0;
        }
    }

    cout << "No non-repeating element";

    return 0;
}