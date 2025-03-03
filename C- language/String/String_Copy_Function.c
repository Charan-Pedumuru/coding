#include<stdio.h>
#include<string.h>

int main()
{
    char s1[50],s2[50];

    strcpy(s1,"abcdefghijklmnopqrstuvwxyz");
    strncpy(s2,s1,5);

    printf("%s",s2);
}