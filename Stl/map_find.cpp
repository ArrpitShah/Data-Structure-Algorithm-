#include <iostream>
#include <map>
using namespace std;

int main() {

    map<string, int> mp;

    mp["apple"] = 10;
    mp["banana"] = 20;

    if(mp.find("apple") != mp.end()) {
        cout << "Found";
    } else {
        cout << "Not Found";
    }

    return 0;
}