#include <stdio.h>
int items[100], front = -1, rear = -1,SIZE=10;
void enQueue() {
    int value;
    printf("Enter the element to store\n");
    scanf("%d",&value);
  if (rear == SIZE - 1)
    printf("\nQueue is Full!!\n");
  else {
    if (front == -1)
      front = 0;
    rear++;
    items[rear] = value;
    printf("\nInserted -> %d\n", value);
  }}
void deQueue() {
  if (front == -1)
    printf("\nQueue is Empty!!\n");
  else {
    printf("\nDeleted : %d\n", items[front]);
    front++;
    if (front > rear)
      front = rear = -1;
  }}
void display() {
  if (rear == -1)
    printf("\nQueue is Empty!!!");
  else {
    int i;
    printf("\nQueue elements are:\n");
    for (i = front; i <= rear; i++)
      printf("%d  ", items[i]);
  }
  printf("\n");
}
int main(){
    int s=0;
  while(1) {
     printf("1:enQueue\n2:deQueue\n3:display\n4:exit\n");
     scanf("%d",&s);
     switch(s)
      {
        case 1:enQueue();
               break;
        case 2:deQueue();
               break;
        case 3:display();
               break;
      }}
   return 0;
}