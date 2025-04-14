#include <bits/stdc++.h>
using namespace std;

int factorial(int a)
{
    int res = 1;
    for (int i = 1; i <= a; i++)
    {
        res *= i;
    }
    return res;
}

int main()
{
    int n = 5, r = 2;
    int fac_n = factorial(n);
    int fac_r = factorial(r);
    int fac_nmr = factorial(n - r);

    cout << fac_n / (fac_r * fac_nmr) << endl;
}