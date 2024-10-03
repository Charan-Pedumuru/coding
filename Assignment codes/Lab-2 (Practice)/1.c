#include<stdio.h>

int main()
{
    float a,b,c,avg;

    printf("Enter the rainfall of three consecutive days\n");
    scanf("%f%f%f",&a,&b,&c);

    avg=(a+b+c)/3;
    printf("The average rainfall in three consecutive days is %.4f", avg);

    return 0;

}
