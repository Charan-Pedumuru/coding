#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;

printf("enter the value for starting year\n");
scanf("%d",&a);
printf("enter the value for ending year\n");;
scanf("%d",&b);
do /* condition */
{
if(a%4==0)
printf("%d\t",a);
a++;
}while(a<=b);
getch();
}
