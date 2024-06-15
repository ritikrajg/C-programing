#include<iostream>
using namespace std;
class student{
    int roll;
    int id;
    public:
    student(int x,int n):roll(x),id(n+roll){
        cout<<"Student name is "<<id<<" and roll number is "<<roll<<endl;
    }
    ~student(){
        cout<<"Deconstructer is called."<<endl;
    }
};
int main(){
    student a(34,56);
    student b(34,56);
    student c(34,56);
    student d(34,56);
    student e(34,56);
    return 0;
}