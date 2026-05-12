// Double Deque Basics , You can use the double-ended queue (deque) in C++ to efficiently add and remove elements from both ends of the container. Here's a basic example of how to use a deque in C++:
#include <iostream>
#include <deque>
using namespace std;

int main() {

    deque<int> dq;

    dq.push_back(10);
    dq.push_back(20);

    dq.push_front(5);

    for(auto x : dq) {
        cout << x << " ";
    }

    return 0;
}