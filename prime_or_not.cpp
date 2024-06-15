#include<iostream>
using namespace std;
int main(){
    int n,div=2;
    cout<<"enter the number: ";
    cin>>n;
    while (div<n){
       if(n%div==0){
        cout<<"Not prime";
        return 0;
       }
       else{
        div=div+1;
       }
    }
    cout<<"prime number.";
    return 0;
}