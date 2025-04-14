#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);

    int mi = INT_MAX;
    int ma = INT_MIN;

    for (int i : arr)
    {
        if (i < mi)
            mi = i;
        if (i > ma)
            ma = i;
    }
    cout << ma << "\t" << mi << endl;
}