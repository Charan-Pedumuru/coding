#include <stdio.h>

typedef struct
{
    char empname[20];
    int empid;
    long int sal;
} employee;

int main()
{
    int n, opt;

    printf("Enter the number of employees\n");
    scanf("%d", &n);
    employee arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter the name of employee %d\n", i + 1);
        scanf("%s", arr[i].empname);

        printf("Enter the id of employee %d\n", i + 1);
        scanf("%d", &arr[i].empid);

        printf("Enter the salary of employee %d\n", i + 1);
        scanf("%ld", &arr[i].sal);
    }

    printf("Enter your choice\n1.Employ search\n2.Display the details of employee\n3.Employees with salary more than 30000\n");
    scanf("%d", &opt);

    do
    {
        if (opt == 1)
        {
            int f;
            printf("Enter the ID of the employee\n");
            scanf("%d", &f);

            for (int i = 0; i < n; i++)
            {
                if (arr[i].empid == f)
                {
                    printf("Name : %s\t ID : %d\t Salary : %d\n", arr[i].empname, arr[i].empid, arr[i].sal);
                    break;
                }
            }
        }

        else if (opt == 2)
        {
            for (int i = 0; i < n; i++)
                printf("Name : %s\t ID : %d\t Salary : %d\n", arr[i].empname, arr[i].empid, arr[i].sal);
        }
        else if (opt == 3)
        {
            for (int i = 0; i < n; i++)
            {
                if (arr[i].sal > 30000)
                {
                    printf("Name : %s\t ID : %d\t Salary : %d\n", arr[i].empname, arr[i].empid, arr[i].sal);
                }
            }
        }
        printf("\n\nEnter your choice\n1.Employ search\n2.Display the employees of employee\n3.Employees with salary more than 30000\n4.Exit the program\n");
        scanf("%d", &opt);

    } while (opt != 4);
}