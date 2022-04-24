#include<stdio.h>

void sSort(int a[],int n)
{
    int temp;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
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
    sSort(a,n);
    printf("Sorted elements:\n");
    for (int i = 0; i < n; i++)
        printf("%d   ",a[i]);
}