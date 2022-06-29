#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],x;
    scanf("%[^
]s",str);
    x=strlen(str);
    printf("%d",x);
}