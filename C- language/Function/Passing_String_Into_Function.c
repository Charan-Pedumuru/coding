#include<stdio.h>
#include<string.h>

void displaystring(char str[]);

int main()
{
    char str[50];

    fgets(str,sizeof(str),stdin);

    displaystring(str);
}

void displaystring(char str[])
{
    printf("The output string is ");
    puts(str);
}