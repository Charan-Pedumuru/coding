/* determing big number */
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("Enter the values a,b,c \n");
scanf("%d%d%d",&a,&b,&c);
if(a>b)
{
 if(a>c)
printf("%d is the big number",a);
else
printf("%d is the big number",c);
}
else
{
 if(b>c)
printf("%d is the big number",b);
else
printf("%d is the big number",c);}
getch();
}