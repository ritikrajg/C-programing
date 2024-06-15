#include<iostream>
using namespace std;
class employee{
    int a;
    int b;
    public:
    void get(int c,int d){
        a=c;
        b=d;
    }
    void get(employee o1,employee o2){
        a=o1.a+o1.b;
        b=o2.a+o2.b;
    }
    void print(){
        cout<<a<<" "<<b<<endl;
    }
};
int main(){
    employee e1,e2,e3;
    e1.get(3,5);
    e1.print();
    e2.get(6,9);
    e2.print();
    e3.get(e1,e2);
    e3.print();
    return 0;
}