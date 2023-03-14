#include<stdio.h>
void main()
{
int DATA[100],i,n,temp,ptr,k;
printf("Enter the size of an array\n");
scanf("%d",&n);
printf("Enter the elements in unsorted way\n");
for(i=0;i<n;i++)
{
scanf("%d",&DATA[i]);
}
for(k=1;k<=n-1;k++)
{
for(ptr=0;ptr<=n-k-1;ptr++)
{
if(DATA[ptr]>DATA[ptr+1])
{
temp=DATA[ptr];
DATA[ptr]=DATA[ptr+1];
DATA[ptr+1]=temp;
}
}
}
printf("Sorted array\n");
for(i=0;i<n;i++)
{
printf("%d\n",DATA[i]);
}
}

