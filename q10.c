// Write a C program to read the age of 100 persons and count the number of persons 
// in the age group 50 to 60. Use for and continue statement

#include<stdio.h>
int main(){
    printf("Code by Sahil Kaling - 20BCT0106\n");
    int age, count = 0;
    for(int i = 0; i < 100; i++){
        printf("Enter age: ");
        scanf("%d", &age);
        if(age < 50 || age > 60){
            continue;
        }
        count++;
    }
    printf("Number of persons in age group 50 to 60: %d", count);
    return 0;
}