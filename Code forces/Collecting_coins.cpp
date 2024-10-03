#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,j,sum=0,a;
    cin>> n;
    int arr[4];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            cin>> arr[j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            sum=sum+arr[j];
        }
        if(sum%3==0)
        cout<<"YES"<<endl;
        else
        cout<<"No"<<endl;
    }

}
