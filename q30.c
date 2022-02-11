// The equation x2+y2 = r2 represents a circle with center at origin and radius r. Write a C program that reads r from the keyboard and prints the number of points with integer coordinated that lie within the circle

#include <stdio.h>
int main() {
    int r, x, y, count = 0;
    printf("Enter the radius of the circle: ");
    scanf("%d", &r);
    printf("The points are : ");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < r; j++) {
            x = i;
            y = j;
            if(x*x + y*y <= r*r) {
                printf("(%d, %d) ", x, y);
                count++;
            }
        }
    }
    printf("\nNumber of points within the circle: %d\n", count);
   
}