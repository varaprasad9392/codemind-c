#include<stdio.h>
int main()
{
    char str[1000];
    scanf("%[^
]s",str);
    int i,c=0;
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]==' ')
        {
            c++;
        }
    }
        printf("%d",c+1);
}
       