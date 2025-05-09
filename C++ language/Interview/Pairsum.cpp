#include <bits/stdc++.h>
using namespace std;

vector<int> pairsum(vector<int> vec, int tar)
{
    vector<int> ans;
    int n = vec.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (vec[i] + vec[j] == tar)
            {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
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