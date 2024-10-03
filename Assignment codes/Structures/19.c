#include<stdio.h>

struct address
{
    int d_no;
    char locality[20];
    char state[15];
    char country[20];

};
struct employee
{
    char name[20];
    struct address a;
};

int main()
{
    int n;
    printf("Enter the number of employees\n");
    scanf("%d",&n);

    struct employee e[n];

    for(int i=0;i<n;i++)
    {
        printf("Enter the name of the employee %d\n",i+1);
        scanf("%s",e[i].name);

        printf("Enter the Door number of employee %d\n",i+1);
        scanf("%d",&e[i].a.d_no);

        printf("Enter the locality of employee %d\n",i+1);
        scanf("%s",e[i].a.locality);

        printf("Enter the state of employee %d\n",i+1);
        scanf("%s",e[i].a.state);

        printf("Enter the country os employee %d\n",i+1);
        scanf("%s",e[i].a.country);

    }

    for(int i=0;i<n;i++)
    {
        printf("\n\nName : %s\nD.no : %d\nLocality : %s\nState : %s\nCountry : %s\n",e[i].name,e[i].a.d_no,e[i].a.locality,e[i].a.state,e[i].a.country);
    }
}