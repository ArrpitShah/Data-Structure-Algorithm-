// In this Section, we will implement the priority_queue container adapter in C++. The priority_queue is a container adapter that provides constant time lookup of the largest (by default) element, at the expense of logarithmic insertion and extraction.
#include <iostream>
#include <queue>
using namespace std;

int main() {

    priority_queue<int> pq;

    pq.push(10);
    pq.push(50);
    pq.push(20);

    cout << pq.top() << endl; // 50

    pq.pop();

    cout << pq.top(); // 20

    return 0;
}