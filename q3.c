#include <stdio.h>

int main() {
    printf("Code by Sahil Kaling - 20BCT0106\n");
    int p,q,e;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &p, &q, &e);
    if (p>q && p>e) {
        printf("%d is the biggest\n", p);
    } 
    if (q>p && q>e) {
        printf("%d is the biggest\n", q);
    } 
    if (e>p && e>q) {
        printf("%d is the biggest\n", e);
    }
    return 0;

}