#include<stdio.h>

int main()
{
    int a,b,c,avg;

    printf("Enter the 3 test scores\n");
    scanf("%d%d%d",&a,&b,&c);

    avg=(a+b+c)/3;

    if(avg>=75)
    printf("You are promoted to next class\n");
    else
    printf("Sorry! You did'nt pass the test");
}
