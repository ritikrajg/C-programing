#include<iostream>
#include<fstream>
using namespace std;
int main(){
    string st;

    cout<<"Enter name of employee: ";
    getline(cin,st);

    ofstream out("01sample.txt");
    out<<st;
    long pos=out.tellp();
    out.seekp(2,ios::beg);
    out<<"Too";
    out.close();
    string st1;

    ifstream in("01sample.txt");
    getline(in,st1);
    cout<<st1;
    in.close();
    return 0;
}