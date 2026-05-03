//In this Section we will learn about what is an Array in C++ and how to declare and initialize an Array in C++. 
#include <iostream>
using namespace std;
int main() {
    // An Array is a collection of elements of the same type. It is a data structure that can hold a fixed number of values. 
    // The values are stored in contiguous memory locations and can be accessed using an index. 

    // To declare an Array in C++, we use the following syntax: 
    // data_type array_name[array_size];

    // For example, to declare an Array of integers with a size of 5, we can write: 
    int arr[5];

    // This will create an Array named 'arr' that can hold 5 integers. The elements of the Array are indexed from 0 to 4. 

    // We can also initialize an Array at the time of declaration. For example: 
    int arr2[5] = {1, 2, 3, 4, 5};

    // This will create an Array named 'arr2' and initialize it with the values 1, 2, 3, 4, and 5. 

    // We can access the elements of the Array using their index. For example: 
    cout << arr2[0] << endl; // Output: 1
    cout << arr2[1] << endl; // Output: 2
    cout << arr2[2] << endl; // Output: 3
    cout << arr2[3] << endl; // Output: 4
    cout << arr2[4] << endl; // Output: 5

    return 0;
}
