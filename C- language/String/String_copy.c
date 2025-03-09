#include<stdio.h>
#include<string.h>

int main()
{
    int i,j;
    char str[50]="Hello";
    char str1[]=" Worlds";

    //for(i=0;str[i]!='\0';i++);
    i=strlen(str);

    for(j=0;str[j]!='\0';j++,i++)
    {
        str[i]=str1[j];
    }
    str[i]='\0';

    printf("%s",str);

}