#include<stdio.h>

void main(){
    for(int i = 1; i<=5; i++){
         for(int j = 1; j<=i; j++){
          int sum = i+j;
          if(sum%2==0){
            printf(" 1 ");
          }
          else{
            printf(" 0 ");
          }
         }
         printf("\n");
    }
}