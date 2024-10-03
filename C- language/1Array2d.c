#include<stdio.h>
#include<conio.h>
void main()
{
int a[2][3];
clrscr();
a[0][0]=12;
a[0][1]=8;
a[0][2]=5;
a[1][0]=11;
a[1][1]=4;
a[1][2]=91;
printf("%d\t",a[0][0]);
printf("%d\t",a[0][1]);
printf("%d\n",a[0][2]);
printf("%d\t",a[1][0]);
printf("%d\t",a[1][1]);
printf("%d\n",a[1][2]);
getch();
}