#include<stdio.h>

int sum(int n);

int main()
{
    int a;

    printf("Enter a number\n");
    scanf("%d",&a);

    printf("The sum of first %d natural numbers is %d",a,sum(a));
    
    return 0;
}

int sum(int n)
{
    if(n!=0)
    return n+sum(n-1);

    else
    return 0;
}