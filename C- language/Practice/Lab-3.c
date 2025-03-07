#include<stdio.h>

int main()
{
    int t;

    printf("Enter the temperature in celsius\n");
    scanf("%d",&t);

    if(t<=0)
    printf("It's very very cold \n");

    else if(0<t<=10)
    printf("It's cold\n");

    else if(10<t<=20)
    printf("It's cold out\n");

    else if(20<t<=30)
    printf("It's warm\n");

    else
    printf("It's hot\n");
}
