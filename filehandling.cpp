#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string s1,s2;
    string s="My name is anthoneye";
    ofstream out("sample.txt");
    out<<s<<endl;
    out<<s;
    ifstream in("sample.txt");
    getline(in,s1);
    getline(in,s1);
    cout << s1;
    return 0;
}