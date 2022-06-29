#include<stdio.h>
int main()
{
    char str[100],len=0,i;
    scanf("%s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        len++;
    }
    printf("%d",len);
}