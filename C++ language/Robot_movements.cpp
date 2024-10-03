#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define mp make_pair

void solve()
{
    int n,r,c,x,y,o,p;
    cin>>n>>r>>c>>x>>y;
    int a=x,b=y;

    string s;
    cin>>s;

    for(int i=0;i<s.size();i++)
    {
        if(i>0)
        {
            if(s[i]=='N')
            {
                x-=1;
                o=x;
            }
            

            else if(s[i]=='W')
            {
                y-=1;
                p=y;
            }

        }
        
        
        else if(s[i]=='S')
        {
            a+=1;
            o=a;
        }
        
        else if(s[i]=='E')
        {
            b+=1;
            p=b;
        }
        

    }

    cout<<o<<" "<<p<<endl;

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