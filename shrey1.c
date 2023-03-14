#include<stdio.h>
void main()
{
int DATA[5]={5,10,15,20,35};
int k=0,loc=0,max=DATA[0];
while(k<5)
{
if(max<DATA[k])
{
loc=k;
max=DATA[k];
}
k=k+1;
}
printf("Loc=%d,max=%d",loc,max);
}
