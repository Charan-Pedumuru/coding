/* checking eligibility for voting */
#include<stdio.h>
#include<conio.h>
void main()
{
int year;
clrscr();
printf("Enter the age\n");
scanf("%d",&year);
if(year>=18)
{printf("You are eligible for voting\n Thank you");}
else
{printf("You are not eligible for voting\n Thank you");}
getch();
}