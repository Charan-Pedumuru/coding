#include <bits/stdc++.h>
using namespace std;

int main()
{
    int bin = 1010101, ans = 0;
    int pow = 1;

    while (bin)
    {
        int rem = bin % 10;
        bin /= 10;
        ans += rem * pow;
        pow *= 2;
    }
    cout << ans << endl;
}