#include<iostream>
using namespace std;
class queue{
    public:
    int *arr;
    int size;
    int front;
    int rear;
    queue(int size){
        arr=new int[size];
        this->size=size;
        front=0;
        rear=0;
    }
    bool isfull(){
        if(rear==size){
            return true;
        }
        else{
            return false;
        }
    }
    bool isempty(){
        if(front==rear){
            return true;
        }
        else{
            return false;
        }
    }
    void push(int d){       
        if(isfull()){
            cout<<"Queue is overflow."<<endl;
            
        }
        else{
           arr[rear]=d;
           rear++; 
        }
    }
    void pop(){
        if(isempty()){
            cout<<"Queue is underflow."<<endl;
        }
        else{
            front++;
            if(front==rear){
                front=0;
                rear=0;
            }
        }
    }
    int first(){
        if(isempty()){
            return -1;
        }
        else{
            return arr[front];
        }
    }
};
int main(){
    queue a(3);
    a.push(34);
    a.push(38);
    a.push(39);
    a.pop();
    a.pop();
    a.pop();
    a.push(34);
    a.push(38);
    a.push(39);
    cout<<a.first()<<endl;
    //a.push(39);
    //a.push(34);
    cout<<a.arr[2];
}