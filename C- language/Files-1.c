#include<stdio.h>

int main()
{
    FILE *f,*f1;
    char ch;

    f=fopen("demo.txt","r");
    f1=fopen("demo1.text","w"); // we should specify the path of the file

    if(f==NULL)
    printf("Failed to open");

    while(!feof(f))
    {
        ch=fgetc(f);
        fputc(ch,f1);

        if(ch==EOF)
        break;
        printf("%c",ch);
    }
}