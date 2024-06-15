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
};
class queue{
    public:
    Node *front;
    Node *rear;
    queue(){
        front=rear=NULL;
    }
    void enqueue(int data){
        Node *temp=new Node(data);
        if(front==NULL&&rear==NULL){
            front=rear=temp;
        }
        else{
            rear->next=temp;
            rear=temp;
        }
    }
    void dequeue(){
        if(front==NULL&&rear==NULL){
            cout<<"Queue is underflow."<<endl;
        }
        else{
            Node *temp=front;
            front=front->next;
            temp->next=NULL;
            delete temp;
        }
        if(front==NULL){
            rear=NULL;
        }
    }
    void print(){
        Node *temp=front;
        while(temp!=NULL){
            cout<<temp->d<<" ";
            temp=temp->next;
        }
    }
};
int main(){
    queue a;
    Node *temp=a.front;
    a.enqueue(9);
    a.enqueue(4);
   // a.dequeue();
   // a.dequeue();
    a.print();
}