#include<stdio.h>

int factorial(int n)
{
    if(n==0)
    return 1;

    else
    return n*factorial(n-1);
}

int main()
{
    int x;
    printf("Enter a number\n");
    scanf("%d",&x);

    printf("The factorial of %d is ",x);
    printf("%d",factorial(x));
    return 0;
}