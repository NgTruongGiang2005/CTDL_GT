#include <stdio.h>
 
void printArr(int arr[],int n){
    for(int i =0;i<n;i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int partition(int arr[],int left,int right,int n){
    int pivot = arr[left];
    int i = left+1;
    int j = right;
    while(i<=j){
        while(i<=right && arr[i]<= pivot){
            i++;
        }
        while(j>=left && arr[j]> pivot){
            j--;
        }
        if(i<j){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[left];
    arr[left] = arr[j];
    arr[j] = temp;

    printArr(arr,n);
    return j;
}
void quickSort(int arr[], int left, int right, int n){
    if(left<right){
        int pi  = partition(arr,left,right,n);
        quickSort(arr,left,pi-1,n);
        quickSort(arr, pi+1,right,n);
    }
}
int main(){
    int arr[] ={ 101, 23, 57, 13, 25, 121, 87, 36, 13, 204, 111, 89, 59};
    int n= sizeof(arr)/sizeof(arr[0]);
    printArr(arr,n);
    quickSort(arr,0,n-1,n);
    return 0; 
}