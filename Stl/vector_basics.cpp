#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    return 0;
}
// Here is some important points about vector in C++:
// 1. Dynamic Size: A vector can grow or shrink in size dynamically as elements are added or removed. This means that you don't need to worry about the size of the vector when you declare it, and it can automatically adjust its size as needed.
// 2. Contiguous Memory: The elements of a vector are stored in contiguous memory locations, which allows for efficient access and iteration. This means that you can access any element in the vector using its index in constant time (O(1)).
// 3. Template Class: A vector is a template class, which means that you can    create vectors of any data type, such as int, float, string, or even user-defined types. This makes vectors a versatile and powerful data structure in C++.
// 4. Member Functions: The vector class provides a variety of member functions for adding, removing, and manipulating elements in the vector. Some commonly used member functions include push_back() for adding elements to the end of the vector, pop_back() for removing the last element, size() for getting the number of elements in the vector, and clear() for removing all elements from the vector.
// 5. Performance: Vectors are generally efficient for most operations, but they can be less efficient than other data structures for certain operations, such as inserting or deleting elements in the middle of the vector, which can require shifting elements to maintain contiguous memory. However, for most use cases, vectors provide a good balance of performance and ease of use.
// Function about vector in C++:
// 1. push_back(): This function is used to add an element to the end of the vector. It takes the element as an argument and adds it to the vector, increasing its size by one.
// 2. pop_back(): This function is used to remove the last element from the vector
// . It does not take any arguments and reduces the size of the vector by one.
// 3. size(): This function returns the number of elements currently stored in the vector.
// 4. clear(): This function removes all elements from the vector, leaving it empty. It does not take any arguments and sets the size of the vector to zero.