#include <stdio.h>

int countNonZero(int rows, int cols, int matrix[rows][cols]) {
    int count = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] != 0)
                count++;
        }
    }
    return count;
}

int main() {
    int rows = 3, cols = 3;
    int matrix[3][3] = {{1, 0, 3}, {0, 0, 5}, {7, 8, 0}};

    printf("Total number of nonzero elements: %d\n", countNonZero(rows, cols, matrix));

    return 0;
}
