#include<iostream>
using namespace std;
class A{
    public:
    int val;
    void input(){
        cin>>val;
    }
    int a=0;
    void disp1(){
        while(val%2==0){
            a++;
            val=val/2;
        }
        cout<<"A's func called "<<a<<" times"<<endl;
    }

};
class B:public A{
    public:
    int b=0;
    void disp2(){
        while(val%3==0){
            b++;
            val=val/3;
        }
        cout<<"B's func called "<<b<<" times"<<endl;
    }
};
class C:public B{
    public:
    int c=0;
    void disp3(){
        while(val%5==0){
            c++;
            val=val/5;
        }
        cout<<"C's func called "<<c<<" times"<<endl;
    }
};
class D:public C{

};
int main(){
    D aa;
    aa.input();
    aa.disp1();
    aa.disp2();
    aa.disp3();
    return 0;
}