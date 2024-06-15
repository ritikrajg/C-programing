#include<iostream>
using namespace std;
int main(){
   string a;
   getline(cin,a);
   cout<<a<<endl;
   a.push_back('b');
   cout<<a<<endl;
   a.pop_back();
   cout<<a<<endl;
   a.erase(3);
   cout<<a<<endl;
   a.insert(3,"a");
   cout<<a;
    return 0;
}