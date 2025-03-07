#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve()
{
    int n;
    cin>>n;
    int x,s1=0,s2=0,s3=0;
    for(int i=0;i<n;i++) 
    {
        cin>>x;
        s1+=x;
    }
    for(int i=0;i<n-1;i++)
    {
        cin>>x;
        s2+=x;
    }
    for(int i=0;i<n-2;i++)
    {
        cin>>x;
        s3+=x;
    }
    cout<<s1-s2 << " "<< s2-s3<<endl;

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