#include<stdio.h>

struct book
{
    long int accnumber;
    char author[20];
    char title[15];
    int year;
    char publisher_name[25];
    int cost;

};

int main()
{
    int n;
    printf("Enter the number of books\n");
    scanf("%d",&n);

    struct book b[n];

    for(int i=0;i<n;i++)
    {
        printf("Enter the accession number\n");
        scanf("%ld",&b[i].accnumber);

        printf("Enter the name of the author\n");
        scanf("%s",b[i].author);

        printf("Enter the title\n");
        scanf("%s",b[i].title);

        printf("Enter the year of published\n");
        scanf("%d",&b[i].year);

        printf("Enter the publisher name\n");
        scanf("%s",b[i].publisher_name);

        printf("Enter the cost of the book\n");
        scanf("%d",&b[i].cost);

    }

    for(int i=0;i<n;i++)
    {
        printf("\n\nAccession number : %ld\nAuthor name : %s\nTitle : %s\nYear published : %d\nPublisher name : %s\nBook cost : %d",b[i].accnumber,b[i].author,b[i].title,b[i].year,b[i].publisher_name,b[i].cost);
    }

}