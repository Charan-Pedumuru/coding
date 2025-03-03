#include<stdio.h>

int main()
{
	int n=5, k=1;
	int mask = 1<<k-1;

	int toggle= n | (mask);
	int Clear = n & (~(mask));
	int set = n ^ (mask);

	//set
	printf("Toggle: %d\n",toggle);
	printf("Set: %d\n", set);
	printf("Clear: %d\n", Clear);

}
