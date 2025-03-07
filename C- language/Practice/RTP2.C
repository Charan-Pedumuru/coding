/* Area of circle */
#include<stdio.h>
#include<conio.h>
void main()
{
float r,area;
clrscr();
printf("Enter a value for the radius\n");
scanf("%f",&r);
area=3.14*r*r;
printf("The area of a circle is %f\n",area);
getch();
}