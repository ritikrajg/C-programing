#include<iostream>
using namespace std;
class data
{
    public:
    char emname[20];
    int id;
    int balance;
    void input()
    {
        cout<<"enter name";
        cin>>emname;
        cout<<"enter id ";
        cin>>id;
        cout<<"enter balance";
        cin>>balance;

    }
    void operator ++()
    {
        balance=++balance;

    }
    void output()
    {
        cout<<"name is "<<emname<<endl;
        cout<<"id "<<id<<endl;
        cout<<"balance "<<balance;
    }
};
int main()
{
    data d;
    d.input();
    ++d;
    d.output(); 
}