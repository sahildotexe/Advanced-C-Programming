#include <stdio.h>
int main() {
    int c = 123;
    for (int i = 97; i < 123; i++)
    {
        c--;
        if(i%9  == 7 && i > 97)
            printf("\n");
        printf("%c%c ", i,c);

    }
    
}