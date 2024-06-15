#include<iostream>
#include<fstream>
using namespace std;
int main(){
    string name,na;
    getline(cin,name);
    ofstream infile;
    infile.open("gfg.data");
   // infile((char*)&name,sizeof(name));
    infile<<name;
    infile.close();
    ifstream file;
    file.open("gfg.data");
    getline(file,na);
    cout<<na;
    file.close();
    return 0;
}