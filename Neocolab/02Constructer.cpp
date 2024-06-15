#include<iostream>
using namespace std;
class person{
   // string name;
    public:
    person(string n){
       //name=n;
       cout<<"Welcome "<<n<<endl;
       cout<<"Hello "<<n;
    }

};
int main(){
    string name;
    getline(cin,name);
    person p(name);
    return 0;
}