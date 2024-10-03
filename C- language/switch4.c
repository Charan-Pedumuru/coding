#include<stdio.h>
#include<conio.h>
void main()
{
int mopt, sopt;
clrscr();
gotoxy(25,3);
printf("* Menu *\n");
gotoxy(1,5);
printf("1. Veg\n2.Non-Veg\n3.Ice Creams\n4.Snacks\nChoose your option\n");
scanf("%d",&mopt);
switch(mopt)
{
case 1: printf("1->Lemon rice\n2->Gobi rice\n3->curd rice	\nchoose your item\n");
	scanf("%d",&sopt);
	switch(sopt)
	{
	case 1:printf("Rs.20\n");
		break;
	case 2:printf("Rs.40\n");
		break;
	case 3:printf("Rs.25\n");
		break;
	default: printf("Choose from the list\n");
	}
break;
case 2: printf("1->Chicken biryani\n2->Kabab\n3->Fish	\nchoose your item\n");
	scanf("%d",&sopt);
	switch(sopt)
	{
	case 1:printf("Rs.120\n");
		break;
	case 2:printf("Rs.60\n");
		break;
	case 3:printf("Rs.85\n");
		break;
       default:printf("Choose from the list\n");
	}
break;
case 3: printf("1->Vennilla\n2->Straw berry\n3->Chocolate\nchoose your item\n");
	scanf("%d",&sopt);
	switch(sopt)
	{
	case 1:printf("Rs.25\n");
		break;
	case 2:printf("Rs.47\n");
		break;
	case 3:printf("Rs.39\n");
		break;
	default: printf("Choose from the list\n");
	}
break;
case 4: printf("1->Chips\n2->Popcorn\n3->Biscuits	\nchoose your item\n");
	scanf("%d",&sopt);
	switch(sopt)
	{
	case 1:printf("Rs.20\n");
		break;
	case 2:printf("Rs.12\n");
		break;
	case 3:printf("Rs.25\n");
		break;
default: printf("Choose from the list\n");
	}
break;
default: printf("select from the options\n");
}
getch();
}