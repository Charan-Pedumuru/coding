#include<stdio.h>
#include<conio.h>
void main()
{                           /* runtime program */
int x[500],i,r;
clrscr();
printf("enter your range\n");
scanf("%d",&r);
printf("Enter any %d values\n",r);
for(i=1;i<=r;i++)
{
scanf("%d",&x[i]);
}
printf("The values of the column matrix\n");
for(i=1;i<=r;i++)
{
printf("x[%d]=%d\n",i,x[i]);
}
getch();
}