#include<iostream>
#include<fstream>
using namespace std;
int main(){
    int n,sum=0,sum1;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    ofstream file;
    file.open("sample.txt");
    file<<sum;
    file.close();
    ifstream file1;
    file1.open("sample.txt");
    file1>>sum1;
    file1.close();
    cout<<sum1;
    return 0;
}