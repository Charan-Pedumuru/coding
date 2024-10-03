#include<stdio.h>

int main()
{
    int a,*p;

    scanf("%d",&a);
    p=&a;
    a=1;

    printf("%d\n",a);
    printf("%d\n",*p);
}