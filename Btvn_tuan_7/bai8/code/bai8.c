#include <stdio.h>
 
void moveZero(int arr[], int n){
    int a = 0;
    for(int i=0;i<n;i++){
        if(arr[i] != 0){
            arr[a++] = arr[i];
        }
    }
    while(a<n){
        arr[a++] = 0;
    }

}
int main(){
    int n; 
    printf("Nhap so phan tu cua mang: ");
    scanf("%d",&n);
    int arr[n];
    printf("Nhap cac phan tu cua mang: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    moveZero(arr,n);
    printf("Mang sau khi sap xep:");
    printf("[");
    for(int i=0;i<n;i++){
        printf("%d%s",arr[i],(i < n-1 ?", " : ""));
    }printf("]");
    return 0; 
}