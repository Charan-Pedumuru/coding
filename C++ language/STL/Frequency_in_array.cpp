#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    map<int,int>a;    //unordered mapping in STL

    for(int i=0;i<v.size();i++)
    cin>>v[i];

    for(int i=0;i<v.size();i++)
    a[v[i]]++;

    for(auto i=a.begin();i!=a.end();i++)
    {
        cout<<i->first<<" "<<i->second<<endl;
    }
}