#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,r,sr;
clrscr();
printf("Enter the range of tables\n");
scanf("%d",&r);
printf("enter the fixed end of each table\n");
scanf("%d",&sr);
for(i=1;i<=r;i++)
{
for(j=1;j<=sr;j++)
{
printf("%d\t",i*j);
}
printf("\n");
}
getch();
}