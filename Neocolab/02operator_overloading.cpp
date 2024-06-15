#include<iostream>
using namespace std;
class Arithmetic{
    float real;
    float img;
    public:
    Arithmetic(float r=0,float i=0){
        real=r;
        img=i;
    }
    Arithmetic operator+(const Arithmetic& op){
         Arithmetic temp;
         temp.real=real+op.real;
         temp.img=img+op.img;
         return temp;
    }
    Arithmetic operator-(const Arithmetic& op){
         Arithmetic temp;
         temp.real=real-op.real;
         temp.img=img-op.img;
         return temp;
    }
    void display(){
        if(img<0){
          cout<<real<<" - "<<-img<<"i"<<endl;
        }
        else{
          cout<<real<<" + "<<img<<"i"<<endl;
        }
    }
};
int main(){
    float r,i,r1,i1;
    cin>>r>>i;
    cin>>r1>>i1;
    Arithmetic a1(r,i);
    Arithmetic a2(r1,i1);
    Arithmetic a3=a1+a2;
    Arithmetic a4=a1-a2;
    a3.display();
    a4.display();
    return 0;
}