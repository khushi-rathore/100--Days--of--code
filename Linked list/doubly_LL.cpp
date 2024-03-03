#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node * prev=NULL;
    Node*next=NULL;

    //Constructor
    Node(int d){
        this->data=d;
        this->next=NULL;
        this->prev=NULL;

    }

};
void print(Node* head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void insertAtHead(Node* &head,int d){
    Node*temp=new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp; 
}
void insertAtTail(Node* &tail,int d){
    Node*temp=new Node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;

}
int getLength(Node* head){
    int len=0;
    Node*temp=head;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}


int main(){
    Node *node1=new Node(10);
    Node*head=node1;
    Node*tail=head;

    print(head);
    cout<<"length of DDL : "<<getLength(head)<<endl;

    insertAtHead(head,11);
    print(head);
    cout<<"length of DDL : "<<getLength(head)<<endl;

    insertAtTail(tail,300);
    print(head);


    
    return 0;
}