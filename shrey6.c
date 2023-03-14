#include<stdio.h>
int max=5;
void push(int stack[],int *top,int item)
{
if(*top<max)
{
*top=*top+1;
stack[*top]=item;
}
else
{
printf("Stack is ful\n");
}
}
void pop (int stack[],int *top,int *item)
{
if(*top>=0)
{
*item=stack[*top];
*top=*top-1;
}
else
{
printf("Stack is empty\n");
}
}
void main()
{
int stacks[max];
int top=-1;
int n=0,item;
while(n<max)
{
printf("Push the elements");
scanf("%d",&item);
push(stacks,&top,item);
n++;
}
n=0;
while(n<=max)
{
printf("\n pop the element");
pop(stacks,&top,&item);
printf("%d",item);
n++;
}
}

