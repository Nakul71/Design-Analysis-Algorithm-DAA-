#include <stdio.h>

void hourglass_pattern() {
    int n = 5; 
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            printf(" "); 
        }
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    for (int i = 2; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf(" "); 
        }
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

int main() {
    printf("Hourglass Pattern:\n");
    hourglass_pattern();
    return 0;
}
