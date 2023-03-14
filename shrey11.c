#include<stdio.h>
void selection_sort(int A[],int n)
{
int temp=0,loc=0,k,j,item,min;
for(k=0;k<n;k++)
{
min=A[k];
loc=k;
for(j=k+1;j<n;j++)
{
if(min>A[j])
{
min=A[j];
loc=j;
}
}
temp=A[k];
A[k]=A[loc];
A[loc]=temp;
}
}
int main()
{
int A[10],i,n;
printf("Enter the size of an array:");
scanf("%d",&n);
printf("The elements in the array are:");
for(i=0;i<n;i++)
{
scanf("%d",&A[i]);
}
selection_sort(A,n);
printf("The sorted list is:");
for(i=0;i<n;i++)
{
printf("%d\n",A[i]);
}
}



