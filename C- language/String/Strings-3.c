#include<stdio.h>
#include<ctype.h>

int main()
{
    char v1='D',v2='2',v3='m';

    if(isupper(v1))
    printf("%c is uppercase",v1);

    else if(islower(v3))
    printf("%c is lowercase",v1);

    else if(isalpha(v1))
    printf("%c is alphabet",v1);

    else if(isdigit(v2))
    printf("%c is a digit",v1);

    else if(isspace(v1))
    printf("%c is a space",v1);

    else
    printf("%c is not uppercase",v1);
    
}