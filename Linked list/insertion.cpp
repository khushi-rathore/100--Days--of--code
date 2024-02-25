#include<bits/stdc++.h>
using namespace std;
class Node{    //class for creating a Node
    public:
    int data;
    Node*next;
    Node(int data){  //Constructor for creating multiple nodes
        this->data=data;
        this->next=NULL;
    }
};
void insertAtHead(Node* &head, int d){ 
    Node *temp=new Node(d);
    temp->next=head;
    head=temp;

}
void insertAtTail(Node * &tail,int d){
    Node*temp=new Node(d);
    tail->next=temp;
    tail=temp;
}
void insertAtPosition(Node* &tail,Node* &head,int position,int d){
    if(position==1){
        insertAtHead(head,d);
        return;
    }
    Node *temp=head;
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    if(temp->next==NULL){
        insertAtTail(tail,d);
        return;

    }
    Node*nodeAtInsert=new Node(d);
    nodeAtInsert->next=temp->next;
    temp->next=nodeAtInsert;
    
}

void print(Node *&head){
    Node * temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    Node* node1=new Node(10);
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;
    Node *head=node1;
    Node *tail=node1;
    print(head);
    insertAtHead(head,15);
    print(head);
    insertAtTail(tail,20);
    print(head);
    insertAtPosition(tail,head,2,50);
    print(head);
    cout<<"tail is "<<tail->data<<endl;
    cout<<"head is "<<head->data<<endl;

    return 0;
}