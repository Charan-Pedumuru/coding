#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int c;

    for (int i = 1; i <= n; i++)
    {
        c = 0;
        for (int j = 1; j <= n; j++)
        {
            if ((i % j == 0))
            {
                c += 1;
            }
        }
        if (c == 2)
            cout << i << "\t";
    }
}