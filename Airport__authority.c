#include<stdio.h>
int main()
{
    int n,k,sum1=0,sum2=0,sum=0;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(arr[i]<=k)
        {
            sum1=sum1+1;
        }
        else if(arr[i]>k)
        {
            sum2+=2;
        }
    }
    sum=sum1+sum2;
    printf("%d",sum);
}