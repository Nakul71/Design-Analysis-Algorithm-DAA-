#include<stdio.h>

void main(){
    int num =1;
    for(int i = 4; i>=1; i--){
         for(int j = 1; j<=i; j++){
            printf(" %d ", num);
            num++;
         }
         printf("\n");
    }
}