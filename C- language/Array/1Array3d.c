#include<stdio.h>
#include<conio.h>
void main()
{	/* compile time program using 3D Arrays */
int a[2][3][2];
clrscr();
a[0][0][0]=23;
a[0][0][1]=2;
a[0][1][0]=3;
a[0][1][1]=7;
a[0][2][0]=4;
a[0][2][1]=9;

a[1][0][0]=11;
a[1][0][1]=27;
a[1][1][0]=33;
a[1][1][1]=77;
a[1][2][0]=44;
a[1][2][1]=99;
printf("First matrix:\n");
printf("%d\t",a[0][0][0]);
printf("%d\n",a[0][0][1]);
printf("%d\t",a[0][1][0]);
printf("%d\n",a[0][1][1]);
printf("%d\t",a[0][2][0]);
printf("%d\n\n",a[0][2][1]);

printf("second matrix:\n");
printf("%d\t",a[1][0][0]);
printf("%d\n",a[1][0][1]);
printf("%d\t",a[1][1][0]);
printf("%d\n",a[1][1][1]);
printf("%d\t",a[1][2][0]);
printf("%d\n\n",a[0][2][1]);
getch();
}