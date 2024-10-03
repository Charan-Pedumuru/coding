#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,n,sum=0,c=0;
    cin>> n;
    int arr[3];
    for(i=0;i<n;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>> arr[j];
            sum+=arr[j];

            if(sum==0)
            {
                c++;
                break;
            }
        }
    }

    if(c==1)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;

}
