#include<stdio.h>

int main()
{
    int n,a;
    scanf("%d",&n);
    a=n;

    int r,res=0;

    while(n!=0)
    {
        r=n%10;
        res+=r*r*r;
        n/=10;
    }

    if(a==res)
    printf("Armstrong number\n");
    else
    printf("Not Armstrong number");

}