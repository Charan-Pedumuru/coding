#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,k,n,t,m,c;
    cin>>t>>n>>k;
    int arr[n];
    for(i=0;i<t;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>> arr[j];
        }
    }
    sort(arr,arr+n);

    for(i=0;i<t;i++)
    {
        for(j=0;j<n;j++)
        {
            m=arr[n-1];
            c=arr[0];
            cout<<m-n<<endl;

        }
    }


}
