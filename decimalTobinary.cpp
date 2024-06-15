#include<iostream>
using namespace std;

int decitobin(int n){
    int rem,ans=0;
    while(n>=0){
    rem=n%2;
    n=n/2;
    ans=(ans*10) + rem;
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter the decimal number which you want to convert to the binary: ";
    cin>>n;
    cout<<decitobin(n);
    return 0;
}