#include <stdio.h>
#include <stdlib.h>


int findDuplicate(int arr[], int n) {
    int actual_sum = 0;

    for (int i = 0; i < n; i++) {
        actual_sum += arr[i];
    }
    int expected_sum = (n - 1) * n / 2;

    return (int)(actual_sum - expected_sum);
}

int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d",&n);
    int *arr = (int *)malloc(n * sizeof(int));

    printf("Nhap %d phan tu cua mang (gia tri tu 1 den %d): ", n, n - 1);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int duplicate = findDuplicate(arr, n);
    printf("Phan tu trung lap la: %d\n", duplicate);

    free(arr);
    return 0;
}
