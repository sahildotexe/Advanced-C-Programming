#include <stdio.h>
int main() {
    printf("Code by Sahil Kaling - 20BCT0106\n");
    int p,q;
    printf("Enter the value of p : ");
    scanf("%d",&p);
    printf("Enter the value of q : ");
    scanf("%d",&q);
    printf("Before swapping : p = %d, q = %d\n",p,q);
    p = p + q;
    q = p - q;
    p = p - q;
    printf("After swapping : p = %d, q = %d\n",p,q);

}