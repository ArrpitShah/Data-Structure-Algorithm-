// We learn about min heap in this code snippet
#include <iostream>
#include <queue>
using namespace std;

int main() {

    priority_queue<int, vector<int>, greater<int>> pq;

    pq.push(10);
    pq.push(50);
    pq.push(20);

    cout << pq.top(); // 10

    return 0;
}
// Smallest element is at the top of the min heap