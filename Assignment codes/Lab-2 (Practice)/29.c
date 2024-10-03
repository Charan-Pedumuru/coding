#include<stdio.h>

int main()
{
    float c,p,r;
    int n,t;

    printf("Enter the principle amount\n");
    scanf("%f",&p);

    printf("Enter the period of time in years\n");
    scanf("%f",&t);

    printf("Enter the rate of interest\n");
    scanf("%f",&r);

    printf("Enter the number of times interest applied\n");
    scanf("%d",&n);

    c=p*(pow(1+(r/100),n))-p;
    printf("The compound interest is %f",c);

    return 0;
}
