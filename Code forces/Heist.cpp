#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,c=0;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
    cin>>arr[i];

     sort(arr,arr+n);

    for(int i=0;i<n-1;i++)
    {
        c+=(arr[i+1]-arr[i]-1);
    }
    cout<<c<<endl;
}
