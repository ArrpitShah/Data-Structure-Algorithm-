#include <iostream>
#include <unordered_map>
using namespace std;

int main() {

    int arr[] = {2,7,11,15};

    int n = 4;
    int target = 9;

    unordered_map<int, int> mp;

    for(int i = 0; i < n; i++) {

        int needed = target - arr[i];

        if(mp.find(needed) != mp.end()) {

            cout << "Pair Found: ";
            cout << needed << " " << arr[i];

            return 0;
        }

        mp[arr[i]] = i;
    }

    cout << "No Pair Found";

    return 0;
}