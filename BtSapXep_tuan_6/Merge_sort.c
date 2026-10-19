#include <stdio.h>
 
void printArr(int arr[],int n){
    for(int i =0;i<n;i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void mergeArray(int arr[], int m, int n, int p, int size) {
    int i = m, j = n + 1;
    while (i < j && j <= p) {
        if (arr[i] <= arr[j]) {
            i++;
        } else {
            int temp = arr[j];
            for (int k = j - 1; k >= i; k--) {
                arr[k + 1] = arr[k];
            }
            arr[i] = temp;
            i++;
            j++;
        }
    }
    printArr(arr, size);
}
void splitMerge(int arr[], int left, int right, int size) {
    if (left >= right) return;
    int m = (left + right) / 2;
    splitMerge(arr, left, m, size);
    splitMerge(arr, m + 1, right, size);
    mergeArray(arr, left, m, right, size);
}

int main() {
    int arr[] = {101, 23, 57, 13, 25, 121, 87, 36, 13, 204, 111, 89, 59};
    int n = sizeof(arr) / sizeof(arr[0]);

    printArr(arr, n);

    splitMerge(arr, 0, n - 1, n);

    return 0;
}