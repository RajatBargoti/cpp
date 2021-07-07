#include <stdio.h>
#include <stdlib.h>
#define N 5
int queue[N];
int front = -1, rear = -1;
void enqueue(int data)
{
if (front==-1 && rear==-1)
//aloo// 
{
front=rear=0;
queue[rear]=data;
}
else if (((rear+1)%N)==front)
printf("Queue is full");
else
{
rear=rear+1;
queue[rear]=data;
}
}
int dequeue()
{
int data;
if (front==-1 && rear==-1)
printf("Queue is empty\n");
else if (front==rear)
{
printf("%d is dequeued\n",queue[front]);
front=rear=-1;
}
else
{
printf("%d is dequeued\n",queue[front]);
front=(front+1)%N;
}
}
void display()
{
if (front==-1 && rear==-1)
printf("Queue is empty \n");
else
{
for (int i=front; i<=rear; i++)
printf("%d ",queue[i]);
}
printf("\n");
}
int main()
{
int op; int data;
while (1)
{
printf("\nChoose operation: 1.Enqueue 2.Dequeue 3.Display 4.Exit\n");
scanf("%d",&op);
switch(op)
{
case 1: printf("Data to be inserted: "); scanf("%d",&data); enqueue(data); break;
case 2: dequeue(); break;
case 3: display(); break;
case 4: exit(0); break;
}
}
}