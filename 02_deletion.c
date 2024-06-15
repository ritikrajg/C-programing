#include<stdio.h>
void display(int arr[],int n){
     for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
     }
     printf("\n");
}
int inddelate(int arr[],int size,int index){
     for(int i=index;i<size;i++){
     arr[i]=arr[i+1];
     }
}
int main(){
    int arr[100]={34,65,45,98,56};
    int size=5,capacity=100;
    display(arr,size);
    inddelate(arr,size,2);
    size-=1;
    display(arr,size);
}