#include<stdio.h>

int main()
{
    int n,r,rev=0,s,a;

    printf("Enter a number\n");
    scanf("%d",&n);
    a=n;

    while(n!=0)
    {
        r=n%10;
        rev =(rev*10)+r;
        n=n/10;
    }
    printf("The reverse order of the number is %d\n",rev);

    s=a-rev;
    printf("The subtraction of two numbers is %d\n",s);

    if(s%9==0)
    printf("It is the multiple of 9\n");

    return 0;

}
