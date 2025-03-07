/* determinig the digits of number */
#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("Enter a number \n");
scanf("%d",&n);
if(n<10)
printf("The number is single digit number\n");
else
if(n<100)
printf("The number is double digit number\n");
else
if(n<1000)
printf("The number is triple digit number\n");
else
printf("The number is more than triple digit number\n");
getch();
}