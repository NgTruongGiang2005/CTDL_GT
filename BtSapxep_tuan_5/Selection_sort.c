#include <stdio.h>
void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        printf(" %d ",arr[i]);
    } 
    printf("\n");
}
void selectionSort(int arr[], int n){
    int i,j, min;
    for(i=0;i<n;i++){
        min = i;
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
        printArr(arr,n);
    }
}
int main(){
    int arr[] ={ 101, 23, 57, 13, 25, 121, 87, 36, 13, 204, 111, 89, 59};
    int n= sizeof(arr)/sizeof(arr[0]);
    printf("Mang ban dau:\n");
    printArr(arr,n);
    printf("\n");
    selectionSort(arr,n);
    return 0;
}
int main(){
    int arr[] ={ 101, 23, 57, 13, 25, 121, 87, 36, 13, 204, 111, 89, 59};
    int n= sizeof(arr)/sizeof(arr[0]);
    printf("Mang ban dau:\n");
    printArr(arr,n);
    printf("\n");
    selectionSort(arr,n);
    return 0;
}