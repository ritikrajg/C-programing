#include<iostream>
using namespace std;
void fibo(int n){
    int a=0,b=1,sum;
    for(int i=0;i<n;i++){
        cout<<a<<endl;
        sum=a+b;
        a=b;
        b=sum;
    }
}
int main(){
    int n;
    cout<<"Enter the number of term of fibonacci: ";
    cin>>n;
    fibo(n);
    return 0;
}