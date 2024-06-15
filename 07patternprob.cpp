#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    int k=0,l=n*2-1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n*2;j++){
           if(j<=k || j>=l){
            cout<<"*";
           }
           else{
            cout<<" ";
           }
        }
        cout<<endl;
        k++,l--;
    }
    int m=n-1,o=n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n*2;j++){
            if(j<=m || j>=o){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
        m--,o++;
    }
    return 0;
}