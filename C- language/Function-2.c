#include<stdio.h>


int larger(int a, int b);
int main()
{
    int a,b,large;

    printf("Enter any two numbers\n");
    scanf("%d%d",&a,&b);

    large=larger(a,b);
    printf("The larger value is %d",large);
}


int larger(a,b)
{
    if(a>b)
    return a;

    return b;
}
