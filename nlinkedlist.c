#include<stdio.h>
struct 
{
    int data;
    struct node *link;
}*head=NULL,*temp,*x;


void ins_beg()
{
    int num;
    temp=(struct node*)malloc(sizeof(struct node));
    
    
}

void ins_end()
{

}

void ins_pos()
{

}

void del_beg()
{

}
void del_end()
{

}
void del_pos()
{

}
void display()
{

}

void main()
{
    int c;
    printf("Enter your choice: ");
    scanf("%d",&c);
    switch (c)
    {
    case 1:
        ins_beg();
        break;
    case 2:
        ins_end();
        break;
    case 3:
        ins_pos();
        break;
    case 4:
        del_beg();
        break;
    case 5:
        del_end();
        break;
    case 6:
        del_pos();
        break;
    case 7:
        display();
        break;
    
    default:
        printf("Invalid Input!!");
        break;
    }
} 