#include<stdio.h>
#include<stdlib.h>

struct book
{
    char name[15];
    int pages;

}*b;

int main()
{
    b=(struct book *)malloc(1*sizeof(b));

    printf("Enter the name of the book\n");
    scanf("%s",b->name);

    printf("Enter the number of pages\n");
    scanf("%d",&(*b).pages);


    printf("\n\nName : %s\nPages : %d",b->name,b->pages);

}