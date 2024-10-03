#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,a,m=1,n,i,j;
    cin>>t;

    for(i=0;i<t;i++)
    {
        cin>>a;
        int arr[a];

        for(j=0;j<a;j++)
        {
            cin>>arr[j];
            m*=arr[j];

        }
    }


    for(i=0;i<t;i++)
    {

        for(j=0;j<a;j++)
        {
           int b=sqrt(m);
           int c=isdigit(b);
        }
    }
}
