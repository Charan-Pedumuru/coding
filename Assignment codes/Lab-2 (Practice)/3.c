#include<stdio.h>

int main()
{
    int p1,p2,a1,a2,s,l,b;

    printf("Enter the side length of a square\n");
    scanf("%d",&s);
    printf("Enter the length and breadth of a rectangle\n");
    scanf("%d%d",&l,&b);

    p1=4*s;
    a1=s*s;

    p2=2*(l+b);
    a2=l*b;

    printf("The perimeter of the square is %d\nThe area of the square is %d\n",p1,a1);
    printf("The perimeter of the rectangle is %d\nThe area of the rectangle is %d",p2,a2);

    return 0;
}
