#include<iostream>
using namespace std;
class MyString{
    string st1;
    public:
    MyString(string s1){
        st1=s1;
    }
    MyString operator+(const MyString& op){
        MyString temp=st1+op.st1;
        return temp;
    }
    void operator*(int n){
        for(int i=0;i<n;i++){
            cout<<st1;
        }
        cout<<endl;
    }
    void display(){
        cout<<st1<<endl;
    }
};
int main(){
    string s1,s2;
    int n;
    cin>>s1;
    cin>>s2;
    cin>>n;
    MyString a(s1);
    MyString b(s2);
    MyString c=a+b;
    c.display();
    a*(n);
    b*(n);
    return 0;
}