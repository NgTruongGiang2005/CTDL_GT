#include <stdio.h>
#include <stdlib.h>

void findMaxProduct(int arr[], int n) {
    if (n < 2) {
        printf("Mang phai co it nhat 2 phan tu!\n");
        return;
    }
    int max1, max2, min1, min2;

    if (arr[0] > arr[1]) {
        max1 = arr[0]; max2 = arr[1];
        min1 = arr[1]; min2 = arr[0];
    } else {
        max1 = arr[1]; max2 = arr[0];
        min1 = arr[0]; min2 = arr[1];
    }
    for (int i = 2; i < n; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2) {
            max2 = arr[i];
        }

        if (arr[i] < min1) {
            min2 = min1;
            min1 = arr[i];
        } else if (arr[i] < min2) {
            min2 = arr[i];
        }
    }
    long long p1 = (long long)max1 * max2;
    long long p2 = (long long)min1 * min2;

    if (p1 >= p2) {
        printf("The maximum product is %lld\n", p1);
    } else {
        printf("The maximum product is %lld\n", p2);
    }
}

int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int arr[n]; 
    printf("Nhap cac phan tu cua mang: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    findMaxProduct(arr, n);
    return 0;
}