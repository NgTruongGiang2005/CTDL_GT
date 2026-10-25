#include <stdio.h>
#include <stdlib.h>

void sort_012(int arr[], int n){
    int count0 = 0, count1 = 0, count2 = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) count0++;
        else if (arr[i] == 1) count1++;
        else if (arr[i] == 2) count2++;
    }
    int index = 0;
    for (int i = 0; i < count0; i++) arr[index++] = 0;
    for (int i = 0; i < count1; i++) arr[index++] = 1;
    for (int i = 0; i < count2; i++) arr[index++] = 2;
}

int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    printf("Nhap cac phan tu cua mang (chi gom 0, 1, 2): ");

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    } 

    sort_012(arr, n);
    printf("Mang sau khi sap xep: [ ");
    for (int i = 0; i < n; i++) {
        printf("%d%s", arr[i], (i < n - 1 ? ", " : ""));
    }
    printf(" ]\n");

    free(arr);
    return 0;
}