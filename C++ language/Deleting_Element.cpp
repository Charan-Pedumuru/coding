#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of an array"<<endl;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++)
    cin>>arr[i];

    int l;
    cout<<"Enter the index to delete an element"<<endl;
    cin>>l;

    if(l>n-1)
    cout<<"Deletion is not possible"<<endl;

    for(int i=l;i<n;i++)
    arr[i]=arr[i+1];

    cout<<"The resultant array is "<<endl;

    for(int i=0;i<n;i++)
    cout<<arr[i]<<endl;

}