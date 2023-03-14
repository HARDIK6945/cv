#include<stdio.h>
int main()
{
int n,i;
printf("Enter any number:");
scanf("%d",&n);
long int fact(int n)
{
if(n>=1)
return n*fact(n-1);
else
return 1;
}
printf("Factorial of %d is:%ld",n,fact(n));
}

