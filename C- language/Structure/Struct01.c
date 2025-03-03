#include<stdio.h>
#include<conio.h>
struct students
{
int sno;
int rno;
char sname[20];
char class[10];
};
void main()
{
struct students x;
clrscr();
printf("Enter the serial number\n");
scanf("%d",&x.sno);
printf("Enter the roll number\n");
scanf("%d",&x.rno);
printf("Enter the name\n");
scanf("%s",&x.sname);
printf("Enter the class\n");
scanf("%s",&x.class);
printf("Serial Number: %d\tRoll Number: %d\tStudent name: %s\tclass: %s\n",x.sno,x.rno,x.sname,x.class);
getch();
}