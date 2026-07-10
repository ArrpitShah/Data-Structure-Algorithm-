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

int maxSum = INT_MIN;

int solve(Node* root) {

    if(root == NULL)
        return 0;

    int left = max(0, solve(root->left));

    int right = max(0, solve(root->right));

    maxSum = max(maxSum,
                 left + right + root->data);

    return root->data + max(left, right);
}

int maxPathSum(Node* root) {

    maxSum = INT_MIN;

    solve(root);

    return maxSum;
}

int main() {

    Node* root = new Node(-10);

    root->left = new Node(9);

    root->right = new Node(20);

    root->right->left = new Node(15);

    root->right->right = new Node(7);

    cout << "Maximum Path Sum = "
         << maxPathSum(root);

    return 0;
}