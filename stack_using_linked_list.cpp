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
class stack{
    Node *head;
    int size;
    int top;
    public:
    stack(int size){
       head=NULL;
       this->size=size;
       this->top=-1;
    }
    bool isempty(){
        if(this->top==-1){
            return true;
        }
        else{
            return false;
        }
    }
    bool isfull(){
        if(this->top==this->size-1){
            return true;
        }
        else{
            return false;
        }
    }
    void push(int d){
        if(this->top==this->size-1){
            cout<<"Stack is overflow."<<endl;
        }
        else{
            Node *temp=new Node(d);
            temp->next=head;
            head=temp;
            top++;
        }
    }
    void pop(){
        if(this->top==-1){
            cout<<"Stack is underflow."<<endl;
        }
        else{
            Node *temp=head;
            head=head->next;
            temp->next=NULL;
            delete temp;
        }
    }
    void printstack(){
        Node *temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
    int peak(){
        if(this->head==NULL){
            return -1;
        }
        else{
            return head->data;
        }
    }
};
int main(){
    stack s(5);
    s.push(5);
    s.push(15);
    s.push(25);
    s.push(65);
    s.push(75);
    cout<<"Peak element is "<<s.peak()<<endl;
    s.printstack();
    return 0;
}