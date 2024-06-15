#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any number: ";
    cin>>n;
    int k=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(k==1){
                cout<<k<<" ";
                k=0;
            }
            else{
                cout<<k<<" ";
                k=1;
            }
        }
        cout<<endl;
    }
    return 0;
}