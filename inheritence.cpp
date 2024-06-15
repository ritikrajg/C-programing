#include<iostream>
using namespace std;
class Employee{
    public:
    int id;
    Employee(){}
    Employee(int inid){
        id=inid;
    }
};
class Programmer:Employee{
    public:
    Programmer(int inid){
        id=inid;
    }
};
int main(){
    Programmer a(3);
    cout<<a.id;
    return 0;
}