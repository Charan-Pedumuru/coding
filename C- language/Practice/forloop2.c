#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("ENTER A NUMBER");
scanf("%d",&a);
for(b=1;b<=10;b++)
{
printf("%d X %d = %d\n",a,b,a*b);
}
getch();
}