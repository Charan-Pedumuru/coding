#include<stdio.h>
#include<conio.h>
void main()
{
int a[4][2][2]={
		{{1,2},{9,8}},
		{{5,6},{3,4}} ,   /* dynamic initialization*/
		{{66,99},{33,44}},
		{{77,88},{23,65}}
	},i,j,k;
clrscr();
printf("values of four matirces:\n");
for(i=0;i<4;i++)
	{
	for(j=0;j<2;j++)
	{
		for(k=0;k<2;k++)
		{
		printf("%8d",a[i][j][k]);
		}
	printf("\n");
	}
printf("\n\n");
}
getch();
}