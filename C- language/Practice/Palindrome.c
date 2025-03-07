#include<stdio.h>

int main()
{
    int n,r,rev=0,a;

    printf("Enter a number\n");
    scanf("%d",&n);
    a=n;

    while(n!=0)
    {
        r=n%10;
        rev =(rev*10)+r;
        n=n/10;
    }
    if(a==rev)
    printf("The number %d is a palindrome",a);
    else
    printf("The number %d is not a palindrome",a);

}



