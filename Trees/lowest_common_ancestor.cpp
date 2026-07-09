#include <iostream>
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

Node* lowestCommonAncestor(Node* root,
                           Node* p,
                           Node* q) {

    if(root == NULL)
        return NULL;

    if(root == p || root == q)
        return root;

    Node* left =
        lowestCommonAncestor(root->left,
                             p,
                             q);

    Node* right =
        lowestCommonAncestor(root->right,
                             p,
                             q);

    if(left && right)
        return root;

    if(left)
        return left;

    return right;
}

int main() {

    Node* root = new Node(3);

    root->left = new Node(5);
    root->right = new Node(1);

    root->left->left = new Node(6);
    root->left->right = new Node(2);

    root->right->left = new Node(0);
    root->right->right = new Node(8);

    root->left->right->left = new Node(7);
    root->left->right->right = new Node(4);

    Node* ans =
        lowestCommonAncestor(root,
                             root->left,
                             root->right);

    cout << "LCA = "
         << ans->data;

    return 0;
}