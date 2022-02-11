// Write a C program, for all positive integers i,j,k, and l from 1 through 50, finds and /prints all combinations of i,j,k and l such that i+j+k=l and i < j < k < l.

#include <stdio.h>
int main() {
    int i, j, k, l;
    printf("i j k l\n");
    for (i = 1; i <= 50; i++) {
        for (j = i + 1; j <= 50; j++) {
            for (k = j + 1; k <= 50; k++) {
                for (l = k + 1; l <= 50; l++) {
                    if (i + j + k == l) {

                        printf("%d %d %d %d\n", i, j, k, l);
                    }
                }
            }
        }
    }
    return 0;
}