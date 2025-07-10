#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

int getSize(Node* root) {
    if (root == NULL)
        return 0;

    int leftSize = getSize(root->left);
    int rightSize = getSize(root->right);

    return 1 + leftSize + rightSize;
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    int size = getSize(root);
    cout << "Size of binary tree: " << size << endl;

    return 0;
}
