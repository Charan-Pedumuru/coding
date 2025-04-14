#include <stdio.h>
#include <math.h>

void printSubset(int arr[], int n, int mask)
{
    printf("{ ");
    for (int i = 0; i < n; i++)
    {
        if (mask & (1 << i))
        { // Check if i-th element is included
            printf("%d ", arr[i]);
        }
    }
    printf("}\n");
}

void generateSubsets(int arr[], int n)
{
    int totalSubsets = pow(2, n);
    for (int mask = 0; mask < totalSubsets; mask++)
    {
        printSubset(arr, n, mask); 
    }
}

int main()
{
    int arr[] = {1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("All subsets of the array:\n");
    generateSubsets(arr, n);

    return 0;
}
