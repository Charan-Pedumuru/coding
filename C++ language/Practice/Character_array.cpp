#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,j;
    char arr[4][4];

    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            cin>>arr[i][j];
        }
    }


    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            cout<< arr[i][j];
        }
        cout<<endl;
    }
}
