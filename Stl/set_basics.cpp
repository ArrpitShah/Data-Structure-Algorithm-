//Set in C++ STL
// A set is a collection of unique elements in C++ STL. It is implemented as a balanced binary search tree, which allows for efficient insertion, deletion, and searching of elements. The set class in C++ STL provides member functions for adding and removing elements from the set, as well as for checking if an element exists in the set and for iterating through the elements of the set.
#include <iostream>
#include <set>
using namespace std;

int main() {

    set<int> s;

    s.insert(5);
    s.insert(1);
    s.insert(3);
    s.insert(1);

    for(auto x : s) {
        cout << x << " ";
    }

    return 0;
}