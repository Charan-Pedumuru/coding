// Possible subset

#include <stdio.h>
#include <math.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int t = pow(2, n);

    for (int i = 0; i < t; i++)
    {
        printf("{ ");
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                printf("%d ", arr[j]);
            }
        }
        printf(" }\n");
    }
}