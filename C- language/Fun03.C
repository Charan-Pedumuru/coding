#include<stdio.h>

void sum();
int main()
{
int i,j;

printf("Enter the number of calls for sum\n");
scanf("%d",&j);
for(i=0;i<j;i++)
{
sum();
}
}
void sum()
{
int a,b;
printf("Enter the first number\n");
scanf("%d",&a);
printf("Enter the second number\n");
scanf("%d",&b);
printf("The sum of two numbers is %d\n",a+b);
}
