#include<conio.h>
#include<stdio.h>
void main()
{
int a[2][3],i,j;
printf("enter the values for 2X3 matrix:\n");
for(i=0;i<2;i++)
{
	for(j=0;j<3;j++)
	{                           /* runtime program*/
	scanf("%d",&a[i][j]);
	}
}
printf("values of 2X3 matrix is:\n");
for(i=0;i<2;i++)
{
	for(j=0;j<3;j++)
	{
	printf("%d\t",a[i][j]);
	}
printf("\n");
}
getch();
}