#include<stdio.h>

void main(){
    for(int i = 0; i>=1; i--){
         for(int j = 0; j<=i; j++){
            printf(" %c ",'A'+ j);
         }
         printf("\n");
    }
}