#include<stdio.h>
int main()
{
int n,j=0;
scanf("%d",&n);
while (1)
{
if(n==1)
{
j=1; break;
}
if (n%2==0)
{
n=n/2;
}
else if(n%3==0)
{
n=n/3;
}
else if (n%5==0)
{
n=n/5;
}
else
{
break;
}
}
if(j==1)
{
    printf("Ugly Number");
}
else
{
printf("Not Ugly Number");
}
}