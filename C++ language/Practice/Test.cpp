#include<bits/stdc++.h>
using namespace std;


#define int long long
#define pb push_back
#define F first
#define S second

using state = pair<int, int>;

const int mod = 1e9+7;
const int inf = 1e18;

void solve(){
    int n;
    cin>>n;

    if(n==1){
        cout<<"Not a prime or a composite"<<endl;
        return;
    }

    for(int i=2; i*i <=n; i++)
        if(n%i==0){
            cout<<"Not prime"<<endl;
            return;
        }
    //Loop i will go max till sqrt(n)
    cout<<"prime"<<endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int _t = 1;
    // cin>>_t;

    for(int i=0; i<_t; i++) solve();
}