#include<stdio.h>
#include<conio.h>	      /* runtime program */
void main()
{
int a,b;	/* initialisation */
clrscr();
printf("emter the starting number\n");
scanf("%d",&a);
printf("Enter the ending number\n");
scanf("%d",&b);
while(a<=b) /* condition */
{
printf("%d\t",a);
a++;		/* Updation */
}
getch();
}