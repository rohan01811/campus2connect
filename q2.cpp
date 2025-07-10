#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int d) {
       this-> data = d;
       this-> next = NULL;
    }
};

void insertNode(Node*& tail, int data) {
    Node* newNode = new Node(data);
    if (!tail) {
        tail = newNode;
        tail->next = tail;
    } else {
        newNode->next = tail->next;
        tail->next = newNode;
        tail = newNode;
    }
}

void printList(Node* head) {
    if (!head) return;
    Node* temp = head;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
    cout << endl;
}


void splitCircularList(Node* head, Node*& head1, Node*& head2) {
    if (!head || head->next == head) {
        head1 = head;
        head2 = nullptr;
        return;
    }

    Node* slow = head;
    Node* fast = head;

    while (fast->next != head && fast->next->next != head) {
        slow = slow->next;
        fast = fast->next->next;
    }

    if (fast->next->next == head) {
        fast = fast->next;
    }

    head1 = head;
    head2 = slow->next;

    slow->next = head1;  
    fast->next = head2;  
}


int main() {
    Node* tail = nullptr;

    for (int i = 1; i <= 6; ++i)
        insertNode(tail, i);

    Node* head = tail->next;
    Node* head1 = nullptr;
    Node* head2 = nullptr;

    splitCircularList(head, head1, head2);

    cout << "First half: ";
    printList(head1);
    cout << "Second half: ";
    printList(head2);

    return 0;
}
