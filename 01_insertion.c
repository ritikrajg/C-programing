#include<stdio.h>
void display(int arr[],int n){
     for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
     }
     printf("\n");
}
int indinsert(int arr[],int size,int capacity,int index,int value){
    if(size>=capacity){
        return -1;
    }
    for(int i=size;i>=index;i--){
        arr[size]=arr[size-1];
    }
    arr[index]=value;
    return 1;
}

int main(){
    int arr[100]={34,65,45,98,56};
    int size=5,capacity=100;
    display(arr,size);
    indinsert(arr,size,capacity,2,40);
    size+=1;
    display(arr,size);
}