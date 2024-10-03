#include<stdio.h>

int *max(int *x, int *y)          // Call by reference
{
    if(*x>*y)
    return x;

    else
    return y;             // returning address
}

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);

    printf("The maximum of %d and %d is %d",a,b,*max(&a,&b));
}