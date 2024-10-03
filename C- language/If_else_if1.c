   /* Programme for determining vowel or consonant*/
#include<stdio.h>
#include<conio.h>            
void main()
{
char ch;
clrscr();
printf("Enter an alphabet \n");
scanf("%c",&ch);
if(ch=='a' || ch=='A')
printf("Vowel");
else
if(ch=='e' || ch=='E')
printf("Vowel");
else
if(ch=='i' || ch=='I')
printf("Vowel");
else
if(ch=='o' || ch=='O')
printf("Vowel");
else
printf("Consonant");
getch();
}