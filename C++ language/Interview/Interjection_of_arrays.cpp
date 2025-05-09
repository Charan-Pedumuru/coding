#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {3, 2, 7, 5};
    int arr1[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);
    int n1 = sizeof(arr1) / sizeof(int);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            if (arr[i] == arr1[j])
            {
                cout << arr1[j] << "\t";
            }
        }
    }
}