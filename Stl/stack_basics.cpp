//Stack in C++ STL
// Stack work with lifo (last in first out) principle. It is a container adapter that provides a restricted interface to access its elements. The stack class in C++ STL is implemented as a template class, which means that you can create stacks of any data type, such as int, float, string, or even user-defined types. The stack class provides member functions for adding and removing elements from the stack, as well as for accessing the top element of the stack and checking if the stack is empty.
#include <iostream>
#include <stack>
using namespace std;
int main() {

    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element: " << s.top() << endl;

    s.pop();

    cout << "Top element after pop: " << s.top() << endl;

    cout << "Is stack empty? " << (s.empty() ? "Yes" : "No") << endl;

    return 0;
}
//functions about stack in C++:
//1. push(): This function is used to add an element to the top of the stack. It takes the element as an argument and adds it to the stack, increasing its size by one.
//2. pop(): This function is used to remove the top element from the stack. It does not take any arguments and reduces the size of the stack by one.
//3. top(): This function returns the value of the top element of the stack without removing    it. It does not take any arguments and allows you to access the top element of the stack.
//4. empty(): This function returns a boolean value indicating whether the stack is empty or not. It does not take any arguments and can be used to check if the stack has any elements before performing operations on it.