#include<iostream>
using namespace std;
void reverse(string &s,int n){
    if(n<(s.size())/2){
        return;
    }
    swap(s[s.size()-n],s[n-1]);
    reverse(s,n-1);
}
int main(){
    string s="roman";
    reverse(s,s.size());
    cout<<s;
    return 0;
}