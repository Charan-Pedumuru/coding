#include<stdio.h>

int main()
{
    float c,m,k;

    printf("Enter the length in centimeters\n");
    scanf("%f",&c);

    m=c/100;
    k=c/10000;

    printf("The length in meters is %.f\n",m);
    printf("The length in kilometers is %f",k);

    return 0;
}
