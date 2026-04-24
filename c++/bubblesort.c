#include<stdio.h>
void bubble_sort();
int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubble_sort(arr, n);
    printf("Sorted array:\n ");
    for (int i = n-1; i >= 0; i--) {printf("%d ", arr[i]);
    }
    return 0;
    }
    void bubble_sort(int arr[], int n) {
        int i, j;
        for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
        if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
        }
        }
        }
        }