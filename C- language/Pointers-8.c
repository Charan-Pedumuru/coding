#include<stdio.h>

int main()
{
    int a,b;
    int *p,*q;

    scanf("%d%d",&a,&b);
    p=&a;
    q=&b;

    printf("The addition of %d and %d is %d",*p,*q,*p+*q);
}