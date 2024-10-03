#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,a=0,b=0,h,n;
    cin>>n>>h;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]>h)
        {
            a=a+=2;
        }
        else
        {
            b=b+1;
        }
    }
    cout<<a+b<<endl;

}
