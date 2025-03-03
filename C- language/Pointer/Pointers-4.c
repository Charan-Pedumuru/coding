#include<stdio.h>

int main()
{
    float arr[5]={12.5,10.0,13.5,90.5,0.5};
    float *p1=&arr[0];
    float *p2=p1+3;

    printf("%d\n",p2-p1);
}