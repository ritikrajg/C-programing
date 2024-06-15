#include<iostream>
#include<fstream>
using namespace std;
int main(){
    string st,st1;
    ifstream in;
    in.open("01sample.txt");
    while(in.eof()){
    getline(in,st);
    cout<<st;
    }
    return 0;
}