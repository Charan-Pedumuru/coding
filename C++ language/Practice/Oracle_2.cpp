#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> sum(n,0);

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++){
            int x;
            cin>>x;
            sum(i)+=x;
        }
    
    int cur=0;
    for(int i=0;i<n;i++)
        if(sum(i)>sum(cur))
        cur=i;

    cout<<cur<<endl;
}
