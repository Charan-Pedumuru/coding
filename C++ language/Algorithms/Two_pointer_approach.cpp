// Used to find Pairsum
// Remember the array should be sorted to use 2 pointer approach

#include <bits/stdc++.h>
using namespace std;

vector<int> pairsum(vector<int> vec, int tar)
{
    vector<int> ans;
    int n = vec.size();
    int i = 0, j = n - 1;

    while (i < j)
    {
        int pair_sum = vec[i] + vec[j];

        if (pair_sum > tar)
            j--;

        else if (pair_sum < tar)
            i++;

        else
        {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return ans;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5};
    int tar = 4;
    vector<int> ans = pairsum(nums, tar);
    cout << ans[0] << ", " << ans[1] << endl;
}