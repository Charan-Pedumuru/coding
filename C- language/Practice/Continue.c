#include<stdio.h>
#include<conio.h>
/* program to demonstrate continue in loops*/
void main()
{
int i=1;
clrscr();
for(;i<25;i++)
{
if(i==10 || i==23|| i==15)
continue;
printf("%d\n",i);
}
getch();
}