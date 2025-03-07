#include<stdio.h>

int main()
{
    int n;

    printf("Enter a number : ");                // n=-(n+1) is complement of a number n
    scanf("%d",&n);                            // Its a binary operator

    printf("The complement of the number is %d",~n);
}
