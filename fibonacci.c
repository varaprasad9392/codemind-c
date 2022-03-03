#include<stdio.h>
int main()
{
   int a=0,b=1,num,c,count;
   scanf("%d",&num);
   printf("%d %d ",a,b);
   count=2;
   while(count<num)
   {
       c=a+b;
       a=b;
       b=c;
       printf("%d ",c);
       count++;
   }
}