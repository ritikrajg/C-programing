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
    ~Node(){
        int value=this->data;
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"the node with value "<<value<<" has been deleted."<<endl;
    }
};
void insertathead(Node *&head,Node *&tail,int d){
    Node *temp=new Node(d);
    temp->next=head;
    tail->next=temp;
    head=temp;
}
void insertatend(Node *&tail,int d){
    Node *temp=new Node(d);
    temp->next=tail->next;
    tail->next=temp;
    tail=temp;
}
void insertnode(Node *&tail,int element,int d){
    if(tail==NULL){
        Node *temp=new Node(d);
        temp->next=temp;
        tail=temp;
    }
    else{
        Node *curr=tail;
        Node *temp=new Node(d);
        if(curr->data==element){
           temp->next=curr->next;
           curr->next=temp; 
           tail=temp;
           return;
        }
        while(curr->data!=element){
            curr=curr->next;
        }
        temp->next=curr->next;
        curr->next=temp;
    }
}
void delation(Node *&tail,int d){
    Node *pre=tail;
    Node *curr=tail->next;
    if(pre==curr){
        tail=NULL;
        curr->next=NULL;
        delete curr;
        return;
    }
    while(pre->next!=tail){
        if(curr->data==d){
          pre->next=curr->next;
          curr->next=NULL;
          delete curr;
          return;
        }
        pre=curr;
        curr=curr->next;
        
    }
}
void print(Node *&tail){
    Node *temp=tail;
    if(temp==NULL){
        cout<<"The List is empty."<<endl;
    }
    temp=temp->next;
    while(temp!=tail){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<temp->data<<" ";
    cout<<endl;
}
int main(){
   // Node *node1=new Node(10);
    ///node1->next=node1;
    Node *head=NULL;
    Node *tail=NULL;
   // print(head);
    //insertathead(head,tail,23);
   // print(head);
    //insertatend(tail,45);
    //print(head);
    insertnode(tail,45,78);
    print(tail);
    insertnode(tail,78,34);
    print(tail);
    insertnode(tail,78,9);
    print(tail);
    delation(tail,9);
    print(tail);
    delation(tail,78);
    print(tail);
    delation(tail,34);
    print(tail);
        return 0;
}