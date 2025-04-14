#include <stdio.h>

// Function to check if a subset with the given sum exists
int isSubsetSum(int arr[], int n, int sum)
{
    if (sum == 0)
        return 1; // Subset found
    if (n == 0)
        return 0; // No elements left

    if (arr[n - 1] > sum) // Skip if element is greater than sum
        return isSubsetSum(arr, n - 1, sum);

    return isSubsetSum(arr, n - 1, sum) ||
           isSubsetSum(arr, n - 1, sum - arr[n - 1]);
}

int main()
{
    int arr[] = {3, 34, 4, 12, 5, 2};
    int sum = 9;
    int n = sizeof(arr) / sizeof(arr[0]);

    if (isSubsetSum(arr, n, sum))
        printf("Subset with sum %d found\n", sum);
    else
        printf("No subset with sum %d\n", sum);

    return 0;
}
