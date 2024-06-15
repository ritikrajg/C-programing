#include<iostream>
using namespace std;
class parent{
    int a,b;
    void display(){
        cout<<a<<" "<<b<<endl;
    }
    public:
    void input(){
        cin>>a>>b;
    }
    void show(){
        display();
    }
};
class child:public parent{
    public:
    
};
int main(){
    child a;
    a.input();
    a.show();
    return 0;
}