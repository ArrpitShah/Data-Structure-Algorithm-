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

    while(root != NULL) {

        if(p->data < root->data &&
           q->data < root->data) {

            root = root->left;
        }

        else if(p->data > root->data &&
                q->data > root->data) {

            root = root->right;
        }

        else {

            return root;
        }
    }

    return NULL;
}

int main() {

    Node* root = new Node(6);

    root->left = new Node(2);
    root->right = new Node(8);

    root->left->left = new Node(0);
    root->left->right = new Node(4);

    root->left->right->left = new Node(3);
    root->left->right->right = new Node(5);

    root->right->left = new Node(7);
    root->right->right = new Node(9);

    Node* ans =
        lowestCommonAncestor(
            root,
            root->left,
            root->right
        );

    cout << "LCA = "
         << ans->data;

    return 0;
}