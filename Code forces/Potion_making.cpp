#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    int arr[t];

    for(int i=0;i<t;i++)
    cin>> arr[i];

    for(int i=0;i<t;i++)
    {
        if(arr[i]%5==0 || arr[i]%2==0)
        {
            cout<<100/arr[i]<<endl;
        }


        else
        {
            cout<<100<<endl;
        }
    }
}
