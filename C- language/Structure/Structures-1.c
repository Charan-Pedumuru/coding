#include<stdio.h>
#include<string.h>

struct student
{
    int roll;
    char name[20];
    float marks;
}record[3];

int main()
{

    record[0].roll=1;
    strcpy(record[0].name, "Charan");
    printf("Enter the marks of %s\n",record[0].name);
    scanf("%f",&record[0].marks);

    record[1].roll=2;
    strcpy(record[1].name, "Prince");
    printf("Enter the marks of %s\n",record[1].name);
    scanf("%f",&record[1].marks);

    record[2].roll=3;
    strcpy(record[2].name, "Hash");
    printf("Enter the marks of %s\n",record[2].name);
    scanf("%f",&record[2].marks);


    for(int i=0;i<3;i++,printf("\n\n"))
    {
        printf("The details of roll no %d are\n",i+1);
        printf("%s\t%f",record[i].name, record[i].marks);
    }


}