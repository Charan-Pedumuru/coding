#include<stdio.h>

int main()
{
    int h,t,g;
    float c;

    printf("Enter the hardness, carbon content and tensile strength\n");
    scanf("%d%f%d",&h,&c,&t);

    if(h>50 && c<0.7 && t>5600)
    g=10;

    else if(h>50 && c<0.7)
    g=9;

    else if(c<0.7 && t>5600)
    g=8;

    else if(h>50 && t>5600)
    g=7;

    else if(h>50 || c<0.7 || t>5600)
    g=6;

    else
    g=5;

    printf("The grade of the steel is %d",g);
}
