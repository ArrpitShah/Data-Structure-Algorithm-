#include <iostream>
using namespace std;

int main() {

    int arr[] = {12,-1,-7,8,-15,30,16,28};

    int n = 8;
    int k = 3;

    for(int i = 0; i <= n-k; i++) {

        bool found = false;

        for(int j = i; j < i+k; j++) {

            if(arr[j] < 0) {
                cout << arr[j] << " ";
                found = true;
                break;
            }
        }

        if(!found)
            cout << "0 ";
    }

    return 0;
}