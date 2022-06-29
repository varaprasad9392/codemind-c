#include<stdio.h>
int sum_digits(int n)
{
    int temp,count=0;
    while(n>0)
    {
        temp=n%10;
        count=count+temp;
        n=n/10;
    }
    return count;
}
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
         sum=sum+sum_digits(arr[i]);
    }
    printf("%d",sum);
}