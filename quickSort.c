#include<stdio.h>

int partition(int a[],int low,int high)
{
    int i=low,j=high,k=low,temp;
    while(i<j)
    {
        while (a[i]<=a[k]&&i<=high)
        {
            i++;
        }
        while (a[j]>a[k])
        {
            j--;
        }
        if (i<j)
        {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        }
    }
    temp=a[k];
    a[k]=a[j];
    a[j]=temp;
    return j;
}

void qSort(int a[],int low,int high)
{
    int j;
    if(low<high)
    {
        j=partition(a,low,high);
        qSort(a,low,j-1);
        qSort(a,j+1,high);
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
    qSort(a,0,n-1);
    printf("Sorted elements:\n");
    for (int i = 0; i < n; i++)
        printf("%d  ",a[i]);
}