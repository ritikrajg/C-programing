#include<iostream>
using namespace std;
int main(){
    int a;
    int sum=0;
    cout<<"enter the number: ";
    cin>>a;
    for(int i=0;i<=a;i++){
        sum=i+sum;
    }
    cout<<"the sum of upto that is "<<sum;
    return 0;
}