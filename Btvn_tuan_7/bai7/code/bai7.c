#include <stdio.h>
#include <stdlib.h>

void sortArray(int arr[], int n) {
    int x = -1, y = -1;

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            if (x == -1) {
                x = i;        
                y = i + 1;    
            } else {
                y = i + 1;   
            }
        }
    }

    if (x != -1 && y != -1) {
        int temp = arr[x];
        arr[x] = arr[y];
        arr[y] = temp;
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
    sortArray(arr, n);
    printf("Mang sau khi sap xep: [ ");
    for (int i = 0; i < n; i++) {
        printf("%d%s", arr[i], (i < n - 1 ? ", " : ""));
    }
    printf(" ]\n");

    return 0;
}