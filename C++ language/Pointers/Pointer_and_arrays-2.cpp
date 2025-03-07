#include<bits/stdc++.h>

using namespace std;

int main()
{
    int arr[]={3,5,4,6,7};
    int i;

    for(i=0;i<5;i++)
    {
        cout<<&arr[i]<<endl;
        cout<<arr+i<<endl;
        cout<<arr[i]<<endl;
        cout<<*(arr+i)<<endl;
    }
}
