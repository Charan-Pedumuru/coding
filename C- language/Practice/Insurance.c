#include<stdio.h>

int main()
{
    int a;
    char m,g;

    printf("Enter the gender\nType M or F\n");
    scanf("%c",&g);

    printf("Enter the age\n");
    scanf("%d",&a);

    printf("Enter the martial status\nSay Y or N\n");
    scanf("%s",&m);

    if(m=='Y' || m=='y')
    printf("Eligible for insurance");

    else if(g=='m' && m=='n')
    {
        if(a>30)
         printf("Eligible for insurance");
        else
         printf("Sorry! Not eligible for insurance");
    }


    else if(g=='f' && m=='n')
    {
        if(a>25)
        printf("Eligible for insurance");
        else
        printf("Eligible for insurance");
    }


    else
    printf("Sorry! Not eligible for insurance");
}
