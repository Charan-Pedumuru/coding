#include<stdio.h>

struct date
{
    char day[15];
    int year;
    char month[15];
}s1;

int main()
{
    printf("Enter the day in words\n");
    gets(s1.day);

    printf("Enter the month\n");
    gets(s1.month);

    printf("Enter the year\n");
    scanf("%d",&s1.year);


    printf("The date is %s-%s-%d",s1.day,s1.month,s1.year);

}