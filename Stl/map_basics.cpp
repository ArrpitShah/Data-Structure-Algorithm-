#include <iostream>
#include <map>
using namespace std;

int main() {

    map<string, int> mp;

    mp["apple"] = 10;
    mp["banana"] = 20;
    mp["mango"] = 15;

    cout << mp["banana"] << endl;

    return 0;
}