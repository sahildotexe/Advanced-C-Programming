#include <stdio.h>
int main() {
    int num[11], pos[11], neg[11],p=0,n=0;
    printf("Enter 10 numbers: ");
    for(int i = 0; i < 11; i++) {
        scanf("%d", &num[i]);
    }

    for(int i = 0; i < 11; i++) {
        if(num[i] > 0) {
            pos[p] = num[i];
            p++;
        } else {
            neg[n] = num[i];
            n++;
        }
    }

    // sum of positive numbers
    int sum_pos = 0;
    for(int i = 0; i < p; i++) {
        sum_pos += pos[i];
        if(sum_pos > 999) {
            return 0;
        }
    }

    printf("The positive numbers are : ");
    for(int i = 0; i < p; i++) {
        printf("%d ", pos[i]);
    }
    printf("\n");
    printf("Sum of positive numbers: %d\n", sum_pos);
    
    return 0;
}