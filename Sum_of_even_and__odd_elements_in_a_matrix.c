#include<stdio.h>
int main()
{
    int n,m,sum=0,sum1=0;
    scanf("%d%d",&n,&m);
    int arr[n][m],i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(arr[i][j]%2==0)
            {
                sum=sum+arr[i][j];
            }
            else
            {
                sum1=sum1+arr[i][j];
            }
        }
    }
    printf("%d %d",sum,sum1);
    
}