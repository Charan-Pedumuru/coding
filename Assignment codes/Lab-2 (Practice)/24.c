#include<stdio.h>

int main()
{
    int a,b,c;

    printf("Enter the two angles of a triangle in degrees\n");
    scanf("%d%d",&a,&b);

    c=180-a-b;
    printf("The third angle of the triangle is %d",c);

    return 0;
}
