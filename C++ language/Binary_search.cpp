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
    cout<<"The sorted array is"<<endl;
    for(int i=0;i<n;i++)
    cout<<arr[i]<<endl;

    int s;
    cout<<"Enter the number to be searched"<<endl;
    cin>>s;

    int low=0,high=n-1,mid;

    while(low<=high)
    {
        mid=(low+high)/2;

        if(arr[mid]<s)
        {
            low=mid+1;
        }
        else if(arr[mid]==s)
        {
            cout<<"The element is found at the index "<<mid<<endl;
            break;
        }
        else
        {
            high=mid-1;
        }
    }

    if(low>high)
    cout<<"The number is not found"<<endl;
}