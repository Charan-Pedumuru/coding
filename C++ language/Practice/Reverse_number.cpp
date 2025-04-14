#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 42;
    int rev = 0;

    while (n > 0)
    {
        int rem = n % 10;
        n /= 10;
        rev = rev * 10 + rem;
    }
    cout << rev << endl;
}