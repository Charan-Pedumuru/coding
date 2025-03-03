#include<stdio.h>

int main()
{
    char name[30];

    printf("Enter the name\n");
    fgets(name,sizeof(name),stdin);
    puts(name);
}