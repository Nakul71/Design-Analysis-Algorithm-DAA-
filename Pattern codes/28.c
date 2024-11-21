#include <stdio.h>

void diamond_pattern() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf(" "); 
        }
        for (int j = 1; j <= i; j++) {
            printf("* "); 
        }
        printf("\n");
    }
    for (int i = n - 1; i >= 1; i--) {
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
    printf("Diamond Pattern:\n");
    diamond_pattern();
    return 0;
}
