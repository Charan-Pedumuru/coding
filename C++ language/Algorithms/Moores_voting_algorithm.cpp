// To find majority element in an array and not sorted array is required
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec = {1, 9, 0, 3, 8, 1, 1, 1};
    int n = vec.size();
    int freq = 1, ans = 0;

    for (int i = 0; i < n; i++)
    {
        if (freq == 0)
            ans = vec[i];

        if (ans == vec[i])
            freq++;

        else
            freq--;
    }
    cout << ans << endl;
}