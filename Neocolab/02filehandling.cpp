#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream file;
    file.open("sample.dat");
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
       cin>>arr[i]; 
       file<<arr[i]<<" ";
    }
    file.close();
    int k=arr[0],j=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>k){
            k=arr[i];
        }
        if(arr[i]<j){
            j=arr[i];
        }
    }
    cout<<k<<" "<<j;
    return 0;
}