#include<stdio.h>
#include<ctype.h>

void print(char *c)
{
    int t=0;
    char lower;
    while(*c!='\0')
    {
        lower=tolower(*c);
        if(lower=='a'|| lower=='e' || lower=='i' || lower=='o'|| lower=='u')
        {
            t++;
        }
        c++;
    }
    printf("%d",t);
}

int main()
{
    char *C = "Hello";
    print(C);
    return 0;
}