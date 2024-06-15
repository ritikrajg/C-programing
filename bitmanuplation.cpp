#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,bit,ans=0,i=0;
    cout<<"Enter the number: ";
    cin>>n;
    while(n!=0){
       bit=n&1;
       ans=(bit*pow(10,i))+ans;
       n=n>>1;
       i++;
    }
    cout<<ans;
    return 0;
}