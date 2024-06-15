#include<iostream>
using namespace std;
int main(){
    int arr1[]={23,26,34,56,67};
    int arr2[]={12,37,49,59,65,76,86};
    int arr3[12];
    int i=0,j=0,k=0,n=5,m=7;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            arr3[k]=arr1[i];
            i++;
            k++;
        }
        else{
            arr3[k]=arr2[j];
            j++;
            k++;
        }
    }
    while(i<n){
        arr3[k]=arr1[i];
        i++;
        k++;
    }
    while(j<m){
        arr3[k]=arr2[j];
        j++;
        k++;
    }
    for(int i=0;i<12;i++){
        cout<<arr3[i]<<" ";
    }
    return 0;
}