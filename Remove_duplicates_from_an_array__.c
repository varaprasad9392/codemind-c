#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,j,football,cr7;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        football=cr7;
       for(j=0;j<n;j++)
       {
           if(a[i]==a[j] && i!=j)
           {
               a[j]=7;
           }
       }
       if(a[i]!=7)
       {
           printf("%d ",a[i]);
       }
    }
    
}