#include <stdio.h>

void insertElement(int arr[], int *n, int pos, int element) {
    for (int i = *n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = element;
    (*n)++;
}

void deleteElement(int arr[], int *n, int pos) {
    for (int i = pos; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*n)--;
}

int main() {
    int n, i, pos, element;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[100]; 
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position to insert (0-based index) and the element: ");
    scanf("%d %d", &pos, &element);
    insertElement(arr, &n, pos, element);

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Enter the position to delete (0-based index): ");
    scanf("%d", &pos);
    deleteElement(arr, &n, pos);

    printf("Array after deletion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
