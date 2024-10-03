#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair

int solve()
{
    int a,b;
    cin>>a>>b;

    
    if(a==1)
    {
        int j=0;
        while(j*j<=b)
        {
            if((b%j==0) && (b/j==j)) return 1; 
            break;
            j+=1;
        }
        
    }
    else if(a==2)
    {
        int k=1;
        while(k*k*k<=b)
        {
            if((b%k==0) && (b/k==k*k)) return 1;
            break;
            k+=1;
        }
        
    } 
}

void print()
{
    if(solve()) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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