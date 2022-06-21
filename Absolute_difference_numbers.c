#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int count(int n)
{
    int coun=0;
    while(n>0)
    {
        n=n/10;
        coun++;
    }
    return coun;
}
int main()
{
    int n,m,x,y,z,f,k,a;
    scanf("%d%d",&n,&m);
    x=pow(10,m);
    y=n%x;
    f=count(n)-m;
    z=pow(10,f);
    k=n/z;
    a=abs(y-k);
    printf("%d",a);
    
}