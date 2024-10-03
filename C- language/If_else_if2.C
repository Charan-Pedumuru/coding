/* bill amount for current metre reading */
#include<stdio.h>
#include<conio.h>
void main()
{
int pmr,cmr,units;
float amt;
clrscr();
printf("Enter the values of previous & current meter reading\n");
scanf("%d%d",&pmr,&cmr);
units=cmr-pmr;
printf("The units are %d\n",units);
if(units<100)
amt=units*1;
else
if(units>=100 && units<500)
amt=units*2.5;
else
if(units>=500 && units<1000)
amt=units*5;
else
amt=units*8;
printf("the bill amount is %f",amt);
getch();
}