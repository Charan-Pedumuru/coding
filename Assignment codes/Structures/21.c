#include<stdio.h>

struct data
{
    int marks[3];
    char grade[5];

};
struct student
{
    char name[20];
    struct data d;

}s[3];

int main()
{
    for(int i=0;i<3;i++)
    {
        printf("Enter the name %d\n",i+1);
        scanf("%s",s[i].name);

        for(int j=0;j<3;j++)
        {
            printf("Enter the marks of subject %d\n",j+1);
            scanf("%d",&s[i].d.marks[j]);

            printf("Enter the grade of subject %d\n",j+1);
            scanf("%s",s[i].d.grade);
        }
    }

    for(int i=0;i<3;i++)
    {
        printf("\n\nName : %s\n",s[i].name);

        for(int j=0;j<3;j++)
        {
            printf("The marks in the subject %d is %d\n",j+1,s[i].d.marks[j]);
            printf("The grade of the subject %d is %s\n",j+1,s[i].d.grade);
        }
    }

    int avg[3];

    for(int i=0;i<3;i++)
    {
        int sum=0;

        for(int j=0;j<3;j++)
        {
            sum+=s[i].d.marks[j];
        }
        avg[i]=sum/3;
    }

    for(int i=0;i<3;i++)
    {
        printf("\nThe average of the student %s is %d",s[i].name,avg[i]);
    }

}