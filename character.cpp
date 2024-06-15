#include<iostream>
#include<vector>
using namespace std;
int count(char a[]){
    int c=0;
    for(int i=0;a[i]!='\0';i++){
        c++;
    }
    return c;
}
void reverse(char c[],int n){
    int i=0,j=n-1;
    while(i<=j){
    swap(c[i],c[j]);
    i++;
    j--;
   }
}
int main(){
    char name[20];
    cout<<"Enter your name: ";
    cin>>name;
    cout<<"your name is "<<name<<endl;
    cout<<"Size of name is "<<count(name)<<endl;
    reverse(name,count(name));
    cout<<name;
    return 0;
}