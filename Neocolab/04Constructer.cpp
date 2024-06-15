#include<iostream>
using namespace std;
class z{
    public:
    z(){
        cout<<"Constructer called"<<endl;
    }
    ~z(){
        cout<<"Destructer called"<<endl;
    }
};
int main(){
    int n;
    cin>>n;
    z a[n];
    
    return 0;
}