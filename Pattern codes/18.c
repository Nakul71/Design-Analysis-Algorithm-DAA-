#include<stdio.h>

void main(){
    int n = 5;
    char a= 'A';
    for(int i = 0; i<=n; i++){
         for(int j = 0; j<=i; j++){
            printf(" %c ", a++);
            
         }
         printf("\n");
    }
}