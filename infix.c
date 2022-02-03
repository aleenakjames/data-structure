#include <stdio.h>
char stack[10],infix[100],postfix[100];
int top= -1;
void push(char a)
{
  top=top+1;
  stack[top]=a;
}

char pop()
{
return(stack[top--]);
}

int precedence(char ch)
{
  switch(ch)
    {
      case '(': return 1;
      case '+':
      case '-': return 2;
      case '*':
      case '/':
      case '%': return 3;
      case '^': return 4;
      default: return 0;
    }
}

void convert()
{
  char ch;
  int k=0;
  push('\0');
  for (int i=0;infix[i];i++)
  {
   ch = infix[i];
   switch(ch)
    {

     case '(':push(ch);
              break;

     case ')':while((ch = pop()) != '(')
               {
                 postfix[k] =ch;
                 k++;
               }
              break;

     case '+':
     case '-':
     case '/':
     case '*':
     case '%':
     case '^':while(precedence(ch) <= precedence(stack[top]))
               {
                 postfix[k++]=pop();
               }
              push(ch);
              break;

     default: postfix[k++]=ch;
    }
 }
while((postfix[k++] = pop()) != '\0');
}

int main()
{
  printf("Enter the Infix Expression: ");
  gets(infix);
  convert(infix, postfix);
  printf("Postfix Expression:%s\n", postfix);
}