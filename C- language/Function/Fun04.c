void mul(int x, int y);
#include<stdio.h>

void sum(int a,int b);
void main()
{
int x,y;
printf("Enter any two values\n");
scanf("%d%d",&x,&y);
sum(x,y);
mul(x,y);
getch();
}
void mul(int x, int y)
{
printf("Product is: %d\n",x*y);
}
void sum(int a , int b)
{
printf("Addition is: %d\n",a+b);
}
