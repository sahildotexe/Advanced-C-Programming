// Write a c program to check given number is Palindrome number or not using while loops

#include <stdio.h>
int main(){
    printf("Code by Sahil Kaling - 20BCT0106\n");
    int num;
    int rev = 0;
    int temp;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while(temp != 0){
        rev = rev * 10;
        rev = rev + temp%10;
        temp = temp/10;
    }
    if(num == rev){
        printf("Palindrome number\n");
    } else {
        printf("Not a palindrome number\n");
    }
    return 0;

}