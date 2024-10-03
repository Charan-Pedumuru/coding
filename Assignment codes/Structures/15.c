#include<stdio.h>

struct book
{
    char name[20];
    char author[20];
    int cost;
    int year;

}s[3];

struct book display()
{
    for(int i=0;i,3;i++)
    {
        printf("\n\nName : %s\nAuthor : %s\nCost of book : %d\nYear published : %d\n",s[i].name,s[i].author,s[i].cost,s[i].year);
    }

}

int main()
{
    for(int i=0;i<3;i++)
    {
        printf("Enter the name of the book %d\n",i+1);
        scanf("%s",s[i].name);

        printf("Enter the name of author\n");
        scanf("%s",s[i].author);

        printf("Enter the cost of the book\n");
        scanf("%d",&s[i].cost);

        printf("Enter the year of published\n");
        scanf("%d",&s[i].year);

    }
    struct book display();
}