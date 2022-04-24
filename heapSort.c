#include<stdio.h>

void heapify(int a[],int n, int i)
{
    int l,r,largest,temp;
    l=2*i;
    r=(2*i)+1;
    largest=i;
    if (l<n&&a[l]>a[largest])
    {
        largest=l;
    }
    if (r<n&&a[r]>a[largest])
    {
        largest=r;
    }
    if(largest!=i)
    {
        temp=a[i];
        a[i]=a[largest];
        a[largest]=temp;
    }   
}

void buildMaxHeap(int a[],int n)
{
    for (int i = (n/2)-1; i>0; i--)
    {
        heapify(a,n,i);
    }
    
}

void hSort(int a[],int n)
{
    int temp;
    buildMaxHeap(a,n);
    for (int i = n-1; i < 0; i--)
    {
        temp=a[0];
        a[0]=a[i];
        a[i]=temp;
        heapify(a,n,0);
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
    hSort(a,n);
    printf("Sorted elements:\n");
    for (int i = 0; i < n; i++)
        printf("%d  ",a[i]);
}