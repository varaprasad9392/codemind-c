#include<stdio.h>
int rev(int a)
{
 int b,rev=0;
 scanf("%d",&b);
 while(a>0)
 {
   b=a%10;
   rev=rev*10+b;
   a=a/10;
 }
 return rev;
}
int main()
{
int x,y,i;
scanf("%d%d",&x,&y);
for(i=x;i<=y;i++)
{
    if(i==rev(i))
    {
        printf("%d ",i);
    }
}
}

