#include<stdio.h>
#include<string.h>

int main()
{
    char str[]="hello world";

    char *p;

    p=str;
    printf("First character is %c\n",*p);

    p=p+1;
    printf("Second character is %c\n",*p);

    p=str;

    for(int i=0;i<strlen(str);i++)
    {
        printf("%c\n",*p);
        p++;
    }
}