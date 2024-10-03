#include<stdio.h>

int main()
{
    float avg,age[]={23,45,65,43,22,11,67,69,34};
    avg=average(age,6);
    printf("The average of elements in the array is %d",avg);
}

float average(float age[],int n)
{
    float sum=0,avg;

    for(int i=0;i<n;i++)
    sum+=age[i];

    avg=sum/n;

    return avg;
}