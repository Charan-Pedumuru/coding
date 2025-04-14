#include <bits/stdc++.h>
using namespace std;

int main()
{
    int ans = 0;
    int dec = 42;
    int pow = 1;

    while (dec > 0)
    {
        int rem = dec % 2;
        dec /= 2;
        ans += (rem * pow);
        pow *= 10;
    }
    cout << "Binary number is " << ans << endl;
}