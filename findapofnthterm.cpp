#include<iostream>
using namespace std;
int ap(int n){
    return (3*n+7);
}
int main(){
    int n;
    cout<<"Enter the number of term: ";
    cin>>n;
    cout<<"the value of nth term of ap is "<<ap(n);
    return 0;
}