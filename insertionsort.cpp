#include<iostream>
using namespace std;
void insertion(int arr[],int s,int e){
    if(s>e){
        return;
    }
    for(int i=s+1;i<=e;i++){
       if(arr[s]>arr[i]){
        swap(arr[s],arr[i]);
       }
    }
    insertion(arr,s+1,e);
}
int main(){
    int arr[]={56,45,34,78,65,42,12};
    insertion(arr,0,(sizeof(arr)/sizeof(int))-1);
    for(int i=0;i<(sizeof(arr)/sizeof(int));i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}