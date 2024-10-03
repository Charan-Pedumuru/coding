#include<stdio.h>

int main()
{
    int d,m,y;

    printf("Enter the number of days\n");
    scanf("%d",&d);

    m=d/30;
    y=d/365;

    printf("The days in terms of months is %d\n",m);
    printf("The days in terms of years is %d",y);

    return 0;
}
