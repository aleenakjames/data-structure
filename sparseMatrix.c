#include<stdio.h>
struct sparseMatrix
{
    int row;
    int col;
    int value;
}s[50];


void main()
{
    int k=0,r,c,m[10][10],i,j;
    printf("Enter the row : ");
    scanf("%d",&r);
    printf("Enter the col : ");
    scanf("%d",&c);
    printf("Enter the elements:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d",&m[i][j]);
        }
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (m[i][j]!=0)
            {
                s[k].row=i;
                s[k].col=j;
                s[k].value=m[i][j];
                printf("%d  %d  %d\n",s[k].row,s[k].col,s[k].value);
                k++;
            }   
        }
    } 
}