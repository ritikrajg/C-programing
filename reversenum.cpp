#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any number: ";
    cin>>n;
    int lastdigit,rev=0;

    while(n!=0){
        lastdigit=n%10;
        rev=rev*10+lastdigit;
        n=n/10;
    }
    n=rev;
    cout<<rev;
    return 0;
}