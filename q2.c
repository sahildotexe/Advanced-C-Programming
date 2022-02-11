#include <stdio.h>

int main() {
    printf("Code by Sahil Kaling - 20BCT0106\n");
    char inp;
    printf("Enter a character: ");
    scanf("%c", &inp);
    if (inp == 'a' || inp == 'e' || inp == 'i' || inp == 'o' || inp == 'u') {
        printf("Vowel\n");
    } 
    if (inp != 'a' && inp != 'e' && inp != 'i' && inp != 'o' && inp != 'u') {
        printf("Consonant\n");
    }
    return 0;
}