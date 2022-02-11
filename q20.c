#include <stdio.h>
int main() {
    printf("Code by Sahil Kaling - 20BCT0106\n");
    int y;
    float x,i;
    printf("x\t y\t i\n");
    for ( y = 1; y <= 6; y++)
    {
        for (x = 5.5; x <= 12.5;x+=0.5)
        {
            i = 2 + y + 0.5*x;
            printf("%0.2f\t  %d\t  %0.2f\n", x, y, i);
        }
    }
    
}