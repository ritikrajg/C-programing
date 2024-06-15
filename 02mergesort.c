#include<stdio.h>
void printarr(int a[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}
void mergesort(int a[],int low,int mid,int high){
    int i=low,j=mid+1,k=0;
    int b[high+1];
    while(i<=mid & j<=high){
       if(a[i]<a[j]){
        b[k]=a[i];
        i++; k++;
       }
       else{
        b[k]=a[j];
        k++; j++;
       }
    }
    while(i<=mid){
        b[k]=a[i];
        k++; i++;
    }
    while(j<=high){
        b[k]=a[j];
        k++; j++;
    }
    for(int i=0;i<=high;i++){
        a[i]=b[i];
    }
}
int main(){
    int a[]={1,2,3,45,78,89,99};
    printarr(a,7);
    mergesort(a,0,2,6);
    printarr(a,7);
    return 0;
}