#include<stdio.h>

void bSort(int a[],int n)
{
    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
            
        }
        
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
    bSort(a,n);
    printf("Sorted elements:\n");
    for (int i = 0; i < n; i++)
        printf("%d   ",a[i]);
}