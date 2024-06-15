#include<iostream>
#include<fstream>
using namespace std;
int main(){
    int n1,n2,sum;
    cin>>n1>>n2;
    sum=n1+n2;
    ofstream file;
    file.open("sum.txt");
    if(file.is_open()){
        file<<sum;
        cout<<"Sum successfully written to the file 'sum.txt'."<<endl;
        cout<<"Sum: "<<sum;
    }
    return 0;
}