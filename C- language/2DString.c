#include<stdio.h>

int main()
{ 
    char str[5][10];           // row is for number of strings

    for(int i=0;i<5;i++)      // column is for length of the string of each string
    gets(str[i]);

    for(int i=0;i<5;i++)
    puts(str[i]);

    printf("\n");
}