#include<iostream>
using namespace std;

class Solution {
public:
    int count(char s[]){
        int i=0;
        while(s[i]!='\0'){
            i++;
        }
        //cout<<i<<endl;
        return i;
    }
    bool rev(char s[],int n){
        int i=0,j=n-1;
        cout<<s;
        cout<<j<<endl;
        while(i<=j){
            if(s[i]!=s[j]){
                cout<<i<<" "<<j<<endl;
                return false;
                
            }
            i++;
            j--;
        }
        //cout<<i<<" "<<j<<endl;
        return true;
    }
    bool convert(string s){
        char a[s.size()];
        int j=0;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]>='a' && s[i]<='z'){
                a[j]=s[i];
                j++;
            }
            else if(s[i]>='A' && s[i]<='Z'){
                char b=s[i]+32;
                a[j]=b;
                j++;
            }
            else if(s[i]>='0' && s[i]<='9'){
                a[j]=s[i];
                j++;
            }
        }
        a[j]='\0';
        cout<<j<<endl;
        cout<<a<<endl;
        return rev(a,count(a));
    }
    bool isPalindrome(string s) {
        //cout<<s;
       // cout<<convert(s);
        return convert(s);
    }
};
int main(){
    string m;
    getline(cin,m);
    Solution a;
    bool b=a.isPalindrome(m);
    cout<<b;
    return 0;
}