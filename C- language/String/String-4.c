#include<stdio.h>

int main()
{
    char line[30];

    scanf("%[^\n]",line); //To include spaces
    printf("%s",line);
}