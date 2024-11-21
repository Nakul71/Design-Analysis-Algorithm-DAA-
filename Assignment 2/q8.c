#include <stdio.h>

void findLargestThree(int arr[], int n) {
    if (n < 3) {
        printf("Array must have at least three elements.\n");
        return;
    }

    int first = -__INT_MAX__, second = -__INT_MAX__, third = -__INT_MAX__;
    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            third = second;
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            third = second;
            second = arr[i];
        } else if (arr[i] > third && arr[i] != second && arr[i] != first) {
            third = arr[i];
        }
    }

    printf("The largest three distinct elements are: %d, %d, %d\n", first, second, third);
}

int main() {
    int arr[] = {10, 4, 3, 50, 23, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    findLargestThree(arr, n);
    return 0;
}
