#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int index=0;
    for(i=0;i<n;i++)
    if(arr[i]%2!=0)
    {
       index=i; 
    }
    printf("%d",index);
    
}