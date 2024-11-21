#include <stdio.h> // Include the standard I/O header

void hollow_square_with_diagonals() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 || j == n || i == j || j == n - i + 1) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
}

int main() { // Proper main function
    printf("Hollow Square with Diagonals:\n");
    hollow_square_with_diagonals();
    return 0;
}

