#include<stdio.h>

int main()
{
	int x=5;
	int *p=&x;
	int **q=&p;
	int ***r=&q;

	printf("%d\n",*p);
	printf("%d\n", (int)p);
	printf("%d\n", (int)&p);
	printf("%d\n",(int)*q);
	printf("%d\n",**q);
	printf("%d\n",***r);
	printf("%d\n", (int)**r);
	printf("%d\n",(int)&x);
	
}
