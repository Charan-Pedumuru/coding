#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
    cin>>arr[i];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            int a;

            if(arr[j]>arr[i])
            {
                a=arr[i];
                arr[i]=arr[j];
                arr[j]=a;
            }
        }
    }

    for(int i=0;i<n;i++)
    cout<<arr[i]<<endl;
}