#include<iostream>
#include<fstream>
using namespace std;
int main(){
    string line;
    ifstream file("file.txt");
    if(file.is_open()){
        while(getline(file,line)){
            cout<<line<<endl;
        
        }
        file.close();
    }
    else{
        cout<<"Failed to open the file"<<endl;
    }
    //file.tellp();
    return 0;
}