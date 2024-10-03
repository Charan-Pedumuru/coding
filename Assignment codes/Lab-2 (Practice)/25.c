#include<stdio.h>

int main()
{
    int b,h,a;

    printf("Enter the base and height of a triangle\n");
    scanf("%d%d",&b,&h);

    a=0.5*b*h;
    printf("The area of the triangle is %d",a);

    return 0;
}
