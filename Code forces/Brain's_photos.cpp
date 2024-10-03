#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,i,j,c=0;
    cin>>n>>m;
    char arr[n][m];
    char a;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>arr[i][j];
            a=arr[i][j];
            if(a=='C'|| a=='Y'|| a=='M')
            {
                c++;
                break;
            }
        }
    }

    if(c==0)
    cout<<"#Black&White"<<endl;
    else
    cout<<"#Color"<<endl;
}
