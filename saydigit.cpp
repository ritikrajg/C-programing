#include<iostream>
using namespace std;
void say(int n){
    if(n==0){
      return;
    }
    string s[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    int k=n%10;
    n=n/10;
    say(n);
    cout<<s[k]<<" ";
    return;
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"The value of number: ";
    say(n);
    return 0;
}