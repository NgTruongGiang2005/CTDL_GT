#include <stdio.h>
#include <stdlib.h>

void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low ; j <= high-1 ; j++) {
        if (arr[j] < pivot) {
            swap(&arr[i], &arr[j]);
            i++;
        }
    }
    swap(&arr[i+1], &arr[high]);
    return i + 1;
}
void quickSort(int arr[],int low, int high){
    if(low<high){
        int pivot = partition(arr,low,high);
        quickSort(arr,low,pivot -1);
        quickSort(arr,pivot+1,high);
    }
}
void findPair(int arr[], int n , int target){
    quickSort(arr,0,n-1);
    int low = 0;
    int high = n-1;
    int found = 0;
    while(low<high){
        int sum = arr[low] + arr[high];
        if(sum == target){
            printf("Pair found: (%d, %d)\n " , arr[low],arr[high]);
            found = 1;
            low++;
            high--;

        }else if(sum < target){
            low++;
        }else{
            high--;
        }
    }
if(!found){
    printf("Pair not found\n");
}
}
int main(){
    int n , target;
    printf("nhap so phan tu cua mang: ");
    scanf("%d",&n);
    int *arr = (int*)malloc(n*sizeof(int));
    printf("nhap cac phan tu cua mang: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("nhap gia tri target: ");
    scanf("%d",&target);
    printf("ket qua bai toan la: \n");
    findPair(arr,n,target);
    free(arr);
    return 0; 
    
}