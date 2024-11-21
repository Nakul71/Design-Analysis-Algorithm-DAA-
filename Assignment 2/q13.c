#include <stdio.h>

void findAndSwap(int arr[], int n) {
    int first = __INT_MAX__, second = __INT_MAX__;
    int largest = -__INT_MAX__, secondLargest = -__INT_MAX__;
    int *secondSmallestPtr = NULL, *secondLargestPtr = NULL;

    for (int i = 0; i < n; i++) {
        if (arr[i] < first) {
            second = first;
            first = arr[i];
        } else if (arr[i] < second && arr[i] != first) {
            second = arr[i];
        }

        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] == second)
            secondSmallestPtr = &arr[i];
        if (arr[i] == secondLargest)
            secondLargestPtr = &arr[i];
    }

    if (secondSmallestPtr && secondLargestPtr) {
        int temp = *secondSmallestPtr;
        *secondSmallestPtr = *secondLargestPtr;
        *secondLargestPtr = temp;
    }
}

int main() {
    int arr[] = {10, 15, 20, 30, 25};
    int n = sizeof(arr) / sizeof(arr[0]);

    findAndSwap(arr, n);

    printf("Array after swapping second smallest and second largest:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
