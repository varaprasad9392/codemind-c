
#include<stdio.h>
int main()
{
    int a[3],b[3],i,j;
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<3;j++)
    {
        scanf("%d",&b[j]);
    }
    int cr7=0,m10=0;
    for(i=0;i<3;i++)
    {
        if(a[i]>b[i])
        {
            cr7++;
        }
        else if(b[i]>a[i])
        {
            m10++;
        }
    }
    printf("%d %d",cr7,m10);
}
