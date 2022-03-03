#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,k,area;
    scanf("%f%f%f",&a,&b,&c);
    k=(a+b+c)/2;
    area=sqrt(k*(k-a)*(k-b)*(k-c));
    printf("%.2f",area);
    return 0;
}