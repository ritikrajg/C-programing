#include<iostream>
using namespace std;
int fac(int n){
    int factorial=1;
    for(int i=2;i<=n;i++){
        factorial*=i;
    }
    return factorial;
}
int main(){
    int n;
    cout<<"Enter the pascel structure value: ";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<fac(i)/(fac(i-j)*fac(j));
        }
        cout<<endl;
    }
    return 0;
}