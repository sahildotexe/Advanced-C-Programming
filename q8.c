// Write a C program to convert a binary number to decimal number using while loops.

#include<stdio.h>
int main(){
    printf("Code by Sahil Kaling - 20BCT0106\n");
    int binnum, decnum = 0, rem, i = 1;
    printf("Enter a binary number: ");
    scanf("%d", &binnum);
    while(binnum != 0){
        rem = binnum%10;
        decnum = decnum + rem*i;
        i = i*2;
        binnum = binnum/10;
    }
    printf("Decimal number: %d", decnum);
    return 0;
}