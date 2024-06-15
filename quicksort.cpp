#include<iostream>
using namespace std;
/*int partation(int arr[],int s,int e){

    int pivot=s;
    int low=s;
    int high=e;
    int k=e;
    for(int i=high;i>low;i--){
        if(arr[i]>arr[pivot]){
            swap(arr[i],arr[k]);
            k--;
        }
    }
    swap(arr[low],arr[k]);
    return k;
}*/
int partation(int arr[],int s,int e){
    int low=s;
    int high=e;
    int pivot=s;
    int k=e;
    for(int i=high;i>low;i--){
        if(arr[i]>arr[pivot]){
            swap(arr[i],arr[k]);
            k--;
        }
    }
    swap(arr[low],arr[k]);
    return k;
}
void quicksort(int arr[],int s,int e){
    if(s<e){
        int p=partation(arr,s,e);
        quicksort(arr,s,p-1);
        quicksort(arr,p+1,e);
    }
}
int main(){
    int arr[]={10,9,8,7,6,5,4,3,3,2,1};
    int n=sizeof(arr)/sizeof(int);
    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}