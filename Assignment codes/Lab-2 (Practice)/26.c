#include<stdio.h>

int main()
{
    int a;
    float b;

    printf("Enter the side of an equilateral triangle\n");
    scanf("%d",&a);

    b=0.433*a*a;
    printf("The area of an equilateral triangle is %f",b);

    return 0;
}
