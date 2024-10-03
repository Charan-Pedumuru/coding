#include<stdio.h>

struct date_of_birth
{
    int day;
    int month;
    int year;

};
struct student
{
    char name[20];
    struct date_of_birth d;

}s[3];

int main()
{
    for(int i=0;i<3;i++)
    {
        printf("Enter the name of the student %d\n",i+1);
        scanf("%s",s[i].name);

        printf("Enter the day of birthday\n");
        scanf("%d",&s[i].d.day);

        printf("Enter the month of birthday\n");
        scanf("%d",&s[i].d.month);

        printf("Enter the year of the birthday\n");
        scanf("%d",&s[i].d.year);

    }
    for(int i=0;i<3;i++)
    {
        printf("\n\nName : %s\nBirthday : %d-%d-%d\n",s[i].name,s[i].d.day,s[i].d.month,s[i].d.year);
    }
}