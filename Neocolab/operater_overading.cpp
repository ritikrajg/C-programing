#include<iostream>
using namespace std;
class Complex{
    int real;
    int img;
    public:
    Complex(int r=0,int i=0){
        real=r;
        img=i;
    }
    Complex operator+(const Complex& c2){
        Complex temp;
        temp.real=real+c2.real;
        temp.img=img+c2.img;
        return temp;
    }
    void print(){
        cout<<real<<" + "<<img<<"i"<<endl;
    }
};
int main(){
    Complex c1(10,5);
    Complex c2(2,4);
    Complex c3=c1+c2;
    c3.print();
    return 0;
}