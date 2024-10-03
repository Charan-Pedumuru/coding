#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair

void solve()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++) cin>>arr[i];
    long long int a=0;
    for(int i=1;i<n;i++)
    {
        a+=max(0, arr[i-1]-arr[i]);
        arr[i]=max(arr[i], arr[i-1]);
    }
    cout<<a<<endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t=1;
    cin>>t;
    while(t--)  
    solve();
}