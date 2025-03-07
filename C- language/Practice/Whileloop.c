#include<stdio.h>

int main()
{
    int n,sum;
    sum=0;

    n=1;

    while(n<=10)
    {
        printf("%d\n",n);
        sum+=n;
        n++;
    }
    printf("sum=%d",sum);
}

