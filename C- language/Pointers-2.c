#include<stdio.h>

int main()
{
    int a;
    a=69;

    int *p;
    p=&a;

    int **q;
    q=&p;

    printf("%d\n",**q);
    printf("%d\t%d",q,*q);
    printf("%d\n",p);
    printf("%d\n",*p);
    printf("%d\t%d",*p,&a);
}