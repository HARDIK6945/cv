#include<stdio.h>
int max=5;
void insert(int queue[],int *rear,int item)
{
if(*rear<=max)
{
*rear=*rear+1;
queue[*rear]=item;
}
else
{
printf("queue is full/OVERFLOW");
}
}
void delete (int queue[],int *front,int *item,int rear)
{
if(*front==rear)
{
printf("queue is empty");
}
else
{
*front=*front+1;
*item=queue[*front];
}
}
void main()
{
int queue[max];
int front=-1;
int rear=-1;
int n=0,item;
while(n<max)
{
printf("Insert the elements");
scanf("%d",&item);
insert(queue,&rear,item);
n++;
}
n=0;
while(n<max)
{
printf("\n delete the element");
delete(queue,&front,&item,rear);
printf("%d",item);
n++;
}
}


