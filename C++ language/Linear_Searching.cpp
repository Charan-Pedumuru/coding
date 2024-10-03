#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++)
    cin>>arr[i];
    
    int s,c=0;
    cout<<"Enter the elemnt to be searched"<<endl;
    cin>>s;

    for(int i=0;i<n;i++)
    {
        if(s==arr[i])
        {
            cout<<"The element "<<s<<" "<<" is found at index "<<i<<endl;
            c++;
            break;
        }
    }
    
    if(c==0)
    cout<<"The element is not found"<<endl;
}