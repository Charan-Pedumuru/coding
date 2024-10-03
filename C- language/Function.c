#include<stdio.h>


void add();
int main()
{
    add();
}

void add()
{
    int a,b,c;

    printf("Enter the two numbers\n");
    scanf("%d%d",&a,&b);

    c=a+b;
    printf("The addition of %d and %d is %d",a,b,c);
}
