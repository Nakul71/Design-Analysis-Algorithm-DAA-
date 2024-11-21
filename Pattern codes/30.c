#include <stdio.h>

void zig_zag_pattern() {
    int n = 5; 

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == j || i + j == n + 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main() {
    printf("Zig-Zag Pattern:\n");
    zig_zag_pattern();
    return 0;
}
