// Pair in C++ STL
#include <iostream>
#include <utility>
using namespace std;    
int main() {

    pair<int, string> p1;

    p1.first = 1;
    p1.second = "Hello";

    cout << p1.first << " " << p1.second << endl;

    pair<int, string> p2(2, "World");

    cout << p2.first << " " << p2.second << endl;

    return 0;
}