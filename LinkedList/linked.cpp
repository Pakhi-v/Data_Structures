#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node(int data){  //constructor
        this -> data = data;
        this -> next = NULL;
    }
};

void insertathead(Node* &head, int d){
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void insertattail(Node* &tail, int d){
     Node* temp = new Node(d);
     tail -> next = temp;
     tail = tail -> next;
}


void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<< temp -> data<<" ";
        temp = temp -> next;

    }
    cout<<endl;
}


int main(){
    Node* node1 = new Node(10);
    //cout<<node1 -> data << endl;
    //cout<<node1 -> next << endl;

    Node* head = node1;
    Node* tail = node1;
    print(head);

    insertattail(tail, 12);

    print(head);
    insertattail(tail, 15);
    print(head);
} //Linked list program 
