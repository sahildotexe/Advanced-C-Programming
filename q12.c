
#include<stdio.h>
int main(){
    printf("Code by Sahil Kaling - 20BCT0106\n");
    int i, j, k;
    int count = 0;
    for ( i = 1; i <=4; i++)
    {
        for ( j = 0; j < i; j++)
        {
            count++;
            printf("%d ", count);
        }
        printf("\n");
    }

}