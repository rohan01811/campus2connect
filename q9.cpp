#include<iostream>
#include<queue>
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

int countHalfNodes(Node* root) {
    if (root == NULL)
        return 0;

    queue<Node*> q;
    q.push(root);
    int count = 0;

    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();

        bool hasLeft = temp->left != NULL;
        bool hasRight = temp->right != NULL;

        if ((hasLeft && !hasRight) || (!hasLeft && hasRight))
            count++;

        if (temp->left)
            q.push(temp->left);
        if (temp->right)
            q.push(temp->right);
    }

    return count;
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->right->right = new Node(5);
    root->right->right->right = new Node(6);

    int halfNodes = countHalfNodes(root);
    cout << "Number of half nodes: " << halfNodes << endl;

    return 0;
}
