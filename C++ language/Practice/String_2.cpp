#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string temp;
    getline(cin,temp);
    string arr[n];

    for(int i=0;i<n;i++)
    getline(cin, arr[i]);

    for(int i=n-1; i>=0;i--)
    cout<<"Hi"<<arr[i]<<endl;

}
