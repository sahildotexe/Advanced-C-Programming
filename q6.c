#include <stdio.h>
int main() {
    printf("Code by Sahil Kaling - 20BCT0106\n");
    int inp;
    int add = 0;
    int t;
    printf("Enter a number: ");
    scanf("%d", &inp);
    t = inp;
    while(t != 0) {
        add += (t%10) * (t%10) * (t%10);
        t /= 10;
    }
    if(add == inp) {
        printf("Armstrong number\n");
    } else {
        printf("Not an Armstrong number\n");
    }
    return 0;

}