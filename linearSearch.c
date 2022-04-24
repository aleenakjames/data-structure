#include<stdio.h>
void lSearch(int a[],int n)
{
    int element,i;
    printf("Enter the element to be searched: ");
    scanf("%d",&element);
    for ( i = 0; i < n; i++)
    {
        if(a[i]==element)
        {
            printf("%d found at %d",element,i+1);
            break;
        }
    }
    if(i>=n)
    {
        printf("Element not found!!");  
    }
}

void main()
{
    int a[10],n,i;
    printf("Enter the size:");
    scanf("%d",&n);
    printf("Enter elements:");
    for (int i = 0; i < n; i++)
         scanf("%d",&a[i]);
    lSearch(a,n);
}