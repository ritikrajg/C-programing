#include<iostream>
using namespace std;
class emp{
    private:
    int a;
    int b;
    public:
    friend int o3(emp o1,emp o2);
    void get(int c,int d){
         a=c;
         b=d;
    }
    void print(){
        cout<<a<<" "<<b<<endl;
    }
};
int o3(emp o1,emp o2){
    emp o4;
    o4.get((o1.a+o2.a),(o1.b+o2.b));
    return o4.a;
}
int main(){
    emp a,b;int sum;
    a.get(3,5);
    b.get(8,9);
    sum=o3(a,b);
    cout<<sum;
}