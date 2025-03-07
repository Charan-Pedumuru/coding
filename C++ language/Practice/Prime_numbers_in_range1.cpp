#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int c=0;
    int t=a;

    while(t<=b)
    {
        for(int i=1;i<t;i++)
        {
            if(t%i==0)
            {
                c++;
            }
            
        }
        if (c<2)
            cout<<t<<endl;
        c=0;
        t++;
    }

}