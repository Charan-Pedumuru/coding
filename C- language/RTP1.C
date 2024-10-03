/* calculating simple interest */
#include<stdio.h>
#include<conio.h>
void main()
{
long int P,T;
float R,SI;
clrscr();
printf("Enter the value for the principle amount \n");
scanf("%ld",&P);
printf("Enter the time in months \n");
scanf("%ld",&T);
printf("Enter the rate for the principle \n");
scanf("%f",&R);
SI=P*T*R/100;
printf("The interest of the principle amount is %f\n",SI);
getch();
}