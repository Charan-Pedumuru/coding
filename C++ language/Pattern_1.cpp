#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void print_cell(int i, int j,int n)
{
    int decide=max(abs(i-n/2),abs(j-n/2));
    char c1='#';
    char c2='.';

    if(n%4==3)
    {
        swap(c1,c2);
    }
    if((decide)%2==0)
    cout<<c1;
    else
    cout<<c2;
}

void solve()
{
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            print_cell(i,j,n);
        }
        cout<<endl;
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