#include<stdio.h>

int main()
{
    int r,a,c;

    printf("Enter the radius of a circle\n");
    scanf("%d",&r);

    c=2*3.14*r;
    a=3.14*r*r;

    printf("The diameter of the circle is %d\n",2*r);
    printf("The circumference of the circle is %d\n",c);
    printf("The area of the circle is %d\n",a);

    return 0;

}
