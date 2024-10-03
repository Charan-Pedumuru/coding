#include<stdio.h>

int main()
{
    int p,l,b;

    printf("Enter the length and breadth of a rectangle\n");
    scanf("%d%d",&l,&b);

    p=2*(l+b);

    printf("The perimeter of the rectangle is %d",p);

    return 0;
}
