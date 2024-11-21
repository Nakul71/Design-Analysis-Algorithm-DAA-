#include<stdio.h>

void main(){
    int n = 5;
    int num = 1;
    for(int i = 1; i<=n; i++){
         for(int j = 1; j<=n; j++){
            printf(" %d", num++);
         }
         printf("\n");
    }
} 