#include<iostream>
using namespace std;
class Node{
    public:
    Node *pre;
    int data;
    Node *next;
    Node(int d){
       this->pre=NULL;
       this->data=d;
       this->next=NULL;
    }
    ~Node(){
        int value=this->data;
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"memory is free for node with data "<<value<<endl;
    }
};
void insertathead(Node *&head,Node *&tail,int d){
    if(head==NULL){
        Node *temp=new Node(d);
        head=temp;
        tail=temp;
    }
    else{
        Node *temp=new Node(d);
        head->pre=temp;
        temp->next=head;
        head=temp;
    }
}
void print(Node *&head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void insertatend(Node *&head,Node *&tail,int d){
    if(tail==NULL){
        Node *temp=new Node(d);
        tail=temp;
        head=temp;
    }
    else{
        Node *temp=new Node(d);
        tail->next=temp;
        temp->pre=tail;
        temp=tail;
    }
}
void insertatanypos(Node *&head,Node *&tail,int data,int pos){
    if(pos==1){
        insertathead(head,tail,data);
        return;
    }
    
    Node *temp=head;
    for(int i=1;i<pos-1;i++){
        temp=temp->next;
    }
    if(temp==NULL){
        insertatend(head,tail,data);
        return;
    }
    Node *nodetonext=new Node(data);
    nodetonext->next=temp->next;
    temp->next=nodetonext;
    nodetonext->pre=temp;

}
void delation(Node *&head,Node *&tail,int pos){
    if(pos==1){
        Node *temp=head;
        (head->next)->pre=NULL;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    else{
    Node *prev=head;
    Node *curr=head->next;
    for(int i=1;i<pos-1;i++){
        prev=curr;
        curr=curr->next;
    }
    if(curr->next==NULL){
        prev->next=curr->next;
        curr->next=NULL;
        curr->pre=NULL;
        tail=prev;
        delete curr;
        return;
    }
    prev->next=curr->next;
    (curr->next)->pre=prev;
    curr->next=NULL;
    curr->pre=NULL;
    delete curr;
    }
}
int getlength(Node *&head){
    Node *temp=head;
    int cnt=0;
    while(temp!=NULL){
        cnt++;
        temp=temp->next;
    }
    return cnt;
}
int main(){
   // Node *node1=new Node(10);
    Node *head=NULL;
    Node *tail=NULL;
    insertathead(head,tail,67);
    print(head);
    cout<<"size: "<<getlength(head)<<endl;
    insertatend(head,tail,45);
    print(head);
    insertatanypos(head,tail,56,3);
    print(head);
    insertatanypos(head,tail,100,1);
    print(head);
    insertatanypos(head,tail,123,5);
    print(head);
    delation(head,tail,1);
    print(head);
    delation(head,tail,4);
    print(head);
    delation(head,tail,2);
    print(head);
    return 0;
}