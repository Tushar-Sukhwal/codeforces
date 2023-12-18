#include<bits/stdc++.h>
using namespace std;

//linked list class 
class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int val){
        data = val;
        next = NULL;
    }
    //destructor
    ~Node(){
        cout<<"Deleting node with value "<<data<<endl;
        if(next!=NULL){
            delete next;
        }
    }
    //insert at tail
    void insertAtTail(int val){
        Node* n = new Node(val);
        Node* temp = this;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        temp->next = n;
    }
    //insert at head
    void insertAtHead(int val){
        Node* n = new Node(val);
        n->next = this;
        this = n;
    }
    //print linked list
    void print(){
        Node* temp = this;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};

int main () {

  //use the functions 
  Node* head = new Node(1);
  head->insertAtTail(2);
  head->insertAtTail(3);
  head->insertAtTail(4);
  head->insertAtTail(5); 
  head->insertAtTail(6);
  head->insertAtTail(7);
  head->insertAtTail(8);
  head->insertAtTail(9);
  head->insertAtTail(10);
  head->insertAtTail(11);


  head->print();
  delete head;
  return 0;

}