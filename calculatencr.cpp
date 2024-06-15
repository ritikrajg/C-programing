#include<iostream>
using namespace std;
int ncr(int n,int r){
    int n1=1,r1=1,nr=1;
    for(int i=1;i<=n;i++){
        n1=n1*i;
    }
    for(int i=1;i<=r;i++){
        r1=r1*i;
    }
    for(int i=1;i<=(n-r);i++){
        nr=nr*i;
    }
    int cal=(nr*r1);
    return n1/cal;
}
int main(){
    int n,r;
    cout<<"Enter the value of n and r in combination: ";
    cin>>n>>r;
    cout<<"the value of combination is "<<ncr(n,r)<<endl;
    return 0;
}