#include<iostream>
using namespace std;
int sum(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
         sum=sum+i;
    }
    return sum;
}
int sum1(int n){
    int sum=(n*(n+1))/2;
    return sum;
}
int main(){
    int n;
    cout<<"Enter the natural number: ";
    cin>>n;
    cout<<sum(n)<<endl;
    cout<<sum1(n)<<endl;
 return 0;
}