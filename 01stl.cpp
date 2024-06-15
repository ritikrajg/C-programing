#include<iostream>
#include<array>
#include<set>
using namespace std;
int main(){
    array<int,5> arr={5,7,8,9,2};
    for(auto it=arr.begin();it!=arr.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    for(auto it=arr.rbegin();it!=arr.rend();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    for(auto it=arr.end()-1;it>=arr.begin();it--){
        cout<<*it<<" ";
    }
    cout<<endl;
    for(auto it:arr){
        cout<<it<<" ";
    }
    cout<<endl;
    array<string,5> s={"hbhbjj","nnnnjnn","hbhbhb","dxdrxdx","tfdddf"};
    for(auto it=s.begin();it!=s.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    for(auto it:s){
        cout<<it<<" ";
    }
    set<int> s1;
    cout<<endl<<s1.size();
    s1.insert(2);
    s1.insert(5);
    s1.insert(1);
    s1.insert(4);
    cout<<endl<<s1.size()<<endl;
    for(auto it:s1){
        cout<<it<<" ";
    }
    return 0;
}