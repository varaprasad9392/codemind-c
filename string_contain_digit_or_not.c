#include<stdio.h>
int main()
{
    char str[1000];
    scanf("%s",str);
    int i,c=0,count=0;
    for(i=0;str[i]!=NULL;i++)
        {
            c=c+1;
        }
        int s=0;
        for(i=0;i<c;i++)
        {
           if(str[i]>='0'&&str[i]<='9')
           {
               s++;
           }
        }
        if(s==0)
        {
            printf("Doesn't contain digit");
        }
        else
        {
            printf("Contains %d digit",s);
        }
}
       