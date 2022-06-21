#include<stdio.h>
int palindrome(int n)
{
    int temp,k,rev=0;
    k=n;
    while(n>0)
    {
        temp=n%10;
        rev=rev*10+temp;
        n=n/10;
    }
    if(k==rev)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n,i=1,count=0,k;
    scanf("%d",&n);
    while(n>0)
    {
        if(palindrome(n+i) && palindrome(n-i))
        {
            printf("%d %d",n-i,n+i);
            break;
        }
        else if(palindrome(n+i))
        {
            printf("%d",n+i);
            break;
        }
        else if(palindrome(n-i))
        {
            printf("%d",n-i);
            break;
        }
        i++;
    }
}