#include<iostream>
using namespace std;
int main(){
    int a=78;
    void *n=&a;
    cout<<(*(int*)n);
    return 0;
}