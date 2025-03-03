#include<stdio.h>
#include<conio.h>
void main()	/* runtime program or dynamic program*/
{
int a[4][2][2],i,j,k;
clrscr();
printf("Enter the values for 4 matrices consits of 2x2\n");
for(i=0;i<4;i++)
{
	for(j=0;j<2;j++)
	{
		for(k=0;k<2;k++)
		{
		scanf("%d",&a[i][j][k]);
		}
	}
}
printf("values of four matirces:\n");
for(i=0;i<4;i++)
	{
	for(j=0;j<2;j++)
	{
		for(k=0;k<2;k++)
		{
		printf("%d\t",a[i][j][k]);
		}
	printf("\n");
	}
printf("\n\n");
}
getch();
}