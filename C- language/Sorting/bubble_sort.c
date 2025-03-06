#include<stdio.h>

int main()
{
	int arr[]={56,6,17,9};
	int n= sizeof(arr)/sizeof(arr[0]);
    int temp=0;

	for (int i=0;i<n;i++) {
		for (int j=i;j<n-1;j++) {
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
			}
		}
	}

	for (int i=0;i<n;i++) {
		printf("%d\t", arr[i]);
	}
}
