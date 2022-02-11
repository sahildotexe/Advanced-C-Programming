
#include <stdio.h>
int fact(int n)
{
    int i,fact=1;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}

int main() {
    printf("Code by Sahil Kaling - 20BCT0106\n");
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    int i;
    float sum;
    for(i=1;i<=num;i++)
    {
        sum= sum + (float) fact(i)/ ( (float) fact(i+1));
    }
    printf("Sum = %f",sum);

}