#include<stdio.h>
int main()
{
    char str[1000];
    scanf("%[^
]s",str);
    int i,c=0;
    for(i=0;str[i]!=NULL;i++)
    {
        c++;
    }
    for(i=c-1;i>=0;i--)
    {
        printf("%c",str[i]);
    }
}
       