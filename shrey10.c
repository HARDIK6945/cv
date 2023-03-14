#include<stdio.h>
void insertion_sort(int A[],int n)
{
int k=0,ptr=0,temp=0;
for(k=0;k<n;k++)
{
temp=A[k];
for(ptr=k-1;ptr>=0;ptr--)
if(A[ptr]>temp)
A[ptr+1]=A[ptr];
else
break;
A[ptr+1]=temp;
}
}
void main()
{
int A[10];
int i,n,item;
printf("Enter the size of an array:");
scanf("%d",&n);
printf("The elements in the array are:");
for(i=0;i<n;i++)
{
scanf("%d",&A[i]);
}
insertion_sort(A,n);
printf("The sorted list is:");
for(i=0;i<n;i++)
{
printf("%d\n",A[i]);
}
}

