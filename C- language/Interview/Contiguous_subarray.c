#include <stdio.h>

void generateSubarrays(int arr[], int n)
{
    for (int start = 0; start < n; start++)
    {
        for (int end = start; end < n; end++)
        {
            printf("{ ");
            for (int i = start; i <= end; i++)
            {
                printf("%d ", arr[i]);
            }
            printf("}\n");
        }
    }
}

int main()
{
    int arr[] = {1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("All contiguous subarrays:\n");
    generateSubarrays(arr, n);

    return 0;
}
