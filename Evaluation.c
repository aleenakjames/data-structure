#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define size 100

int array[size], top = -1; 

int isFull(){
if(top == (size - 1)) return 1;
return 0;   
}

int isEmpty(){
if(top == -1) return 1; 
return 0; 
}

void push(int number){
if(isFull()){
   printf("Stack is full.\nProgram terminated!");
   exit(0); 
}
else{
   top++; 
   array[top] = number;     
    }
}

int pop(){
if(isEmpty()){
   printf("Stack is Empty.\nProgram terminated!");
   exit(0);
}
else{
     int popped = array[top];
     top--;
     return popped;
}
}

void EvaPstExp(char PstExp[size]){
    int i, num1, num2, result, number;

for(i=0; PstExp[i] != '\0'; i++){

switch(PstExp[i]){
      case'+':num1 = pop();
              num2 = pop();
              push(num1 + num2);
              break;

      case'-':num1 = pop();
              num2 = pop();
              push(num1 - num2);
              break;

      case'*':num1 = pop();
              num2 = pop();
              push(num1 * num2);
              break;

      case'/':num1 = pop();
              num2 = pop();
              push(num1 / num2);
              break;

      case'^':num1 = pop();
              num2 = pop();
              push(num1 ^ num2);
              break;        

      default:
              printf("Enter the value of %c: ", PstExp[i]);
              scanf("%d",&number);
              push(number);
              break;
             }
}
printf("\nResult: %d\n", array[top]);
}

int main(){
int choice;  
char PstExp[size], option;

do{ 
printf("Press\n1.Evaluation of Postfix Expression\n2.EXIT\nChoice: ");
scanf("%d", &choice);

switch(choice){
  case 1: printf("Enter the postfix expression: ");
          scanf("%s", PstExp);

          EvaPstExp(PstExp); 
          break;

  case 2: printf("Exited!"); 
           exit(0); 
}
printf("\nDo you want to continue? y / n\n");
scanf(" %c", &option);             
  }while(option == 'Y' || option == 'y');
  printf("Exited");
  exit(0);
}