#include<iostream>
using namespace std;
class Parent{
    private:
    void m1();
    void m2(int a);
    public:
    void m1Public(){
        cout<<"From parent m1()"<<endl;
    }
    void m2Public(int a){
        cout<<a<<endl;
    }
};
class Child:private Parent{
    public:
    void m1Child(){
        cout<<"From child m1()"<<endl;
    }
    void m2Child(int b){
        cout<<b<<endl;
    }
};
int main(){
    int a,b;
    cin>>a>>b;
    Parent u;
    Child v;
    u.m1Public();
    u.m2Public(a);
    v.m1Child();
    v.m2Child(b);
    return 0;
}