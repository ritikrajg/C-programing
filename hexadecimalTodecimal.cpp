#include<iostream>
using namespace std;
int hexatodeci(string n){
    int size=n.size();
    int ans=0,x=1;
    for(int i=size-1;i>=0;i--){
        if(n[i]>='0' && n[i]<='9'){
           ans+=x*(n[i]-'0');
        }
        else if(n[i]>='A' && n[i]<='F'){
            ans+=x*(n[i]-'A'+10);
        }
        x*=16;
    }
    return ans;
}
int main(){
    string n;
    cout<<"Enter the hexadecimal number which you want to convert decimal: ";
    cin>>n;
    cout<<hexatodeci(n);
    return 0;
}