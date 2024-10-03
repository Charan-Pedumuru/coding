#include<stdio.h>
#include<string.h>

int main()
{
    char s1[30],c1,c2;

    gets(s1);

    c1=getchar();
    getchar();
    c2=getchar();

    int i;

    for(i=0;s1[i];i++)
    {
        if(c1==s1[i])
        {
            s1[i]=c2;
        }
    }

    printf("%s",s1);
}