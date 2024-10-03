#include<stdio.h>

int main()
{
    int h;

    printf("Enter the time in hours\n");
    scanf("%d",&h);

    h*=60;
    printf("The time in minutes is %d",h);

    return 0;
}
