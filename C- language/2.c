#include<stdio.h>

void main()
{
    int s;
    printf("Select the mode of the day\n 1.Weekday\n 2.Weekend\n 3.Festival\n");
    scanf("%d",&s);
    if(s==1)
        printf("The sale is Rs.10000/-");
    else if(s==2)
        printf("The sale is Rs.15000/-");
    else
        printf("The sale is Rs.30000/-");

}
