#include<iostream>
#include<vector>
using namespace std;
bool present(int arr[],int n,int k){
    int i=0,j=n-1;
    while(i<j){
        if(arr[i]+arr[j]==k){
            return true;
        }
        else if(arr[i]+arr[j]>k){
            j--;
        }
        else if(arr[i]+arr[j]<k){
            i++;
        }
    }
    return false;
}
int main(){
    int arr[]={10, 20, 35, 50, 75, 80};
    cout<<present(arr,6,71);
}