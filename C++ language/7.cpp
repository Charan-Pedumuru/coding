#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x,i;
    cout<< "Enter the size of an array"<<endl;
    cin>> x;
    int arr[x];
    for(i=0;i<x;i++)
    {
        cout<< "Enter the element at index "<<i<<endl;
        cin>> arr[i];
    }
    for(i=0;i<x;i++)
    {
        cout<< "The element at the index "<<i<< endl;
        cout<< "is "<<arr[i]<< endl;
    }
}
