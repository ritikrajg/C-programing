#include<iostream>
#include<fstream>
using namespace std;
int main(){
    string c;
    ifstream in("file.txt");
    cout<<in.tellg();
    in.seekg(5,ios::beg);
    while(!in.eof()){
        getline(in,c);
        cout<<c;
    }
    in.close();
    return 0;
}