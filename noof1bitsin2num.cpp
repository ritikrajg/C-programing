#include<iostream>
using namespace std;
int numof1bits(int a,int b){
    int count=0;
    while(a!=0){
        int n=a&1;
        if(n==1){
          count=count+1;
        }
        a=a>>1;
    }
    while(b!=0){
        int n=b&1;
        if(n==1){
            count=count+1;
        }
        b=b>>1;
    }
    return count;
}
int main(){
    int a,b;
    cout<<"Enter the two numbers whom you want the bits: ";
    cin>>a>>b;
    cout<<"the number of 1 bits present in the both numbers are "<<numof1bits(a,b);
    return 0;
}