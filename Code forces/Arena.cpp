#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,i,j,high;
    cin>>t>>n;
    int arr[n];

    for(i=0;i<t;i++)
    {
        for(j=0;j<n;j++)
    {
        cin>> arr[j];
    }
    }

    for(i=0;i<t;i++)
    {
        for(j=0;j<n;j++)
    {
        high=arr[0];
        if(high<arr[j])
        {
            high=arr[j];
            cout<<j<<endl;
        }
    }
    }

}
