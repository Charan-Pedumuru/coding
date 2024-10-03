#include<stdio.h>

int main()
{
    int r,h,t;

    printf("Enter the hourly pay rate\n");
    scanf("%d",&r);

    printf("Enter number of hours worked in a week\n");
    scanf("%d",&h);

    if(h<=40)
    {
        t=h*r;
        printf("The weekly payment is %d",t);
    }
    else
    {
        t=1.5*h*r;
        printf("The weekly payment is %d",t);
    }

    return 0;
}
