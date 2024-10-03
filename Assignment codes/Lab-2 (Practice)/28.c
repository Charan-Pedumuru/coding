#include<stdio.h>

int main()
{
    float s,p,r,t;

    printf("Enter the principle amount\n");
    scanf("%f",&p);

    printf("Enter the period of time in years\n");
    scanf("%f",&t);

    printf("Enter the rate of interest\n");
    scanf("%f",&r);

    s=(p*t*r)/100;
    printf("The simple interest is %f",s);

    return 0;
}
