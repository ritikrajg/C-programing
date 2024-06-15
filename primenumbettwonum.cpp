#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter two number: "<<endl;
    cin>>a>>b;
    int i=a;
    cout<<"the prime numbers between "<<a<<" and "<<b<<" are "<<endl;
    while(i<b){
        int j=2;
        while(j<i){
            if(i%j==0){
                i++;
                break;
            }
            else{
                j++;
            }
        }
        if(j==i){
            cout<<i<<endl;
            i++;
        }
        
    }
    return 0;
}