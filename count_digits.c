#include<stdio.h>
int digits(int n)
{
    int count=0;
    if(n==0)
    {
        count=1;
    }
    else
    {
      while(n!=0)
      {
        n=n/10;
        count++;
      }
    }
    return count;
}
int main()
{
    int n,count=0,sum=0;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
         printf("%d ",digits(arr[i]));
    }
}