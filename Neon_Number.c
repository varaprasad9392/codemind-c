#include<stdio.h>

int main()
{
 int n,m,sq,sum=0;
 scanf("%d",&n);
sq=n*n;
while(sq!=0)
{
m=sq%10;
sq=sq/10;
sum=sum+m;
}
if(n==sum)
{
 printf("Neon Number");
}
else
{
printf("Not Neon Number");
}

}