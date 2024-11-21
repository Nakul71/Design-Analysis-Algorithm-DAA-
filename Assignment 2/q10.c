#include <stdio.h>

void rearrange(int arr[], int n) {
    int temp[n];
    int i = 0, j = n - 1, k = 0;

    while (i <= j) {
        if (k % 2 == 0)
            temp[k++] = arr[j--];
        else
            temp[k++] = arr[i++];
    }

    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    rearrange(arr, n);

    printf("Rearranged array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
