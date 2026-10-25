#include <stdio.h>
void binarySort(int arr[], int n){
    int zero_count =0;
    for(int i= 0;i<n;i++){
        if(arr[i]==0){
            zero_count++;
        }
    }
    for(int i=0;i<zero_count;i++){
        arr[i]=0;
    }
    for(int i= zero_count;i<n;i++){
        arr[i]=1;
    }
}
int main(){
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d",&n);
    printf("Nhap cac phan tu cua mang (chi chua 0 va 1): ");
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    binarySort(arr,n);
    printf("Mang sau khi sap xep: ");
    printf("[");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }printf("]\n");
    return 0;
}