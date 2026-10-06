#include <stdio.h>
void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        printf(" %d ",arr[i]);
    } 
    printf("\n");
}
void insertionSort(int arr[], int n){
    int i,j,key;
    for(i=1;i<n;i++){
        int key = arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;

        }
        arr[j+1]=key;
        printArr(arr,n);
    }
}
int main(){
    int arr[] ={ 101, 23, 57, 13, 25, 121, 87, 36, 13, 204, 111, 89, 59};
    int n= sizeof(arr)/sizeof(arr[0]);
    printf("Mang ban dau:\n");
    printArr(arr,n);
    printf("\n");
    insertionSort(arr,n);
    return 0;
}