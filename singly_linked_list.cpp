/*#include<iostream>
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
    void insertathead(Node* &head,int d){
        Node *temp=new Node(d);
        temp->next=head;
        head=temp;
    }
    void insertatend(Node* &tail,int d){
        Node* temp=new Node(d);
        tail->next=temp;
        
        tail=tail->next;
    }
    void print(Node* &head){
        Node *temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }

int main(){
    Node *node1=new Node(10);
   // cout<<node1->data<<endl;
    //cout<<node1->next<<endl;
    Node *head=node1;
    Node *tail=node1;
    print(head);
    insertathead(head,56);
    print(head);
    insertathead(head,89);
    print(head);
    insertatend(tail,67);
    print(head);
    return 0;
}*/

#include<iostream>
using namespace std;
class Node{
    public:
    int d;
    Node *next;
    Node(int data){
        this->d=data;
        this->next=NULL;
    }
    ~Node(){
        int value=this->d;
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"memory is free for node with data "<<value<<endl;
    }
};
void insertathead(Node* &head,Node *&tail,int d){
    if(head==NULL){
        Node *temp=new Node(d);
        head=temp;
        tail=temp;
    }
    else{
    Node *temp=new Node(d);
    temp->next=head;
    head=temp; 
    }
}
void insertatend(Node *&head,Node *&tail,int d){
    if(tail==NULL){
        Node *temp=new Node(d);
        head=temp;
        tail=temp;
    }
    else{
    Node *temp=new Node(d);
    tail->next=temp;
    tail=temp;
    }
}
void insertatanyindex(Node *&head,Node *&tail,int pos,int d){
    if(pos==1){
        insertathead(head,tail,d);
        return;
    }
    //if(pos==)
    Node *temp=head;
    for(int i=1;i<pos-1;i++){
        temp=temp->next;
    }
    if(temp->next==NULL){
        insertatend(head,tail,d);
        return;
    }
    Node *nodetoinsert=new Node(d);
    nodetoinsert->next=temp->next;
    temp->next=nodetoinsert;
}
void deleteatpos(Node* &head,Node *&tail,int pos){
    if(pos==1){
        Node *temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    else{
    Node *curr=head->next;
    Node *pre=head;
    for(int i=1;i<pos-1;i++){
        pre=curr;
        curr=curr->next;
    }
    pre->next=curr->next;
    if(pre->next==NULL){
        tail=pre;
    }
    curr->next=NULL;
    delete curr;
    }
}
void print(Node *&head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->d<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    //Node *node1=new Node(10);
    Node *head=NULL;
    Node *tail=NULL;
    print(head);
    insertathead(head,tail,34);
    print(head);
    insertatend(head,tail,78);
    print(head);
    insertatanyindex(head,tail,1,35);
    print(head);
    insertatend(head,tail,8);
    insertatend(head,tail,7);
    insertatend(head,tail,98);
    insertatend(head,tail,35);
    insertatanyindex(head,tail,3,39);
    print(head);
    insertatanyindex(head,tail,2,89);
    print(head);
    insertatanyindex(head,tail,1,45);
    print(head);
    insertatanyindex(head,tail,11,100);
    print(head);
    insertatanyindex(head,tail,12,123);
    print(head);
    insertatanyindex(head,tail,13,89);
    print(head);
    deleteatpos(head,tail,1);
    print(head);
    deleteatpos(head,tail,2);
    print(head);
    deleteatpos(head,tail,12);
    print(head);
    cout<<tail->d;
    return 0;
}