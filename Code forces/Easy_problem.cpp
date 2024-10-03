#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,i,c=0;
    cin>>a;
    int arr[a];
    for(i=0;i<a;i++)
    {
        cin>> arr[i];
    }
    for(i=0;i<a;i++)
    {
        if(arr[i]==1)
        {
            c++;
        }

    }
    if(c>0)
    cout<<"Hard"<<endl;
    else
    cout<<"Easy"<<endl;
}
