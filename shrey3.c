#include<stdio.h>
void main()
{
int n,i,data[100],BEG,END,item,mid;
printf("Enter the size of an array:");
scanf("%d",&n);
printf("The elements in the array are:");
for(i=0;i<n;i++)
{
scanf("%d",&data[i]);
}
printf("Enter item value:");
scanf("%d",&item);
BEG=0;
END=n-1;
mid=(BEG+END)/2;
while(BEG<=END && data[mid]!=item)
{
if(item<data[mid])
{
END=mid-1;
}
else
{
BEG=mid+1;
}
mid=(BEG+END)/2;
}

if(data[mid]==item)
printf("Loc of item is=%d\n",mid);
else
printf("Loc is not present");
}
