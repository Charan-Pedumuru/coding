#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    char c='A';
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<c;

        }
        c++;
        
        cout<<endl;
    }
}