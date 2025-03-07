#include<stdio.h>
#include<conio.h>
	/* program to demonstrate break in loops*/
void main()
{
int i=1;
clrscr();
for(;i<25;i++)
{
if(i==4)
break;
printf("%d\n",i);
}
getch();
}