#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,digit,i=0,ans=0;
    cout<<"Enter the binary number: ";
    cin>>n;
    while(n!=0){
       digit=n%10;
       ans=(digit*pow(2,i))+ans;
       i++;
       n=n/10;
    }
    cout<<ans;
    return 0;
}