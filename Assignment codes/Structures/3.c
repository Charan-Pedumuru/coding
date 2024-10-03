#include<stdio.h>

struct student
{
    char name[20];
    int roll;
    char course[10];

}s;

int main()
{
    printf("Enter the name of the student\n");
    gets(s.name);

    printf("Enter the roll number\n");
    scanf("%d",&s.roll);

    printf("Enter the course\n");
    scanf("%s",&s.course);

    printf("\nInformation\n\nName: %s\nRoll number : %d\nCourse :%s",s.name,s.roll,s.course);


}