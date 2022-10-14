#include<stdio.h>
int main()
{
    int n,i,j,m,c=0,d=0,k;
    scanf("%d%d",&n,&k);
    int a[100];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    m=0;
    for(i=0;i<n;i++)
    {  c=0;
        for(j=i;j<n;j++)
        {
            c+=a[j];
            if(c==k)
            {
                m++;
            }
        }
    }
    printf("%d",m);
}