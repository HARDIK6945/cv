#include<stdio.h>
#include<string.h>
void main()
{
char T[100]="computer";
char P[100]="Put";
int k=0,l,max,s,r,index;
s=strlen(T);
printf("%d\n",s);
r=strlen(P);
printf("%d\n",r);
max=s-r+1;
printf("max =%d\n",max);
{
while(k<=max)
{
for(l=0;l<r;l++)
{
if(P[l]!=T[k+l-1])
break;
}
if(l==r)
{
index=k;
break;
}
else
k++;
}
if(index!=0)
printf("The value is present at loc %d",index);
else
printf("The value is not present");
}
}


