#include<stdio.h>

int main()
{
    float i,c;

    printf("Enter the length in inches\n");
    scanf("%f",&i);

    c=i*2.54;
    printf("The length in centimeters is %f",c);

    return 0;
}
