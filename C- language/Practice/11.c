#include<stdio.h>
struct students
{
int sno;
int rno;
char sname[20];
char sclass[10];
};
void main()
{
struct students x;
printf("Enter the serial number\n");
scanf("%d",&x.sno);
printf("Enter the roll number\n");
scanf("%d",&x.rno);
printf("Enter the name\n");
scanf("%s",&x.sname);
printf("Enter the class\n");
scanf("%s",&x.sclass);
printf("Serial Number: %d\tRoll Number: %d\tStudent name: %s\tclass: %s",x.sno,x.rno,x.sname,x.sclass);
getch();
}
