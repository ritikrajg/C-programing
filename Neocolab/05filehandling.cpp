#include<iostream>
#include<fstream>
using namespace std;
int main(){
    string n,m;
    cin>>n;
    if(n=="String"){
    ofstream fout;
    fout.open("sample.txt",ios::app);
    fout<<"Time is a Great Teacher BUT Unfortunately it Kills All its Pupils.";
    cout<<"Data appended successfully"<<endl;
    fout.close();
   }
    ifstream fin;
    fin.open("sample.txt");
    getline(fin,m);
    cout<<m;
    fin.close();
    return 0;
}