// Write a C program to calculate and print the sum of first 5 terms of following: /1+ 
// (1+2) + (1+2+3) + (1+2+3+4) +

#include<stdio.h>
int main(){
    printf("Code by Sahil Kaling - 20BCT0106\n");
    int i,j, sum = 0;
    for(i = 1; i <= 5; i++){
        for(j = 1; j <= i; j++){
            sum = sum + j;
        }
    }
    printf("Sum of first 5 terms: %d", sum);
    return 0;
}