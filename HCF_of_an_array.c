#include<stdio.h>
int main()
{
    int n,i,j,h;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    h=a[0];
    j=1;
    while(j<n)
    {
        if(a[j]%h==0)
        {
            j++;
        }
        else
        {
            h=a[j]%h;
        }
    }
    printf("%d",h);
}