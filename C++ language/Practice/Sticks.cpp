#include<bits/stdc++.h>

using namespace std;

int main()
{

    int t,i,high;
    cin>> t;
    int arr[t];
    for(i=0;i<t;i++)
    {
        cin>> arr[i];
    }
    for(i=0;i<t;i++)
    {
        high=arr[0];
        if(arr[i]>high)
        {
            high=arr[i];
        }
    }
    cout<<high<<endl;
}
