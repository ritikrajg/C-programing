#include<iostream>
using namespace std;
class Person{
    private:
    string name;
    int age;
    public:
    
    
    Person(string n,int a){
        name=n;
        age=a;
        cout<<"Default constructor is called"<<endl;
    }
    void display(){
        cout<<"Name of current object: "<<name<<endl;
        cout<<"Age of current object: "<<age;
    }
};
int main(){
    string n;
    int a;
    getline(cin,n);
    cin>>a;
    Person p(n,a);
    p.display();
    return 0;
}