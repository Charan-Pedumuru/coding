#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void print_cell(int i, int j)
{
    char c1='a'+ j;
    char c2=' ';
    if(i%8==j%8 || i%8+j%8 ==8)
    cout<<c1;
    else
    cout<<c2;
}

void solve()
{
    for(int i=0;i<30;i++)
    {
        for(int j=0;j<26;j++)
        {
            print_cell(i,j);
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