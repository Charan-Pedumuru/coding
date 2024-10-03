#include<stdio.h>
#include<conio.h>
int sum(int a, int b);
int mul(int x,int y, int z);
void main()
{
int i,j,k, result1,result2;
clrscr();
printf("Enter any three number");
scanf("%d%d%d",&i,&j,&k);
result1=sum(i,j);
result2=mul(i,j,k);
printf("addition: %d\n",result1);
printf("multiplication: %d\n",result2);
getch();
}
int sum(int a,int b)
{
return a+b;
}
int mul(int x, int y, int z)
{
return x*y*z;
}