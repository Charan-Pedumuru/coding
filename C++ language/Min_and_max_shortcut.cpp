#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;

    cout<<min(a, min(b,c))<<" "<<max(a,max(b,c))<<endl;
    cout<<min({a,b,c})<<" "<<max({a,b,c})<<endl;
}