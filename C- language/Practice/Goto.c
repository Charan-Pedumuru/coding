#include<stdio.h>
#include<conio.h>
void main()
{
int num;		/*goto */
clrscr();
printf("Enter the number\n");
scanf("%d",&num);
if(num==1)
goto a;
if(num==2)
goto b;
if(num==3)
goto c;

a:printf("ONE");
goto l;
b:printf("two");
goto l;
c:printf("three");
goto l;
l:printf("End of the program");
getch();
}