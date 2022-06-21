#include<stdio.h>
int prime(int n)
{
    int i,count=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int mega(int n)
{
    int k,j=0,temp,b=0;
    k=n;
    if(prime(k))
    {
        while(k>0)
        {
          temp=k%10;
          if(prime(temp))
          {
            j++;
          }
           k=k/10;
         }
    }
    while(n>0)
    {
        n=n/10;
        b++;
    }
    if(j==b)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    if(mega(n))
    {
        printf("Mega Prime");
    }
    else
    {
        printf("Not Mega Prime");
    }
}