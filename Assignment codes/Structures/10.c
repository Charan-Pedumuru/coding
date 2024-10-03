#include<stdio.h>

struct personal
{
    char name[3][20];
    int roll[3];
    int marks[3];
}s1[3];

int main()
{
    int avg[3];

    for(int i=0;i<3;i++)
    {
        printf("Enter the %d name\n",i+1);
        scanf("%s",s1[i].name);

        printf("Enter the roll number\n");
        scanf("%d",&s1[i].roll);

        for(int j=0;j<3;j++)
        {
            printf("Enter the marks of %d subject\n",j+1);
            scanf("%d",&s1[i].marks[j]);
        }

    }

    for(int i=0;i<3;i++)
    {
        
        int sum=0;

        for(int j=0;j<3;j++)
        {
            sum+=s1[i].marks[j];

        }
        avg[i]=sum/3;
       
    }

    for(int i=0;i<3;i++)
    {
        printf("Name : %s\t roll number : %d \n",s1[i].name, s1[i].roll);
        printf("The average of student %s is %d\n",s1[i].name,avg[i]);
    
    }
     printf("\n\n");
    

}