#include<stdio.h>

struct student
{
    char name[20];
    int marks[3];

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
            scanf("%d",&s[i].marks[j]);

        }
    }

   int arr[3];

    for(int i=0;i<3;i++)
    {
        int sum=0;
        for(int j=0;j<3;j++)
        {
            sum+=s[i].marks[j];

        }
        arr[i]=sum;
    }
    int max=0;

    for(int i=1;i<3;i++)
    {
        if(arr[max]<arr[i])
        {
            max=i;
        }

    }
    for(int i=0;i<3;i++)
    {
        if(arr[max]==arr[i])
        {
            printf("The topper of the class is %s\n",s[i].name);
            break;
        }
    }
}