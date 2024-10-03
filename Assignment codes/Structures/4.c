#include<stdio.h>

typedef struct
{
    char name[20];
    char writer[15];
    int year;
}book;

int main()
{
    book b;

    printf("Enter the name of the book\n");
    gets(b.name);

    printf("Enter the writer\n");
    fgets(b.writer,sizeof(b.writer),stdin);

    printf("Enter the year published\n");
    scanf("%d",&b.year);

    printf("\nInformation\n\nBook : %s\nWriter : %s\nYear published : %d",b.name,b.writer,b.year);

}

