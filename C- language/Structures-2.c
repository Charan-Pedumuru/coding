#include<stdio.h>

struct personal
{
    char name[3][20];
    int roll[3];
    int marks[5];
}s1[3];

int main()
{

    for(int i=0;i<3;i++)
    {
        printf("Enter the %d name\n",i+1);
        scanf("%s",s1[i].name);

        printf("Enter the roll number\n");
        scanf("%d",&s1[i].roll);

        for(int j=0;j<5;j++)
        {
            printf("Enter the marks of %d subject\n",j+1);
            scanf("%d",&s1[i].marks[j]);
        }

    }

    for(int i=0;i<3;i++)
    {
        printf("Name : %s\t roll number : %d \n",s1[i].name, s1[i].roll);

        for(int j=0;j<5;j++)
        printf("The marks in the subject %d is %d\n",j+1,s1[i].marks[j]);

        printf("\n\n");
    }
    


}