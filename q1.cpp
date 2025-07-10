#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int d){
        this->data=d;
        this->next=NULL;
    }
};

 void insertAtTail(Node* &tail,int d){
     Node* temp=new Node(d);
     tail->next=temp;
     tail=temp;
 }
Node* reverseLink(Node* &head){

     Node* curr=head;
     Node* prev=NULL;
     reverse(head,curr,prev);
     return head;

   Node* prev=NULL;
   Node* curr=head;
   Node* forward=NULL;

   if(head==NULL || head->next==NULL){
    return head;
}
   while(curr!=NULL){
      forward=curr->next;
      curr->next=prev;
      prev=curr;
      curr=forward;
   }
   return prev;
 }

 void print(Node* &head){
    Node* temp=head;
    while (temp !=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    
  }
int main(){

       Node* node1=new Node(10);
    Node* tail=node1;
    insertAtTail(tail,3);
        insertAtTail(tail,5);
    // insertAtTail(tail,7);
    insertAtTail(tail,9);
    print(node1);
    cout<<"After reversing the linked list: "<<endl;
      node1=reverseLink(node1);
    print(node1);
}