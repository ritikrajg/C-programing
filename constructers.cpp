#include<iostream>
using namespace std;
class Simple{
    int a,b;
    public:
    Simple(int,int);
    void print(){
        cout<<a<<" and "<<b;
    }
};
Simple :: Simple(int x,int y=67){
      a=x;
      b=y;
}
int main(){
    Simple a(56);
    a.print();

}