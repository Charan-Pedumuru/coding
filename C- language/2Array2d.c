#include<conio.h>
#include<stdio.h>
void main()	/* compile time - 2D Array */
{		
int a[3][3]={{12,23,34},{78,56,34},{12,21,11}},i,j;
clrscr();
printf("values of 3X3 matrix is:\n");
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
	printf("%d\t",a[i][j]);
	}
printf("\n");

}
getch();
}