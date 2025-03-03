#include<stdio.h>
#include<conio.h>
void main()
{
int x,y,*p;		/* p is pointer variable */
x=34;
y=78;
p=&x;
printf("x value: %d\t x address: %u\n",x,p);
printf("y value: %d\t y address: %u\n",y,&y);

}