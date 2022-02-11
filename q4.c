// Write a c program to check given year is leap year or not using if else

#include <stdio.h>
int main() {
    printf("Code by Sahil Kaling - 20BCT0106\n");
    int yr;
    printf("Enter a year: ");
    scanf("%d", &yr);
    if(yr%400 == 0 || (yr%4 == 0 && yr%100 != 0)) {
        printf("Leap year\n");
    } else {
        printf("Not a leap year\n");
    }
    return 0;
}