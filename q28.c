// Write a C program to print all integers that are not divisible by 2 or 3 and lie between 1 and 100. Program should also account /the number of such integers and print the result

#include <stdio.h>
int main() {
    int i,count=0;
    for ( i = 1; i < 101; i++)
    {
        if (i % 2 != 0 || i % 3 != 0)
        {
            printf("%d ", i);
            count++;
        }
    }

    printf("\nTotal number of integers not divisible by 2 or 3 = %d", count);
    

}