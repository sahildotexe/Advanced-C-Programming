//  Write a menu driven program to perform mathematical functions like, 1.sin(x), 
// 2.cos(x), 3.tan(x), 4.log(x), 5.log10(x), 6.sqrt(x). Using switch case. Read x from 
// the user. Continue the menu until the user says no using go to.

#include<stdio.h>
#include <math.h>
int main(){
   printf("Code by Sahil Kaling - 20BCT0106\n");
   int x,flag=0;
   char choice[2];
      a:
         printf("Enter a number: ");
         scanf("%d",&x);
         printf("Enter your choice: \n1.sin(x)\n2.cos(x)\n3.tan(x)\n4.log(x)\n5.log10(x)\n6.sqrt(x)\n");
         scanf("%s",choice);
         switch(choice[0]){
              case '1':
                printf("sin(%d) = %f",x,sin(x));
                break;
              case '2':
                printf("cos(%d) = %f",x,cos(x));
                break;
              case '3':
                printf("tan(%d) = %f",x,tan(x));
                break;
              case '4':
                printf("log(%d) = %f",x,log(x));
                break;
              case '5':
                printf("log10(%d) = %f",x,log10(x));
                break;
              case '6':
                printf("sqrt(%d) = %f",x,sqrt(x));
                break;
              default:
                printf("Invalid choice");
         }
         printf("\nDo you want to continue?");
         scanf("%s",choice);
         if((choice[0]!='n' &&  choice[1]!='o')){
            goto a;
         }
  
    return 0;
   
}