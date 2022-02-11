// Write a C Program to read student’s grade from keyboard from 1 to 5) and prints 
// it’s description.1.Fail 2.Bad 3.Good 4.VeryGood 5.Excellent ,default: false grade

#include<stdio.h>
int main(){
    printf("Code by Sahil Kaling - 20BCT0106\n");
    int gra;
    printf("Enter your grade: ");
    scanf("%d",&gra);
    switch(gra){
        case 1:
            printf("Fail");
            break;
        case 2:
            printf("Bad");
            break;
        case 3:
            printf("Good");
            break;
        case 4:
            printf("Very Good");
            break;
        case 5:
            printf("Excellent");
            break;
        default:
            printf("False grade");
    }
}