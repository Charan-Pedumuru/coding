#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,x1,y1,x2,y2;
    cin>>t;

    for(int i=0;i<t;i++)
    {
        cin>>x1>>y1;
        cin>>x2>>y2;

        if(x1==y1 && x2==y2)
        cout<<x2*y2<<endl;
        else
        cout<<x2*y2-(x1+y1)<<endl;
    }
}
