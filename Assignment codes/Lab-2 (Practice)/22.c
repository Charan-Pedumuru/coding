#include<stdio.h>

int main()
{
    int x,y,z;

    printf("Enter the values of x and y\n");
    scanf("%d%d",&x,&y);

    z=pow(x,y);
    printf("The result is %d",z);

    return 0;
}
