#include<stdio.h>

int main()
{
	int arr[] = {2,4,5,6};
	int n = sizeof(arr)/sizeof(arr[0]);
	int *p=arr;

	printf("%d\n", (int)p);
	printf("%d\n", *p);
	printf("%d\n", (int)(p+1));
	printf("%d\n",*(p+1));
	printf("%d\n", (int)(p+2));
	printf("%d\n",*(p+2));
	printf("%d\n", (int)(p+3));
	printf("%d\n",*(p+3));

}
