//Write a C program to find out the sum of series 1^2 + 2^2 + …. + n^2

#include<stdio.h>
#include <math.h>

int main(){
    printf("Code by Sahil Kaling - 20BCT0106\n");
    int n, sum = 0, i;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        sum = sum + pow(i, 2);
    }
    printf("Sum of series: %d", sum);
    return 0;
}
