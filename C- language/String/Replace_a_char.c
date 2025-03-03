#include<stdio.h>

void replace(char *c)
{
    while(*c!='\0')
    {
        if(*c=='e'|| *c=='o')
        {
            *c='A';
            
        }
        c++;
    }
}

int main()
{
    char str[]="Hello World";
    replace(str);
    printf("%s",str);
    return 0;
}