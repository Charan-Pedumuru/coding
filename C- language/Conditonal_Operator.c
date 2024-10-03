#include<stdio.h>

int main()
{
    int a;

    printf("Enter the age\n");
    scanf("%d",&a);

    (a>=18)?printf("You are eligible to vote\n") : printf("You are not eligible to vote\n");
}
