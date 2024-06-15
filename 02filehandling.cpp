#include<iostream>
#include<fstream>
using namespace std;
int main(){
    string st ="Harry bhai";
    string st1;
    ofstream out("sample.txt");
    out<<st;
    ifstream in("01sample.txt");
    getline(in,st1);
    cout<<st1;
    return 0;
}