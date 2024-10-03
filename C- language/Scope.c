#include<stdio.h>

int c=60;
int main()
{
    int a,b,sum;
    int c=50;

    printf("Enter an two numbers\n");
    scanf("%d%d",&a,&b);

    sum=add(a,b);

    printf("The sum is %d",sum);
}

int add(int x,int y)
{
    int c;

    c=x+y;
    return c;
}
