#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    long int a[n],i,sum=0;
        for(i=0;i<n;i++)
        {
            scanf("%ld",&a[i]);
            sum=sum+a[i];
        }
    printf("%ld",sum);
    return 0;
}