#include<stdio.h>

int main()
{
    int a = 10, b = 20;
    int x=5,y=7;
    // First method
    a=a+b-(b=a);
    // Second method
    x=x^y;
    y=x^y;
    x=x^y;
    printf("a = %d, b = %d", a, b);
    printf("\nx = %d, y = %d", x, y);
    return 0;
}