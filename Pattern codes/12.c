#include<stdio.h>

void main(){
    int num =1;
    for(int i = 1; i<=6; i++){
         for(int j = 1; j<=i; j++){
            printf(" %d ", num);
            num+=1;
         }
         printf("\n");
    }
    for(int i = 5; i>=1; i--){
         for(int j = 1; j<=i; j++){
            printf(" %d ", num);
            num-=1;
         }
         printf("\n");
    }
}