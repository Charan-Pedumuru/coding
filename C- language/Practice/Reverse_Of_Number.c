#include<stdio.h>

int main()
{
    int n,a;
    scanf("%d",&n);
    a=n;

    int r,rev=0;

    while(n!=0)
    {
        r=n%10;
        rev=rev*10 +r;
        n/=10;
    }
    printf("%d",rev);
}