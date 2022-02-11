// The cost of a Scooter is Rs25000/-. Three optional accessories are supplied at different costs as follows. Mirror:Rs.85 Crash Guard:Rs225 Side box: Rs 300 If A,B, and C represents the three accessories, the total cost of the scooter is 25000+A*85+B*225+C*300 where A,B and C are either 0 or 1 depending upon whether the option is required or not. Write a C program to print the total cost as per the illustration given below.

#include<stdio.h>
int main() {
    int n;
    printf("Enter number of scooters: ");
    scanf("%d", &n);
    int a[n], b[n], c[n], total[n];
    for (int i = 0; i < n; i++) {
        printf("For scooter %d\n", i + 1);
        printf("Do you require a mirror? (1/0): ");
        scanf("%d", &a[i]);
        printf("Do you require a crash guard? (1/0): ");
        scanf("%d", &b[i]);
        printf("Do you require a side box? (1/0): ");
        scanf("%d", &c[i]);
        total[i] = 25000 + a[i] * 85 + b[i] * 225 + c[i] * 300;
    }

    printf("Base Prince\t Mirror\t Crash Guard\t Side Box\t Total\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t\t %d\t\t %d\t\t %d\t\t %d\n", 25000, a[i], b[i], c[i], total[i]);
    }

    return 0;
}