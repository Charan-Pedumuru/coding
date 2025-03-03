#include<stdio.h>

int main()
{
	int arr[]={56,6,17,9};
	int n= sizeof(arr)/sizeof(arr[0]);

	for (int i=0;i<n;i++) {
		scanf("%d", &arr[i]);
	}

	for (int i=0;i<n-1;i++) {
		for (int j=i;j<n;j++) {
			if(arr[i]>arr[j])
			{
				arr[i]=arr[i]+arr[j]-(arr[j]=arr[i]);
			}
		}
	}

	for (int i=0;i<n;i++) {
		printf("%d\t", arr[i]);
	}
}
