#include<iostream>
#include<fstream>
using namespace std;
class student{
    string name;
    int roll;
    char sec;
    public:
    void getdata(){
        cout<<"Enter the name: ";
        getline(cin,name);
        cout<<"Enter the roll: ";
        cin>>roll;
        cout<<"Enter the section: ";
        cin>>sec;
    }
};
int main(){
student p;
p.getdata();
ofstream p1("binary.dat");
p1.write((char*)&p,sizeof(p));
p1.close();
ifstream r("binary.dat");
r.read((char*)&p,sizeof(p));
r.close();

return 0;
}