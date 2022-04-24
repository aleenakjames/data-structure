#include<stdio.h>

void bSearch(int a[],int n)
{
    int first=0,last=n-1,mid,i,key;
    printf("Enter the element to be searched:");
    scanf("%d",&key);
    while(first<=last)
    {
        mid=(first+last)/2;    
            if (a[mid]==key)
            {
                printf("%d found at position %d",key,mid+1);
                break;
            }
            else if (a[mid]>key)
            {
                last=mid-1;
            }
            else
                first=mid+1;     
    }
    if (first>last)
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
    bSearch(a,n);
}