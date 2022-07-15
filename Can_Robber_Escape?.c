#include<stdio.h>
int main()
{
int n,i;
int c=0,k=0; 
scanf("%d",&n); 
int a[n]; 
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]<n)
{
c=1;
}
else
{
	c=0;
	break;
}
}
if(c==1)
printf("YES");
else
printf("NO");
}
