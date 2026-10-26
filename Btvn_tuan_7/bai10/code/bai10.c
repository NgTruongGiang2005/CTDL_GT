#include <stdio.h>

void findMaxLengthSubarray(int arr[], int n, int target) {
    int max_length = 0;
    int max_start = -1;
    int max_end = -1;

    for (int i = 0; i < n; i++) {
        int sum = 0;

        for (int j = i; j < n; j++) {
            sum += arr[j];
            if (sum == target) {
                int length = j - i + 1;
                if (length > max_length) {
                    max_length = length;
                    max_start = i;
                    max_end = j;
                }
            }
        }
    }

    if (max_length > 0) {
        printf("The longest subarray is [ ");
        for (int k = max_start; k <= max_end; k++) {
            printf("%d%s", arr[k], (k < max_end ? ", " : ""));
        }
        printf(" ] having length %d\n", max_length);
    } else {
        printf("No subarray with the given sum exists\n");
    }
}

int main() {
    int n, target;

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Nhap cac phan tu cua mang: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Nhap gia tri target: ");
    scanf("%d", &target);

    printf("\nKet qua:\n");
    findMaxLengthSubarray(arr, n, target);

   
    return 0;
}