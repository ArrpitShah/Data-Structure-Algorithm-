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

void inorder(Node* root,
             int& k,
             int& answer) {

    if(root == NULL)
        return;

    inorder(root->left, k, answer);

    k--;

    if(k == 0) {

        answer = root->data;

        return;
    }

    inorder(root->right, k, answer);
}

int kthSmallest(Node* root,
                int k) {

    int answer = -1;

    inorder(root, k, answer);

    return answer;
}

int main() {

    Node* root = new Node(5);

    root->left = new Node(3);

    root->right = new Node(6);

    root->left->left = new Node(2);

    root->left->right = new Node(4);

    root->left->left->left = new Node(1);

    cout << "Answer = "
         << kthSmallest(root,3);

    return 0;
}