#include<stdio.h>
#include<string.h>

int main()
{
    char s1[30],s2[30];

    gets(s1);
    gets(s2);

    int i,j;
    i=strlen(s1);

    for(j=0;s2[j]!='\0';i++,j++)
    {
        s1[i]=s2[j];
    }
    s1[i]='\0';

    printf("%s",s1);

}