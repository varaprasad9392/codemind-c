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
int main()
{
    int n,i,j,count=0;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        for(j=1;j<n;j++)
        {
            if(count>0)
            {
                break;
            }
            if(prime(i) && prime(j))
            {
                if(i*j==n && i!=j)
                {
                    printf("%d %d",i,j);
                    count++;
                }
            }
        }
    }
    if(count==0)
    {
        printf("-1");
    }
}