#include <iostream>
#include <climits>
using namespace std;

class Node {

public:

    int data;
    Node* left;
    Node* right;

    Node(int value) {

        data = value;
        left = NULL;
        right = NULL;
    }
};

bool isValid(Node* root,
             long long minValue,
             long long maxValue) {

    if(root == NULL)
        return true;

    if(root->data <= minValue ||
       root->data >= maxValue)
        return false;

    return isValid(root->left,
                   minValue,
                   root->data)

        &&

           isValid(root->right,
                   root->data,
                   maxValue);
}

bool isValidBST(Node* root) {

    return isValid(root,
                   LLONG_MIN,
                   LLONG_MAX);
}

int main() {

    Node* root = new Node(2);

    root->left = new Node(1);

    root->right = new Node(3);

    if(isValidBST(root))

        cout << "Valid BST";

    else

        cout << "Invalid BST";

    return 0;
}