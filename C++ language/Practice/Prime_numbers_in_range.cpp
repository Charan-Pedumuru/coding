#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair

void solve()
{
    int r;
    cin>>r;

    for(int i=1;i<=r;i++)
    {
        int fl=0;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                fl+=1;
                break;

            }
        }
        if(fl==0 && i!=1)
        cout<<i<<endl;
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t=1;
    //cin>>t;
    while(t--)
    solve();
}