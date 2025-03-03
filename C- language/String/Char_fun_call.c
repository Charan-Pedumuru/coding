#include<stdio.h>

void print(char *c)
{
    while(*c!='\0')
    {
        printf("%c",*c);
        c++;
    }
}

void print1(char *c)
{
    while(*(c+1)!='\0')
    {
        printf("%c",*c);
        c++;
    }
}
int main()
{
    char c[20]="Hello, World!";

    print(c);
    print1(c);
    return 0;
}