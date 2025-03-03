#include<stdio.h>
#include<conio.h>
struct students
{
int sno;
int rno;
char sname[20];
char class[10];
}x[3];
void main()                  /* array of structures */
{
int i;
clrscr();
for(i=0;i<3;i++)
{
printf("Enter the serial number\n");
scanf("%d",&x[i].sno);
printf("Enter the roll number\n");
scanf("%d",&x[i].rno);
printf("Enter the name\n");
scanf("%s",&x[i].sname);
printf("Enter the class\n");
scanf("%s",&x[i].class);
}
for(i=0;i<3;i++)
{
printf("Serial Number: %d\tRoll Number: %d\tStudent name: %s\tclass: %s\n",x[i].sno,x[i].rno,x[i].sname,x[i].class);
}
getch();
}