#include<iostream>
using namespace std;
class demo{
    int real;
    int img;
    public:
    void putdata(){
        cout<<"Enter the real value: "<<endl;
        cin>>real;
        cout<<"Enter the imaginary value: "<<endl;
        cin>>img;

    }
    demo operator-(){
        demo temp;
        temp.real=-real;
        temp.img=-img;
        return temp;
    }
    void display(){
        cout<<real<<" + "<<img<<"i"<<endl;
    }
};
int main(){
    demo a;
    a.putdata();
    a.display();
    demo b=-a;
    b.display();
    return 0;

}