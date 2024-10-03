#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,c,a,b,d=1,e;
    cin>> c>>a>>n;
    for(i=0;i<n-1;i++)
    {
        b=c*d;
        e=c+b;
        d++;
    }
    if(c>=a || c==n )
    cout<<0<<endl;
    else
    cout<<(2*e)-a<<endl;

}
