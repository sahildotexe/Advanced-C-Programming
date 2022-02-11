
#include <stdio.h>
int main(){
    printf("Code by Sahil Kaling - 20BCT0106\n");
    int num,choice;
    int i,flag=0;
    int fact=1;
    printf("Enter the number : ");
    scanf("%d",&num);
    printf("1. odd or even \n2. Prime or not \n3. Factorial of a number \n4. Exit \n");
    printf("Enter your choice : ");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            if(num%2==0)
                printf("%d is even",num);
            else
                printf("%d is odd",num);
            break;
        case 2:
          
            for(i=2;i<num;i++){
                if(num%i==0){
                    flag=1;
                    break;
                }
            }
            if(flag==0)
                printf("%d is prime",num);
            else
                printf("%d is not prime",num);
            break;
        case 3:
            
            for(i=1;i<=num;i++){
                fact=fact*i;
            }
            printf("Factorial of %d is %d",num,fact);
            break;
        case 4:
            printf("Exiting");
            break;
        default:
            printf("Invalid choice");
    }

}