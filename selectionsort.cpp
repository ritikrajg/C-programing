#include<iostream>
using namespace std;
void selection(int arr[],int s,int e){
    if(s==e){
        return;
    }
    for(int i=s+1;i<=e;i++){
        if(arr[s]>arr[i]){
            swap(arr[s],arr[i]);
        }
    }
    selection(arr,s+1,e);
}
int main(){
    int arr[]={23,54,22,59,21,18};
    int size=sizeof(arr)/sizeof(int);
    selection(arr,0,size-1);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}