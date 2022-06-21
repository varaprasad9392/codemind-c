#include<stdio.h>
int fact(int n)
{
    int f=1,i;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}
int main()
{
   int n,temp,m,sum=0;
   scanf("%d",&n);
   m=n;
   while(n>0)
   {
       temp=n%10;
       sum=sum+fact(temp);
       n=n/10;
   }
   if(sum==m)
   {
       printf("The number %d is a strong number",sum);
   }
   else
   {
       printf("The number %d is not a strong number",m);
   }
}