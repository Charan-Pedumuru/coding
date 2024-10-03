#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair

void solve()
{
    int n,m,p;
    cin>>n>>m>>p;

    int arr[n][m], arr1[m][p];
    int res[n][p];

    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>arr[i][j];
    for(int i=0;i<m;i++)
        for(int j=0;j<p;j++)
            cin>>arr1[i][j];
    for(int i=0;i<n;i++)
        for(int j=0;j<p;j++)
        {
            res[i][j]=0;
            for(int k=0;k<m;k++)
                res[i][j]+= arr[i][k] *arr1[k][j];
        }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<p;j++)
            cout<<res[i][j]<<" ";
        cout<<endl;
    }
        
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