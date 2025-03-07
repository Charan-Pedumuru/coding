// Given boundaries of 2 intervals, find the boundaries of intersection

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,x,y;
    cin>>a>>b;
    cin>>x>>y;

    int b1=max(a,x);
    int b2=min(b,y);

    (b1<b2)? cout<<"The intersecting boundaries are "<<b1<<" , "<<b2<<endl : cout<<-1<<endl;

}