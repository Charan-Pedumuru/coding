#include<stdio.h>

typedef struct
{
    char name[20];
    long int accnumber;
    int cash;

}details;

int main()
{
    int n;
    printf("Enter the number of customers\n");
    scanf("%d",&n);

    details d[n];

    for(int i=0;i<n;i++)
    {
        printf("Enter the name %d\n",i+1);
        scanf("%s",d[i].name);

        printf("Enter the account number of customer %d\n",i+1);
        scanf("%ld",&d[i].accnumber);

        printf("Enter the cash amount of customer %d\n",i+1);
        scanf("%d",&d[i].cash);
    }

    for(int i=0;i<n;i++)
    {
        printf("\n\nCustomer name : %s\nAccount number : %ld\nBalance amount : %d\n",d[i].name,d[i].accnumber,d[i].cash);
    }
}