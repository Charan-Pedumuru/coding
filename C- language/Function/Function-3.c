#include<stdio.h>


void larger(int a, int b);
int main()
{
    int a,b;

    printf("Enter any two numbers\n");
    scanf("%d%d",&a,&b);

    larger(a,b);
}


void larger(int a,int b)
{
    if(a>b)
    printf("%d is larger than %d",a,b);
    else
    printf("%d is larger than %d",b,a);
}
