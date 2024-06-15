#include<iostream>
using namespace std;
int main(){
    int arr[]={12,45,56,23,41};
    int size=(sizeof(arr)/sizeof(int));
    cout<<"Array before the reverse:";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<size;i++){
        if(i>(size/2)){
            break;
        }
        int temp=arr[i];
        arr[i]=arr[size-1-i];
        arr[size-1-i]=temp;
    }
    cout<<"Array after the reverse:";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}