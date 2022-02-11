// Use the following formula. //e=1+1/1!+1/2!+1/3!+.........+1/n!. using a suitable loop construct.

#include <stdio.h>
int fact(int n)
{
    int f=1;
    for(int i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}
int main (){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    float e=0;
    for(int i=1;i<=num;i++)
    {
        e=e+1/fact(i);
    }
    printf(" Value of e = %.2f",e);

}