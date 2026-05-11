#include <iostream>
#include <unordered_map>
using namespace std;

int main() {

    unordered_map<int, int> mp;

    mp[1] = 10;
    mp[2] = 20;
    mp[3] = 30;

    for(auto x : mp) {
        cout << x.first << " ";
        cout << x.second << endl;
    }

    return 0;
}