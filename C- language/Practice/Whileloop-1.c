#include<stdio.h>

int main()
{
    int n,sum;
    sum=0;

    n=10;

    while(n>=1)
    {
        printf("%d\n",n);
        sum+=n;
        n--;
    }
    printf("sum=%d",sum);
}

