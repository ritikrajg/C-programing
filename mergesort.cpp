#include<iostream>
using namespace std;
void merge(int arr[],int s,int mid,int e){
    int n1[mid-s+1];
    int n2[e-mid];
    int i,j,k;
    for(int i=0;i<=mid;i++){
        n1[i]=arr[i];
    }
    for(int j=0;j<e-mid;j++){
        n2[j]=arr[mid+1+j];
    }
    i=0;
    j=0;
    k=s;
    while(i<=mid-s && j<e-mid){
        if(n1[i]>n2[j]){
           arr[k]=n2[j];
           j++;
        }
        else{
            arr[k]=n1[i];
            i++;
        }
        k++;
    }
    while(i<=mid-s){
        arr[k]=n1[i];
        k++;
        i++;
    }
    while(j<e-mid){
        arr[k]=n2[j];
        k++;
        j++;
    }
}
void mergesort(int arr[],int s,int e){
    int mid=s+(e-s)/2;
    if(s==e){
        return;
    }
    
    mergesort(arr,s,mid);
    mergesort(arr,mid+1,e);
    merge(arr,s,mid,e);
}
int main(){
    int arr[]={32,22,12,56,88,65,44};
    mergesort(arr,0,6);
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
/*
#include<iostream>
using namespace std;

void merge(int arr[], int s, int mid, int e) {
    int n1[mid - s + 1];
    int n2[e - mid];
    int i, j, k;

    // Copy data to temporary arrays n1[] and n2[]
    for (i = 0; i <= mid - s; i++) {
        n1[i] = arr[s + i];
    }
    for (j = 0; j < e - mid; j++) {
        n2[j] = arr[mid + 1 + j];
    }

    // Merge the two arrays back into arr[l..r]
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = s; // Initial index of merged subarray

    while (i <= mid - s && j < e - mid) {
        if (n1[i] <= n2[j]) {
            arr[k] = n1[i];
            i++;
        } else {
            arr[k] = n2[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of n1[], if there are any
    while (i <= mid - s) {
        arr[k] = n1[i];
        i++;
        k++;
    }

    // Copy the remaining elements of n2[], if there are any
    while (j < e - mid) {
        arr[k] = n2[j];
        j++;
        k++;
    }
}

void mergesort(int arr[], int s, int e) {
    if (s < e) {
        int mid = s + (e - s) / 2;
        mergesort(arr, s, mid);
        mergesort(arr, mid + 1, e);
        merge(arr, s, mid, e);
    }
}

int main() {
    int arr[] = {32, 22, 12, 56, 88, 65, 44};
    int n = sizeof(arr) / sizeof(arr[0]);

    mergesort(arr, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}*/
