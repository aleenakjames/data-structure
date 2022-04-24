#include<stdio.h>
char Stack[100];
int top=-1;
void push(char ele)
{
    top++;
    Stack[top]=ele;
}
char pop()
{
    return Stack[top];
    top--;
}

int preceedence(char ele)
{
    switch (ele)
    {
    case '(':
        return 1;
    case '+':
    case '-':
        return 2;   
        break;
    case '*':
    case '/':
        return 3;
        break;
    case '^':
        return 4;
        break;
    default:
        return 0;
        break;
    }

}

void convert(char infix[],char postfix[])
{
    int j=0;
    char ch;
    push('\0');
    for(int i=0;infix[i];i++)
    {
        ch=infix[i];
        switch (ch)
        {
        case '(':
            push(ch);
            break;
        case '+':
        case '-':
        case '*':
        case '/':
        case '^':
            while (preceedence(ch)<=preceedence(Stack[top]))
            {  
                postfix[j++]=pop();
            }
                push(ch);
            break;
        case ')':
            while ((ch=pop())!='(')
            {
                postfix[j++]=ch;
            }
            break;
        default:
            postfix[j++]=ch;
        }
    }
    while((postfix[j++] = pop()) != '\0');
}

void main()
{
    char infix[100],postfix[100];
    printf("Enter infix: ");
    gets(infix);
    convert(infix,postfix);
    printf("Postfix is: %s",postfix);
}