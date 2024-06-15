#include<iostream>
using namespace std;
void prime(int num1,int num2){
    int n=2,num=num1,i;
    while(num<num2){
    for(i=2;i<num;i++){
        if(num%i==0){
            num++;
            break;
        }
    }
    if(i==num){
            cout<<num<<endl;
            num++;
        }
    }
}
int main(){
    int num1,num2;
    cout<<"Enter any two number in between you want to find prime number: ";
    cin>>num1>>num2;
    cout<<"prime numbers in between "<<num1<<" and "<<num2<<" are "<<endl;
    prime(num1,num2);
    return 0;
}