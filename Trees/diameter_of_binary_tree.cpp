#include <iostream>
#include <algorithm>
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

int diameter = 0;

int height(Node* root) {

    if(root == NULL)
        return 0;

    int leftHeight = height(root->left);

    int rightHeight = height(root->right);

    diameter = max(diameter,
                   leftHeight + rightHeight);

    return 1 + max(leftHeight,
                   rightHeight);
}

int diameterOfTree(Node* root) {

    diameter = 0;

    height(root);

    return diameter;
}

int main() {

    Node* root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout << "Diameter = "
         << diameterOfTree(root);

    return 0;
}