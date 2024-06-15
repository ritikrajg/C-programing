#include<iostream>
#include<fstream>
using namespace std;
//void is_open(string n){
//    cout<<"File '"<<n<<"' opened successfully"<<endl;
//}
//void close(string n){
 //   cout<<"File '"<<n<<"' closed successfully"<<endl;
//}
int main(){
    string n;
    cin>>n;

    ofstream out(n);
    if(out.is_open()){
       cout<<"File '"<<n<<"' opened successfully"<<endl;
    }
    out.close();
    if(!out.is_open()){
       cout<<"File '"<<n<<"' closed successfully"<<endl;
    }
   
    return 0;
}