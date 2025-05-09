#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);
    int maxsum = 0;

    for (int i = 0; i < n; i++)
    {
        int cs = 0;
        for (int j = i; j < n; j++)
        {
            cs += arr[j];
            maxsum = max(maxsum, cs);
        }
    }
    cout << "Maximum subarray sum: " << maxsum << endl;
}