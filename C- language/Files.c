#include<stdio.h>

int main()
{
    FILE *f;
    char ch;

    f=fopen("D:\\demo.txt","r"); // if you use IDE you should specify the location

    if(f==NULL)
    printf("Failed to open");

    while(!feof(f))
    {
        ch=fgetc(f);

        if(ch==EOF)
        break;
        printf("%c",ch);
    }
}