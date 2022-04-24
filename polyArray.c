#include<stdio.h>
struct polyArray
{
    int coeff;
    int expo;
}p[10];

void readPoly(int n)
{
    for (int i = 0; i <= n; i++)
    {
        printf("Enter the coeff: ");
        scanf("%d",&p[i].coeff);
        printf("Enter the expo: ");
        scanf("%d",&p[i].expo);
    }
    
}

void displayPoly(int n)
{
    printf("The polynomial is: ");
    for (int i = 0; i <= n; i++)
    {
        if (i<n)
            printf("%dx^%d + ",p[i].coeff,p[i].expo);
        else
            printf("%dx^%d",p[i].coeff,p[i].expo);
    }
    
}

void main()
{
    int n;
    printf("Enter the degree of polynomial: ");
    scanf("%d",&n);
    readPoly(n);
    displayPoly(n);
}