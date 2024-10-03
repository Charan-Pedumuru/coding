#include<stdio.h>

int main()
{
    int a,b,c;

    printf("Enter the three sides of a triangle\n");
    scanf("%d%d%d",&a,&b,&c);

    if(a==b && b==c)
    printf("It's an equilateral triangle\n");

    else if(a!=b && b!=c)
    printf("It's a scalene triangle\n");

    else
    printf("It's an isosceles triangle");

    return 0;
}
