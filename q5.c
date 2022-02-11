#include <stdio.h>
int main() {

    printf("Code by Sahil Kaling - 20BCT0106\n");
    int rn;
    printf("Enter a Richter number: ");
    scanf("%d", &rn);
    if (rn < 5) {
        printf("Little or no damage\n");
    } else if (rn >= 5 && rn < 5.5) {
        printf("Some damage\n");
    } else if (rn >= 5.5 && rn < 6.5) {
        printf("Serious damage\n");
    } else if (rn >= 6.5 && rn < 7.5) {
        printf("Disaster\n");
    } else {
        printf("Higher Catastrophe\n");
    }
    return 0;
}