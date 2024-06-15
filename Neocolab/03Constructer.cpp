#include<iostream>
using namespace std;
class z{
    public:
    z(){
        cout<<"Constructor called"<<endl;
    }
    ~z(){
        cout<<"Destructor called"<<endl;
    }
};
int main(){
    int n;
    cin>>n;

    z a[n];
    
    return 0;
}