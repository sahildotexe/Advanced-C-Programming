// Write a program to count the number of vowels in a string using switch-case control 

#include<stdio.h>
#include<string.h>
int main(){
    printf("Code by Sahil Kaling - 20BCT0106\n");
    char str[100];
    int count=0;
    printf("Enter a string: ");
    scanf("%s",str);
    
    for(int i=0; i<strlen(str);i++){
        switch (str[i])
        {
        case 'a':
           count++;
           break;
        
        case 'e':
              count++;
              break;
        
        case 'i':
                count++;
                break;
        
        case 'o':
                count++;
                break;
        
        case 'u':
            count++;
            break;

        default:
            break;
        }
         
    }
    printf("The number of vowels in the string is: %d",count);
    

}