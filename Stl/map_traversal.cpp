#include <iostream>
#include <map>
using namespace std;

int main() {

    map<string, int> mp;

    mp["apple"] = 10;
    mp["banana"] = 20;
    mp["mango"] = 15;

    for(auto x : mp) {
        cout << x.first << " ";
        cout << x.second << endl;
    }

    return 0;
}

// x.first   → key
//x.second  → value