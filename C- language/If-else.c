#include<stdio.h>

int main()
{
    int n;

    printf("Enter a number\n");
    scanf("%d",&n);

    if(n>0)
    printf("The number is positive\n");
    else if(n<0)
    printf("The number is negative\n");
    else
    printf("The number is zero\n");
}
