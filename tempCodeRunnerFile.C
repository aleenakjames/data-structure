#include<stdio.h>
int main()
{int max,op,top=-1,item;
printf("enter the maximum size of the stack: ");
scanf("%d",&max);
int a[max-1];
while (op!=4)
{printf("Select the operation that you want to perform:\n 1.Insertion\n 2.Deletion\n 3.Display 4.Exit  : ");
scanf("%d",&op);
    switch (op)
    {
         case 1:
                if (top<max-1){
                top++;
                printf("Enter the element you want to insert:");
                 scanf("%d",&a[top]);}
                else{ printf("Stack Overflow\n");
                break;

         case 2:
                if(top==-1)
                printf("Stack Underflow\n");
                else{
                printf("Select the item you want to delete:");
                scanf("%d",&item);
                item = a[top];
                top--;
                }
                break;
        case 3: for(int i=0;i<=top;i++)
                 printf("%d\n",a[i]);
                break;
    }
}}}