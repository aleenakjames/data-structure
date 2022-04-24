#include<stdio.h>

void iSort(int a[],int n)
{
    int temp,j;
    for (int i = 0; i < n; i++)
    {
        temp=a[i];
        j=i-1;
        while (j>=0&&a[j]>temp)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
    
}

void main()
{
    int a[10],n;
    printf("Enter the size:");
    scanf("%d",&n);
    printf("Enter elements:");
    for (int i = 0; i < n; i++)
        scanf("%d",&a[i]);
    iSort(a,n);
    printf("Sorted elements:\n");
    for (int i = 0; i < n; i++)
        printf("%d   ",a[i]);
}