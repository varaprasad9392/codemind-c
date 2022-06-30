#include<stdio.h>
int main()
{
    int n,count=0,sum=0,j=0,i;
    scanf("%d",&n);
    int arr[n],arr1[100];
    for(i=0;i<n;i++)
    {
       scanf("%d",&arr[i]);
    }
    for(i=1;i<n-1;i++)
    {
        if((arr[i-1]%2!=0 && arr[i+1]%2==0) || (arr[i-1]%2==0 && arr[i+1]%2!=0))
        {
            count++;
        }
    }
    for(i=n-2;i<n;i++)
    {
        arr1[j++]=arr[i];
        sum++;
    }
    for(i=0;i<2;i++)
    {
        arr1[j++]=arr[i];
        sum++;
    }
    for(j=1;j<sum-1;j++)
    {
        if((arr1[j-1]%2!=0 && arr1[j+1]%2==0) || (arr1[j-1]%2==0 && arr1[j+1]%2!=0))
        {
            count++;
        }
    }
    printf("%d",count);
}