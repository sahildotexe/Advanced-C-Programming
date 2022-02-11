// Get a single digit number from the user (0-9) one after another, until the user wishes. Finally display the count of each numbers and display it using switch and goto.

#include<stdio.h>
int main(){
    printf("Code by Sahil Kaling - 20BCT0106\n");
    int numbr,zer=0,one=0,two=0,three=0,four=0,five=0,six=0,seven=0,eight=0,nine=0;
    char choice[2];
    a:
    printf("Enter a single digit number (0-9) : ");
    scanf("%d",&numbr);
    
    switch (numbr)
    {
    case 0:
        zer++;
        break;
    case 1:
        one++;
        break;
    case 2:
        two++;
        break;
    case 3:
        three++;
        break;
    case 4:
        four++;
        break;
    case 5:
        five++;
        break;
    case 6:
        six++;
        break;
    case 7:
        seven++;
        break;
    case 8:
        eight++;
        break;
    case 9:
        nine++;
        break;
    default:
     printf("Invalid Input");
    }

     printf("\nDo you want to continue? (y/n)");
         scanf("%s",choice);
         if((choice[0] !='n')){
            goto a;
    }
    printf("Count: \n");
    printf("0: %d\n1: %d\n2: %d\n3: %d\n4: %d\n5: %d\n6: %d\n7: %d\n8: %d\n9: %d\n",zer,one,two,three,four,five,six,seven,eight,nine);


    
}