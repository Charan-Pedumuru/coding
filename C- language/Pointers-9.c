#include<stdio.h>

void sum(int *x, int *y)
{
    printf("The sum of %d and %d is %d",*x,*y,*x+*y);     

}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);

    sum(&a,&b);           // Call by reference

}