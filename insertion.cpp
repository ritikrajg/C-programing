#include<iostream>
using namespace std;
int main(){
    int arr[]={9,8,7,6,5,4,3,2,1};
    
    for(int i=1;i<9;i++){
        int k=arr[i];
        int j=i-1;
        for(;j>=0;j--){
            if(arr[j]>k){
                arr[j+1]=arr[j];
            }
            else{
                
                break;
            }
        }
        arr[j+1]=k;
    }
    for(int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}