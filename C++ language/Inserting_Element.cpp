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

    int p,v;
    cout<<"Enter the index where the element is to be inserted"<<endl;
    cin>>p;
    cout<<"Enter the value to be inserted"<<endl;
    cin>>v;

    if(p>n-1)
    cout<<"Insertion is not possible"<<endl;

    for(int i=n;i>=p;i--)
    arr[i+1]=arr[i];

    arr[p]=v;
    cout<<"The resultant array is"<<endl;

    for(int i=0;i<n;i++)
    cout<<arr[i]<<endl;


}