#include<stdio.h>


int add();
int main()
{
    int sum;
    sum=add();

    printf("The addition the two numbers is %d",sum);
}

int add()
{
    int a,b;

    printf("Enter the two numbers\n");
    scanf("%d%d",&a,&b);

    return a+b;
}
