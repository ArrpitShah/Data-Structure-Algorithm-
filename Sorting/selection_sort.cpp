// Selction Sort is a simple comparison-based sorting algorithm. It works by repeatedly selecting the smallest (or largest) element from the unsorted portion of the list and swapping it with the first unsorted element. The algorithm maintains two subarrays: one that is already sorted and one that is unsorted. The selection sort algorithm has a time complexity of O(n^2) in all cases, making it inefficient for large datasets. However, it is easy to understand and implement, making it a good choice for educational purposes to illustrate the concept of sorting.
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[100];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i < n-1; i++) {
        int minIndex = i;

        for(int j = i+1; j < n; j++) {
            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        swap(arr[i], arr[minIndex]);
    }

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}