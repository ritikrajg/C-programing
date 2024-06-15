#include<iostream>
using namespace std;
void fibo(int n){
    int a=0,b=1,sum=0;
    for(int i=0;i<n;i++){
        cout<<a<<endl;
        sum=a+b;
        a=b;
        b=sum;
    }
}
int main(){
    int n;
    cout<<"Enter the number of terms upto which you want the fibonacci series: ";
    cin>>n;
    fibo(n);
    return 0;
}