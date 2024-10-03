#include<stdio.h>

typedef struct
{
    char empname[20];
    int empid;
    long int sal;
    int year;

}employee;

int main()
{
    int n,opt;

    printf("Enter the number of employees\n");
    scanf("%d",&n);
    employee arr[n];

    for(int i=0;i<n;i++)
    {
        printf("Enter the name of employee %d\n",i+1);
        scanf("%s",arr[i].empname);

        printf("Enter the id of employee %d\n",i+1);
        scanf("%d",&arr[i].empid);

        printf("Enter the salary of employee %d\n",i+1);
        scanf("%ld",&arr[i].sal);

        printf("Enter the joined year\n");
        scanf("%d",&arr[i].year);
    }

    int inc[n];

    for(int i=0;i<n;i++)
    {
        if(arr[i].sal<=20000)
        inc[i]=arr[i].sal + arr[i].sal*0.15;
        

        else if(arr[i].sal>20000 && arr[i].sal<50000)
        inc[i]=arr[i].sal + arr[i].sal*0.1;

        else if(arr[i].sal>50000)
        inc[i]=arr[i].sal;
    }

    for(int i=0;i<n;i++)
    {
        if(inc[i]>=35000)
        {
            printf("\n\nName : %s\nID : %d\nSalary : %d\nYear joined : %d\n",arr[i].empname,arr[i].empid,inc[i],arr[i].year);
        }
    }


  
}