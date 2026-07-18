#include <iostream>
#include <stack>
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

class BSTIterator {

private:

    stack<Node*> st;

    void pushLeft(Node* node) {

        while(node != NULL) {

            st.push(node);

            node = node->left;
        }
    }

public:

    BSTIterator(Node* root) {

        pushLeft(root);
    }

    int next() {

        Node* current = st.top();

        st.pop();

        if(current->right != NULL) {

            pushLeft(current->right);
        }

        return current->data;
    }

    bool hasNext() {

        return !st.empty();
    }
};

int main() {

    Node* root = new Node(7);

    root->left = new Node(3);

    root->right = new Node(15);

    root->right->left = new Node(9);

    root->right->right = new Node(20);

    BSTIterator it(root);

    while(it.hasNext()) {

        cout << it.next() << " ";
    }

    return 0;
}