#include <stdio.h>

void main(){
    int n=5;
    char a= 'A';
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-i-1; j++) {
            printf(" ");
        }
        for (int k = 0; k < n; k++) {
            printf("%c ", a+k);
        }
        printf("\n");
    }
    
}
