#include<stdio.h>
void merge(int a[],int low,int mid,int high)
{
    int i=low,x=low,y=mid+1,b[10];
    while (x<=mid&&y<=high)
    {
        if (a[x]<a[y])
        {
            b[i]=a[x];
            x++;
        }
        else
        {
            b[i]=a[y];
            y++;
        }
    i++;
    }
    while(x<=mid)
    {
        x++;
        
        b[i]=a[x];
        i++;
    }
    while(y<=high)
    {
        y++;
        
        b[i]=a[y];
        i++;
    }
    for (int i = low;i < high;i++)
    {
        a[i]=b[i];
    }
    
}

void mergeSort(int a[],int low, int high)
{
    int mid;
    if (low<high)
    {
        mid=(low+high)/2;
        mergeSort(a,low,mid);
        mergeSort(a,mid+1,high);
        merge(a,low,mid,high);
    }
    
}

int main()
{
     int a[10],n;
     printf("Enter the size:");
     scanf("%d",&n);
     printf("Enter elements:");
     for (int i = 0; i < n; i++)
         scanf("%d",&a[i]);
     mergeSort(a,0,n-1);
     printf("Sorted elements:\n");
     for (int i = 0; i < n; i++)
         printf("%d   ",a[i]);
    return 0;
}