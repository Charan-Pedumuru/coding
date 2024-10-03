#include<stdio.h>

void main()
{
    int a;
    printf("Select the floor to where goos need to be delivered \n 1.First floor\n 2.Second floor\n 3.ground floor\n");
    scanf("%d",&a);
    if(a==1)
        printf("John crossed 400 to 425 steps");
    else if(a==2)
        printf("John crossed more than 425 steps");
    else
        printf("John crossed 400 steps");
}
