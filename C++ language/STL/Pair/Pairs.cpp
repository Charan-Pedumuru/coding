#include <bits/stdc++.h>
using namespace std;

int main()
{
    pair<int, int> a = {1, 3};
    cout << a.first << " " << a.second << endl;

    pair<int, pair<int,int>> b = {1,{2,3}};
    cout<<b.first<<" "<<b.second.first<<" "<<b.second.second<<endl;

    pair<int, int> arr[]={{1,2},{3,4}};
    cout<<arr[1].first<<endl;
    cout<<arr[0].second<<endl;
}