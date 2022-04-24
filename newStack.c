#include<stdio.h>
#include<stdlib.h>

int STACK[10];
int MAX_SIZE=10,top;

void push()
{
    int key;
    if (top==MAX_SIZE-1)
    {
        printf("Stack overflow");
    }
    else
    {
        printf("Enter the element to push: ");
        scanf("%d",&key);
        top++;
        STACK[top]=key;
    }
    
}

void pop()
{
    int ele;
    if (top==-1)
    {
        printf("Stack underflow");
    }
    else
    ele=STACK[top];
    printf("The deleted element is %d\n",STACK[top]);
    top--;
}
void display()
{
    if (top==-1)
    {
        printf("Stack underflow");
    }
    else
    {
        for (int i = top; i >= 0; i--)
        {
            printf("%d\n",STACK[i]);
        }    
    }
}

void main()
{
    int c;
    top=-1;
    do
    {
    printf("Enter your choice: ");
    scanf("%d",&c);
    switch (c)
    {
    case 1:
        push();
        break;
    case 2:
        pop();
        break;
    case 3:
        display();
        break;
    case 4:
        exit(0);
    default:printf("Invalid input");
        break;
    }
    } while (c!=4);
}