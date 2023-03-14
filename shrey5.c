#include<stdio.h>
void main()
{
int start,ptr,item;
int info[100],link[100];
start=3;
info[0]=20;
info[1]=10;
info[2]=40;
info[3]=30;
info[4]=50;
link[0]=3;
link[1]=0;
link[2]=4;
link[3]=2;
link[4]=-1;

ptr=start;
printf("Traversing operation\n");
printf("Information \t  link \t")
while(ptr!=-1)
{
printf("%d\t %d\n",info[ptr],link[ptr]);
ptr=link[ptr];
}
printf("Enter the value of item:");
scanf("%d",&item);
ptr=start;
while(ptr!=-1 && item!=info[ptr])
{
ptr=link[ptr];
}
if(item==info[ptr])
printf("Item is found");
else
printf("Item is not found");
}


