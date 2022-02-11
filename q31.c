// Write a program to read 3 digit numbers and print the digits in words using switch case

#include<stdio.h>
int main(){
    int n,num=0,rem;
    printf("Enter a number: ");
    scanf("%d", &n);
    int count = 0;
    

     while(n != 0)
    {
        num = (num * 10) + (n % 10);
        n /= 10;
        count++;
    }    

    for (int i = 0; i < count; i++)
    {
        rem = num % 10;
        switch (rem)
        {
        case 0:
            printf("Zero ");
            break;
        case 1:
            printf("One ");
            break;
        case 2:
            printf("Two ");
            break;
        case 3:
            printf("Three ");
            break;
        case 4:
            printf("Four ");
            break;
        case 5:
            printf("Five ");
            break;
        case 6:
            printf("Six ");
            break;
        case 7:
            printf("Seven ");
            break;
        case 8:
            printf("Eight ");
            break;
        case 9:
            printf("Nine ");
            break;
    }
    num /= 10;

  }
  return 0;
}