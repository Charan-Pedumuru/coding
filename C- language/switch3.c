#include<stdio.h>
#include<conio.h>
void main()
{
int f,s,opt;
clrscr();
printf("Enter any two numbers\n");
scanf("%d%d",&f,&s);
printf("Options for you\n");
printf("1->Addition\n2->Subtraction\n3->Multiplication\nSelect your option\n");
scanf("%d",&opt);
switch(opt)
{
case 1: printf("Addition of two numbers is: %d\n",f+s);
	break;
case 2: printf("Difference between two numbers is: %d\n",f-s);
	break;
case 3: printf("Product of two numbers is: %d\n",f*s);
	break;
default: printf("Select the option from list\n");
}
}
