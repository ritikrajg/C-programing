#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;
    if (a>b){
      if(a>c){
        cout<<"this is greater number: "<<a;
      }
      else{
        cout<<"this is greater number: "<<c;
      }
    }
    else{
        if(b>c){
            cout<<"this is greater number: "<<b;
        }
        else{
            cout<<"this is greater number: "<<c;
        }
    }
    return 0;
}