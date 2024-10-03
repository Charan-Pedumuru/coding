#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define mp make_pair

void solve(){
int m,f,r;
    cin>>m>>f>>r;

    if(m==-1 || f==-1)
    	cout<<'F'<<endl;
    else if(m+f>=80)
        cout<<'A'<<endl;
    else if(65<=m+f<80)
        cout<<'B'<<endl;
    else if(50<=m+f<65)
        cout<<'C'<<endl;
    else if(30<=m+f<50)
    {
        if(r>=50)
            cout<<'C'<<endl;
        else
            cout<<'D'<<endl;
    }
    else if(m+f<30)
        cout<<'F'<<endl;
}
 

signed main(){
    ios_base::sync_with_stdio(true);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while(t--)
        solve();
    
}