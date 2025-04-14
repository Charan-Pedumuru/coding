#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(int);

    for (int i = 0; i < n; i++)
    {
        if (i >= n - i - 1)
            swap(arr[i], arr[n - i - 1]);
    }
    for (int i = 0; i < n; i++)
        cout << arr[i] << "\t";
}