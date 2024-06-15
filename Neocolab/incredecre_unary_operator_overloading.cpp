#include<iostream>
using namespace std;
class demo{
    int x;
    public:
    void putdata(){
        cout<<"Enter the value: "<<endl;
        cin>>x;
    }
    void display(){
        cout<<x<<endl;
    }
    void operator++(int){
        x=x+1;
    }

};
int main(){
    demo a;
    a.putdata();
    a.display();
    a++;
    a.display();
}