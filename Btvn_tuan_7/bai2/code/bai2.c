#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
void findSubarray_0(int arr[],int n){
    bool found = false;
    for(int i=0;i<n;i++){
        int sum = 0;
        for(int j=i;j<n;j++){
            sum += arr[j];
            if(sum == 0){
                found = true;
            }
        }
    }
    if(!found){
        printf("No subarray with zero_sum found \n");
    }else{
        printf("Subarray with zero_sum exists \n");
    }
}
int main(){
    int n ;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d",&n);
    
    int *arr = (int *)malloc(n * sizeof(int));
    printf("Nhap cac phan tu cua mang: ");
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    
    findSubarray_0(arr,n);
    free(arr);
    return 0;

}