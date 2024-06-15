#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"Enter any number: ";
    cin>>n;
    int num=n,lastdigit,arms=0;
    while(n>0){
        lastdigit=n%10;
        arms=arms+pow(lastdigit,3);
        n=n/10;
    }
    if(arms==num){
        cout<<"This is a armstrong number."<<endl;
    }
    else{
        cout<<"This is not a armstrong number."<<endl;
    }
    return 0;
}