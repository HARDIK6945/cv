#include <stdio.h>
void main()
{
 int start,root,top=0,ptr;
 char info[10];
 int left[10];
 int right[10];
 int stack=[10];
 start=0;
 info[0]='A';left[0]=1;right[0]=2;
 info[1]='B';left[1]=3;right[1]=4;
 info[2]='C';left[2]=5;right[2]=6;
 info[3]='D';left[3]=-1;right[3]=-1;
 info[4]='E';left[4]=-1;right[4]=-1;
 info[5]='F';left[5]=-1;right[5]=-1;
 info[6]='G';left[6]=-1;right[6]=-1;
 
 root=start;
 ptr=root;
 stack[0]=-1;
 while(ptr!=-1)
  {
   printf("%c",info[ptr]);
 
   if(right[ptr]!=-1)
    {
     top=top+1;
     stack[top]=right[ptr];
    }  
   if(left[ptr]!=-1)
    {
     ptr=left[ptr];
    }
   else
    {
     ptr=stack[top];
     top=top-1;
    }
  }
  printf("end");
 }