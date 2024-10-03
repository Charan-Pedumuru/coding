#include<stdio.h>

int main()
{
    float w1,w2,v1,v2,avg;
    int a,b;

    printf("Enter the weight of item 1\nEnter the number of items\n");
    scanf("%f%d",&w1,&a);

    printf("Enter the weight of item 2\nEnter the number of items\n");
    scanf("%f%d",&w2,&b);

    v1=w1*a;
    v2=w2*b;
    avg=(v1+v2)/(a+b);
    printf("the average value of the purchase is %f",avg);
}
