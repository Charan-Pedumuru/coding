#include<stdio.h>

int main()
{
    int t;

    printf("Enter the temperature in fahrenheit\n");
    scanf("%d",&t);

    if(t>=80)
    printf("Go play gulf\n");

    else if(70<t<79)
    printf("Put on a jacket\n");

    else
    printf("It's way too cold");

    return 0;
}
